def quick_sort(arr, low, high):
    if low < high:
        par = partition(arr, low, high)
        quick_sort(arr, low, par - 1)
        quick_sort(arr, par + 1, high)


def partition(arr, low, high):
    pivot = arr[high]
    i = low - 1
    for j in range(low, high):
        if arr[j] <= pivot:
            i += 1
            arr[i], arr[j] = arr[j], arr[i]
    arr[i + 1], arr[high] = arr[high], arr[i + 1]
    return i + 1


def main():
    arr = [37, 12, 89, 5, 61, 23, 8, 45, 72, 16]
    quick_sort(arr, 0, len(arr))
    for num in arr:
        print(num)


main()
