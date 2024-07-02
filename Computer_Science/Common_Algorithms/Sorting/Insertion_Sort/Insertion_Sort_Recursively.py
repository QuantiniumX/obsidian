def insertion_sort(A, i=None):              # T(i)
    '''Sort A[:i + 1]'''
    if i is None:
        i = len(A) - 1                      # O(1)
    if i > 0:                               # O(1)
        insertion_sort(A, i - 1)            # T(i - 1)
        insert_last(A, i)                   # S(i)


def insert_last(A, i):                      # S(i)
    '''Sort A[:i + 1] assuming sorted A[:i]'''
    if i > 0 and A[i] < A[i - 1]:           # O(1)
        A[i], A[i - 1] = A[i - 1], A[i]     # O(1)
        insert_last(A, i - 1)               # S(i - 1)


def main():
    arr = [37, 12, 89, 5, 61, 23, 8, 45, 72, 16]
    insertion_sort(arr)
    for num in arr:
        print(num)


main()
