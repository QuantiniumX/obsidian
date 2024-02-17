 ****Binary Search**** is defined as a searching algorithm used in a sorted array by **repeatedly dividing the search interval in half***. The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(log N). It is better than [Linear Search](obsidian://open?vault=programming_implementation&file=Linear%20Search) that searches the elements linearly
 

**Conditions for Binary Search**
1. The array must be sorted.

[Diagram](obsidian://open?vault=obsidian&file=Computer_Science%2FCommon_Algorithms%2FExcalidraw%2FBinary%20Search.excalidraw)

### Implementation:-

##### Iterative Approach :-
~~~cpp
int binarySearch(std::vector<int> arr, int target, int low, int high){ //low = 0, high = arr.size() - 1
	while(low <= high){
		int mid = low + (high - low) / 2;
		if(arr[mid] == target){
			return mid;
		} else {
			if(arr[mid] > target){
				high = mid - 1;
			} else {
				low = mid + 1;
			}
		}
	}
	return -1;
}
~~~

##### Recursive Approach :-

~~~cpp
int binarySearch(std::vector<int>& arr, int target, int low, int high){
	if(high >=low){
		int mid = low + (high - low) / 2;
		if(arr[mid] == target){
			return mid;
		} else {
			if(arr[mid] > target){
				return binarySearch(arr, target, low, mid - 1);
			} else {
				return binarySearch(arr, target, mid + 1, high);
			}
		}
	}
	return -1;
}
~~~

##### Time Complexity :-
- Best Case - O(1)
- Average Case - O(log N)
- Worst Case - O(log N)

##### Advantages :-
- Faster than [linear Search](obsidian://open?vault=programming_implementation&file=Linear%20Search).
- It is better for larger arrays as we are dividing the array into halves.
- Applicable to sorted data 
- has a deterministic behavior.
- easy to implement.
- Is memory efficient as it doesn't require additional structure beyond what is necessary.
##### Disadvantages :-
- Requirement of sorted data.
- Require the elements to be comparable to find the needle.