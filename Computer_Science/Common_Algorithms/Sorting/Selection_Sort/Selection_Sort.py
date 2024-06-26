def selection_sort(arr):
    for i in range(0, len(arr)):
        smallest_idx = i
        for j in range(i, len(arr)):
            if arr[j] < arr[smallest_idx]:
                smallest_idx = j

        if smallest_idx != i:
            arr[i], arr[smallest_idx] = arr[smallest_idx], arr[i]
    return arr


def main():
    arr = [37, 12, 89, 5, 61, 23, 8, 45, 72, 16]
    selection_sort(arr)
    for num in arr:
        print(num)


main()
