arr = [12, 2, 28, 47, 1, 89, 27, 37, 9, 8]

for i in range(len(arr)):
    for j in range(len(arr) - i - 1):
        if arr[j] > arr[j + 1]:
            arr[j],arr[j + 1] = arr[j + 1], arr[j]

print(arr)
