def merge(first, second):
    final = []
    i = j = 0
    while i < len(first) and j < len(second):
        if first[i] <= second[j]:
            final.append(first[i])
            i += 1
        else:
            final.append(second[j])
            j += 1

    final.extend(first[i:])
    final.extend(second[j:])
    return final


def merge_sort(arr):
    if len(arr) < 2:
        return arr

    mid = len(arr) // 2
    left = merge_sort(arr[:mid])
    right = merge_sort(arr[mid:])

    return merge(left, right)


def main():
    arr = [37, 12, 89, 5, 61, 23, 8, 45, 72, 16]
    sorted_arr = merge_sort(arr)
    for num in sorted_arr:
        print(num)


main()
