def counting_sort(arr):
    M = max(arr)
    count = [0] * (M + 1)
    output = [0] * len(arr)

    for num in arr:
        count[num] += 1

    for i in range(1, M + 1):
        count[i] += count[i - 1]

    for i in range(len(arr) - 1, -1, -1):
        output[count[arr[i]] - 1] = arr[i]
        count[arr[i]] -= 1

    return output


def main():
    arr = [37, 12, 89, 5, 61, 23, 8, 45, 72, 16]
    sorted_arr = counting_sort(arr)
    for num in sorted_arr:
        print(num)


main()
