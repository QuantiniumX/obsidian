defined in `<array>`
`std::array` is a container that encapsulates fixed size [arrays](https://en.cppreference.com/w/cpp/container/array).

This container is an aggregate type with the same semantics as a struct holding a [C-style array](https://en.cppreference.com/w/cpp/language/array "cpp/language/array") T[N] as its only non-static data member. Unlike a C-style array, it doesn't decay to T* automatically. As an aggregate type, it can be initialized with [aggregate-initialization](https://en.cppreference.com/w/cpp/language/aggregate_initialization "cpp/language/aggregate initialization") given at most `N` initializers that are convertible to `T`: 
```cpp
std::array<int, 3> a = {1, 2, 3};.
```

The struct combines the performance and accessibility of a C-style array with the benefits of a standard container, such as knowing its own size, supporting assignment, random access iterators, etc.

#### Element access
| Functions | Meaning |
| ---- | ---- |
| [at](https://en.cppreference.com/w/cpp/container/array/at) | access specified element with bounds checking |
| [operator[]](https://en.cppreference.com/w/cpp/container/array/operator_at) | access specified element |
| [front](https://en.cppreference.com/w/cpp/container/array/front) | access the first element |
| [back](https://en.cppreference.com/w/cpp/container/array/back) | access the last element |
| [data](https://en.cppreference.com/w/cpp/container/array/data) | direct access to the underlying contiguous storage |

#### iterators
| Functions | Meaning |
| ---- | ---- |
| [begin, cbegin](https://en.cppreference.com/w/cpp/container/array/begin) | returns an iterator to the beginning |
| [end, cend](https://en.cppreference.com/w/cpp/container/array/end) | returns an iterator to the end |
| [rbegin, crbegin](https://en.cppreference.com/w/cpp/container/array/rbegin) | returns a reverse iterator to the beginning |
| [rend, crend](https://en.cppreference.com/w/cpp/container/array/rend) | returns a reverse iterator to the end |

#### Capacity
| Functions | Meaning |
| ---- | ---- |
| [empty](https://en.cppreference.com/w/cpp/container/array/empty) | checks whether the container is empty |
| [size](https://en.cppreference.com/w/cpp/container/array/size) | returns the number of elements |
| [max_size](https://en.cppreference.com/w/cpp/container/array/max_size) | returns the maximum possible number of elements |

#### Operations
| Functions | Meaning |
| ---- | ---- |
| [fill](https://en.cppreference.com/w/cpp/container/array/fill) | fill the container with specified value |
| [swap](https://en.cppreference.com/w/cpp/container/array/swap) | swaps the contents |

```cpp
#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <string>
 
int main()
{
    // Construction uses aggregate initialization
    std::array<int, 3> a1{{1, 2, 3}}; // Double-braces required in C++11 prior to
    std::array<int, 3> a2 = {1, 2, 3}; // Double braces never required after =
 
    // Container operations are supported
    std::sort(a1.begin(), a1.end());
    std::ranges::reverse_copy(a2, std::ostream_iterator<int>(std::cout, " "));
    std::cout << '\n';
 
    // Ranged for loop is supported
    std::array<std::string, 2> a3{"E", "\u018E"};
    for (const auto& s : a3)
        std::cout << s << ' ';
    std::cout << '\n';
 
    // Deduction guide for array creation (since C++17)
    [[maybe_unused]] std::array a4{3.0, 1.0, 4.0}; // std::array<double, 3>
 
    // Behavior of unspecified elements is the same as with built-in arrays
    [[maybe_unused]] std::array<int, 2> a5; // No list init, a5[0] and a5[1]
                                            // are default initialized
    [[maybe_unused]] std::array<int, 2> a6{}; // List init, both elements are value
                                              // initialized, a6[0] = a6[1] = 0
    [[maybe_unused]] std::array<int, 2> a7{1}; // List init, unspecified element is value
                                               // initialized, a7[0] = 1, a7[1] = 0
}
```
