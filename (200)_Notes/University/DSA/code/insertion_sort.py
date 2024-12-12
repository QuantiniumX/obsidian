arr = [12, 2, 28, 47, 1, 89, 27, 37, 9, 8]

for i in range(len(arr)):
    j = i
    while j > 0 and arr[j - 1] > arr[j]:
        arr[j], arr[j - 1] = arr[j - 1], arr[j]
        j -= 1

print(arr)
