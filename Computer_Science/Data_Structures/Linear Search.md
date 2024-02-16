**Linear Search** is defined as a sequential search algorithm that starts at one end and goes through each element of a list until the desired element is found, otherwise the search continues till the end of the data set.

[Diagram](obsidian://open?vault=obsidian&file=Data_Structures%2FExcalidraw%2FLinear%20Search.excalidraw)

#### Implementation:-

##### Iterative Approach:-
~~~cpp
int linearSearch(std::vector<int>& arr, int target){
	for(int i = 0; i < arr.size(); i++){
		if(arr[i] == target){
			return i;
		}
	}
	return -1;
}
~~~

##### Recursive Approach:-

~~~cpp
int linearSearch(std::vector<int>& arr, int target, int index){
//starting index = 0
	if(index >= arr.size()){
		return -1;
	}
	if(arr[index] ==  target){
		return index;
	}
	return linearSearch(arr, target, index + 1)
}
~~~

#### Time Complexity 
- Best Case - O(1)
- Worst Case - O(N)
- Average Case - O(N)


Should be applied on small datasets.

