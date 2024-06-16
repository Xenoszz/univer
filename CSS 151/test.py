import math


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

K = 3  

def distance(p1, p2):
    return math.sqrt((p1[0] - p2[0])**2 + (p1[1] - p2[1])**2)

def merge_sort(arr):
    if len(arr) <= 1:
        return arr
    mid = len(arr) // 2
    left = merge_sort(arr[:mid])
    right = merge_sort(arr[mid:])
    return merge(left, right)

def merge(left, right):
    result = []
    while len(left) > 0 and len(right) > 0:
        if left[0][1] <= right[0][1]:
            result.append(left.pop(0))
        else:
            result.append(right.pop(0))
    result.extend(left)
    result.extend(right)
    return result

def knn(query, data, K):
    distances = [(k, distance(query, v[:2]), v[2]) for k, v in data.items()]
    sorted_distances = merge_sort(distances)
    return sorted_distances[:K]

result = knn(query, data, K)

for area_id, dist, has_gold in result:
    print(f"AreaID: {area_id}, Distance: {dist:.4f}, HasGold: {'Yes' if has_gold else 'No'}")