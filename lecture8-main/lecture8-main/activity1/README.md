# Activities

---

> [Course Feedback](https://ojp.metropolia.fi/lomakkeet/1/lomake.html?code=VFQwMEZFMzktMzAwMQ==)

---

## Task 1

- What is the difference between function overloading and function templates. You can refer to the programs in the `./src/` folder as well as [Links 2 and 3](#links) below.
- Rewrite the following program using templates

```cpp
#include <iostream>

int add(int x, int y)
{
    return x + y;
}

double add(double x, double y)
{
    return x + y;
}

int main()
{
    std::cout << add(1, 2); // calls add(int, int)
    std::cout << '\n';
    std::cout << add(1.2, 3.4); // calls add(double, double)

    return 0;
}
```

## Task 2

Refer to the following link:
https://www.softwaretestinghelp.com/vectors-in-stl/

Discuss the difference between

- Size()- the number of elements in the vector container, in-built function and capacity() storage space. There is a difference between size and capacity. The capacity of a vector is the total number of elements it can hold. The total amount of storage is what capacity is, but how much content (elements) are there inside the vector is what the size of a vector represents.
- begin()-Returns iterator pointed to the first element of the vector container. and cbegin()- Returns a constant iterator pointing to the first element in the vector container.
- end()- Returns an iterator pointing to the element that follows the last element in the vector. and cend()-Returns a constant iterator pointing to the element following the last element of the vector container.
set::cend() is a built-in function in C++ STL which returns a constant iterator pointing to the position past the last element in the container. The iterator cannot be used to modify the elements in the set container. The iterators can be increased or decreased to traverse in the set accordingly.
The set::cbegin() is a built-in function in C++ STL which returns a constant iterator pointing to the first element in the container. The iterator cannot be used to modify the elements in the set container. The iterators can be increased or decreased to traverse the set accordingly.

## Links

1. https://cpp.sh/
2. https://www.learncpp.com/cpp-tutorial/function-templates/
3. https://www.learncpp.com/cpp-tutorial/function-overload-differentiation/
4. https://www.geeksforgeeks.org/design-and-analysis-of-algorithms/
