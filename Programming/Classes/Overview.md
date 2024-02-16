**Class Declaration:**
A class declaration defines the blueprint for creating objects. It typically includes member variables (data) and member functions (operations on the data).
```cpp
class MyClass {
	int myInt;
	double myDouble;

	void myFunction();
}
```

**Access Specifiers:**
- `public`: Members declared as public are accessible from outside the class.
- `private`: Members declared as private are accessible only from within the class.

```cpp
class MyClass {
public: 
	int publicVar;
private:
	int privateVar;
}
```

**Constructor:**
Constructors are special member functions in a class that are automatically called when an object of that class is created. Their primary purpose is to initialize the object's data members or perform any necessary setup tasks.
```cpp
class MyClass {
public:
    int x;
    double y;

    // Constructor
    MyClass() {
        x = 0;    // Initialize x to 0
        y = 0.0;  // Initialize y to 0.0
    }
};

int main() {
    MyClass obj;  // Constructor called automatically
    // obj.x is now 0
    // obj.y is now 0.0
    return 0;
}
```

