A compound type is a type that is dened in terms of another type. C++ has several compound types, two of which—references and pointer

### References 
A reference defines an alternative name for an object. A reference type “refers
to” another type. We define a reference type by writing a declarator of the form &d, where d is the name being declared:
~~~
int ival = 1024;
int &refval = ival;
~~~

A reference must be initialized 

A reference is not an object. Instead, a reference is just another name for an already existing object. There it can be used as an alias.

When we assign to a reference, we are assigning to the object to which the reference is bound. When we fetch the value of a reference, we are really fetching the value of the object to which the reference is bound. Similarly, when we use a reference as an initializer, we are really using the object to which the reference is bound.
~~~cpp
int i = 24;
int &r = i; // correct
int &r = 10; // error: initializer must be an object
~~~

### Pointers
A *pointer* is a compound type that "points to" another type. Pointers are used for indirect access to objects. Unlike a reference, a pointer is an object in its own right. Pointers can be assigned and copied; a single pointer can point to several different  objects over its lifetime.


A pointer need not be initialized at the time it is defined. Pointer defined at block scope have undefined value if they are not initialized

- defining pointer - `int *p;` it is an int pointer.
- initializing the pointer - `int i = 42; int *p = &i;` - p stored the address of the i.The types must match because the type of the pointer is used to infer the type of the object to which the pointer points. If a pointer addressed an object of another type, operations performed on the underlying object would fail.
- Dereferencing - by using '*'  

#### Pointer value
- it can point to an object.
- it can point to the location just immediately past the end of an object.
- it can be a null pointer. ie not bound to an object.
- it can be invalid.
its and error t o copy or otherwise try to access the value of an invalid pointer.

#### Null Pointers
A null pointer does not point to any object. Code can check whether a pointer is null before attempting to use it. There are several ways to obtain a null pointer:
~~~cpp
int *p = nullptr;  //int *p = 0. This is best way to do it.
int *p = 0; directly initializes p2 from the literal constant 0. must #include <cstdlib>
int *p = NULL;
~~~

#### void* pointers
The type void* is a special pointer type that can hold the address of any object. Like any other pointer, a void* pointer holds an address, but the type of the object at that address is unknown.
~~~cpp
double obj = 3.14, *pv = &onj;
void *pd = &obj;
pv = pd  // pv and hold a pointer to any.
~~~
Generally, we use a void* pointer to deal with memory as memory, rather than using the pointer to access the object stored in that memory

### Extra Stuff
- We can have pointers to pointers.
- We can have references to pointers.
- We can do operations to pointers. since its just and address to the object we can add, subtract and do operation on the address.
- We can define multiple variable of same type as the same int. `int i  = 3, *p = &i, &r = i;`