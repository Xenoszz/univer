def distance(list, query):
    return ((list[0] - query[0]) ** 2 + (list[1] - query[1]) ** 2) ** 0.5

def merge_sort(lst):
    if len(lst) <= 1:
        return lst
    mid = len(lst) // 2
    left = merge_sort(lst[:mid])
    right = merge_sort(lst[mid:])
    return merge(left, right)

def merge(left, right):
    result = []
    while left and right:
        if left[0][1] < right[0][1]:
            result.append(left.pop(0))
        else:
            result.append(right.pop(0))
    result.extend(left)
    result.extend(right)
    return result

def vote(k, sorted_distance_list):
    min_k = sorted_distance_list[:k]
    yes_count = sum([1 for _, _, has_gold in min_k if has_gold == 1])
    if yes_count > k / 2:
        return "Yes"
    else:
        return "No"

def knn(k, list, query):
    distance_list = [(key, distance(value, query), value[2]) for key, value in list.items()]
    sorted_distance_list = merge_sort(distance_list)
    min_k = vote(k, sorted_distance_list)
    min_k_distance_list = sorted_distance_list[:k]
    return min_k_distance_list

list = {
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

query = (52, 25)
k = 3

result = knn(k, list, query)

for area_id, distance, has_gold in result:
    print(f"AreaID: {area_id}, Distance: {distance:.4f}, HasGold: {'Yes' if has_gold == 1 else 'No'}")