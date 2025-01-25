def insertion_sort(arr):
    for i in range(0, len(arr)):
        j = i
        while j > 0 and arr[j - 1] > arr[j]:
            arr[j - 1], arr[j] = arr[j], arr[j - 1]
            j -= 1

    return arr


def main():
    arr = [37, 12, 89, 5, 61, 23, 8, 45, 72, 16]
    sorted_arr = insertion_sort(arr)
    for num in sorted_arr:
        print(num)


main()
