def bubble_sort(arr):
    n = len(arr)
    swapped = True
    while swapped:
        swapped = False
        for i in range(1, n):
            if arr[i - 1] > arr[i]:
                # TIL
                arr[i - 1], arr[i] = arr[i], arr[i - 1]
                # temp = arr[i - 1]
                # arr[i - 1] = arr[i]
                # arr[i] = temp
                swapped = True
        n -= 1
    return arr


def main():
    arr = [37, 12, 89, 5, 61, 23, 8, 45, 72, 16]
    sorted_arr = bubble_sort(arr)
    for num in sorted_arr:
        print(num)


main()
