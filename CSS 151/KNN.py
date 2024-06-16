import math

def euclidean_distance(point1, point2):
    return math.sqrt(sum([(a - b) ** 2 for a, b in zip(point1, point2)]))

def find_minimum_distance(data, query, k):
    distances = {}
    for area_id, point in data.items():
        distance = euclidean_distance(point, query)
        distances[area_id] = distance
    return sorted(distances.items(), key=lambda x: x[1])[:k]

def merge_sort(arr):
    if len(arr) <= 1:
        return arr
    mid = len(arr) // 2
    left_half = arr[:mid]
    right_half = arr[mid:]
    return merge(merge_sort(left_half), merge_sort(right_half))

def merge(left, right):
    merged = []
    left_index = 0
    right_index = 0
    while left_index < len(left) and right_index < len(right):
        if left[left_index][1] < right[right_index][1]:
            merged.append(left[left_index])
            left_index += 1
        else:
            merged.append(right[right_index])
            right_index += 1
    merged.extend(left[left_index:])
    merged.extend(right[right_index:])
    return merged

def knn(data, query, k):
    distances = find_minimum_distance(data, query, k)
    sorted_distances = merge_sort(distances)
    return [(area_id, round(distance, 4), 'Yes' if data[area_id][2] == 1 else 'No') for area_id, distance in sorted_distances]

data = {
    "1": [54, 97, 1],
    "2": [99, 91, 0],
    "3": [61, 63, 1],
    "4": [43, 95, 0],
    "5": [60, 10, 1],
    "6": [40, 74, 0],
    "7": [16, 92, 1],
    "8": [8, 8, 0],
    "9": [90, 37, 1],
    "10": [13, 32, 0],
    "11": [85, 75, 1],
    "12": [98, 23, 0],
    "13": [94, 74, 1],
    "14": [54, 38, 0],
    "15": [36, 42, 1]
}

query = [52, 25]
k = 3

result = knn(data, query, k)
for area_id, distance, has_gold in result:
    print(f"AreaID: {area_id}, Distance: {distance}, HasGold: {has_gold}")