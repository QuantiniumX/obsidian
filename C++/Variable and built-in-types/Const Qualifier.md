 A variable that we dont want to be changed further in the program. we can do this by just adding const before the data type.
 > const int bufSize = 512;

A constant variable should be initialized i.e. `const ink k ` will throw an eroor.

When a const object is initialized from the compile time constant, the compiler will usually replace uses of the variable with its corresponding value during compilation. That is, the compiler will generate code using the value int the places that out code uses `bufSize`

- initialize and const - A const can use most but not all operations that we do on the variable. The one restriction is that we may use only operation that cannot change an object. For example-
~~~cppp
int i = 42;
const int ci = i; // value in ci is copied to ci and ci is a const
int j = ci; // value of ci is copied to j
~~~

Since ci is a const int, the value in ci is an int. The constness of ci matters only for operations that might change ci. When we copy ci to initialize j, we don't care that ci is a const.

- By default, const objects are local to a file. If we want the other file to be able to access the const we use `extern

### References to const
We can bind a reference to an object of a const type. To do so we use a reference to const, which is a reference that refers to a const type.
~~~cpp
const int i = 1024;
const int &ri = i;
~~~
The reference and the int cannot change further.

It is important to realize that a reference to const restricts only what we can do through that reference. Binding a ref to const to an object says nothing about whether the underlying object itself is a const.

~~~cpp
int i = 42;
int &ri = i; // r1 is bound to i
const int &r2 = i; // r2 also bound to i  but cannot be used to change i
~~~

### Pointers and const
We can define pointers that point to either const or non-const types. Like a const ref, a const pointer may not be used to change the object to which the pointer points. 

~~~cpp
const double pi = 3.14; // pi isconst; its value may not be changed
double *ptr = &pi; // error: ptr is a plain pointer
const double *cptr = &pi; // ok:cptr may point to a double that is const
*cptr = 42; // error: cannot assign to *cptr
~~~

Like a reference to const, a pointer to const says nothing about whether the object to which th pointer points is const.

- const Pointer - since a pointer itself is a object, we can have a pointer that itself is a const. 
~~~cpp
int num = 0;
int *const curnum = &num;
const double pi = 3.1415;
const double *const pip = &pi;
~~~

The best way to understand these declarations is to read them from right to left.


> *Top-level* *const* - When the pointer itself is a const.
>*Low-level* *const* - When the pointer can point to const object 


### constexpr and const expressions
A constant expression is an expression whose value cannot change and that can be evaluated at compile time.

~~~cpp
const int max = 20 // is a const expression
const int limit = max + 1; // limit is a const expressoin
int staff_size = 27 // not a const expression
const int sz = get_size(); // sz is not a const expression 
~~~


In a large system, it can be difficult to determine that an initializer is a const expression. Under the mew standard, we can ask the compiler to verify that a variable is a const expression by declaring the variable in a constexpr declaration.
~~~cpp
constexpr int mf = 20;
constexpr int limit = mf + 1
constexpr int sz = size() // only if size() is a constexpr
~~~

