It is a linear data structure that can be visualized as a **chain** with different **nodes connected**, where each **node** represents a different element. The difference between arrays and linked lists is that, unlike arrays, the elements are not stored at a contiguous location.
[Linked Lists VS Arrays](obsidian://open?vault=obsidian&file=Data_Structures%2FExcalidraw%2FLinked_lists_vs_arrays.excalidraw)

A linked list is a data structure containing two crucial pieces of information, the first being the **data** and the other being **the pointer to the next element**. The **‘head’** is the **first node**, and the **‘tail’** is the **last node** in a linked list.

Linked Lists are of two types :-

1. Singly linked lists :- Each node points to next node in sequence. Transversal is in unidirectional from head to tail.
2. Doubly linked lists :- Each node points to both next and previous node this providing bidirectional transversal.
3. Circular linked lists :- Last node points to the head node thus forming a close loop.

~~~cpp
class Node{
    Public: 
    int data; 
    Node* next;
    Public:
    // constructor
    Node (int data1, Node* next1){
        data=data1; 
        next=next1; 
    }
    Node (int data1){
        data=data1; 
        next=nullptr; 

    }
};

int main(){
    vector<int> arr={2,5,8,7};
    Node* y= new Node(arr[0]);
    cout<<y<<'\n'; // returns the memory value
    cout<<y->data<<'\n'; // returns the data stored at that memory point
}
~~~

- In class Node, data contains the value and the pointer contains the address to the next node.
- We define a constructor to assign values to the new node.
- A **new** keyword is used to dynamically allocate memory to a node with data as arr[0].