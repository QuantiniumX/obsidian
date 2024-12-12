An array is a contiguous space in memory to store variable of similar data type. Array are stack allocated unless they are dynamically allocated.

```c
int main() {
	int arr[5];
	arr[0] = 10;
	arr[1] = 10;
	arr[2] = 10;
	arr[3] = 10;
	arr[5] = 10;

	for(int i = 0; i < 5; i++) {
		printf("%d", arr[i]);
	}
	printf("\n");
}
```

In c like languages, we use the index no to fetch or update the value of element in array. In c like languages , the index starts at 0 and in some like lua it starts at 1.

### Array operations
#### Insertion
- Insertion at start
- Insertion at any position
- Insertion at last
```c
int arr[100] = {0};
n = 0;
int x = 50;
pos = 3; // 0 for start , 4 for last
n++; // increase size by 1

for(int i = n - 1;i > pos; i--) {
	arr[i] = arr[i - 1];
}

arr[pos] = x;
```

#### Popping
```c
for(int i = 0; i < n- 1;i++) {
	arr[i] = arr[i + 1];
}
```

#### Updating
just index it bro

### Searching
- [[Linear Search]]
- [[Binary Search]]

### Multidimensional array
```c
int arr[5][5];
```

```c
//multiplying two arrays
for(int i = 0; i < 5; i++) {
	for(int j = 0; j < 5; j++) {
		res[i][j] = 0;
		for(int k = 0; k <5; k++) {
			res[i][j] += arr1[i][k] * arr2[k][j];
		}
	}
}
```

