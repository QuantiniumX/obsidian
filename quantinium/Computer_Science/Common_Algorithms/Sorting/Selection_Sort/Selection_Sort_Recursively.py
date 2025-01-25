def prefix_max(arr, i):
    ''' Return index of maximum on A[:i + 1] '''
    if i > 0:
        j = prefix_max(arr, i - 1)
        if arr[i] < arr[j]:
            return j
    return i


def selection_sort(arr, i=None):
    ''' Selection Sorting algorithm recursively'''
    if i is None:
        i = len(arr) - 1
    if i > 0:
        j = prefix_max(arr, i)
        arr[i], arr[j] = arr[j], arr[i]
        selection_sort(arr, i - 1)


def main():
    arr = [37, 12, 89, 5, 61, 23, 8, 45, 72, 16]
    selection_sort(arr)
    for num in arr:
        print(num)


main()
