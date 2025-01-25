arr = [12, 2, 28, 47, 1, 89, 27, 37, 9, 8]

for i in range(len(arr)):
    mini = i
    for j in range(i + 1, len(arr)):
        if arr[mini] > arr[j]:
            mini = j
    if mini != i:
        arr[i], arr[mini] = arr[mini], arr[i]

print(arr)
