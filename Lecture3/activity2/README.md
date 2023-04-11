# Activities

## Task 1

- Refer to the following link. Discuss how bubble Insertion works:
  https://opendsa-server.cs.vt.edu/ODSA/AV/Sorting/insertionsortAV.html

````
Element is inserted in it's sorted position one at a time.
Intermediate results are not useful in insertion sort in contrast with bubble sort. In bubble sort first pass means biggest number is at the end, this is not the case with insertion sort.
stable: Yes it keeps the order.
adaptive: Yes, as it takes advantage of sorted array. We have O(n) time complexity in this case.


````

## Task 2

- The following snippet is from `./src/insertion.cpp` lines 12-22. Discuss in groups how the code works:

```cpp
    for (int k = 1; k < 10; k++)
    {
        int temp = myarray[k];
        int j = k - 1;
        while (j >= 0 && temp <= myarray[j])
        {
            myarray[j + 1] = myarray[j];
            j = j - 1;
        }
        myarray[j + 1] = temp;
    }
```

````
first for loop is setting k index to traverse the array (passes).
we assign the value myarray[k] to temp variable. This is the value we 
will compare with.
next, j initialized to one element less than K index. This is done so we
can compare the value stored in temp to values to it's left side.

in while condition we make sure that j is always greater than 0, so that
we won't accidentaly try to compare non existant myarray[-1] on line 28.
and if temp value is also equal or less then myarray[j] we enter while loop.
In this case we shift the element at myarray[j] to one place ahead myarray[j+1]
and decrease the index j so that we can compare with all other elements on left side until
we reach index 0. in that case we assign the element at index 0 using myarray[j +1] = temp.
````

## Task 3

- Discuss the complexity analysis of insertion sort. Refer to the link below:
  https://www.softwaretestinghelp.com/insertion-sort/

````
- Time Complexity
Number of passes: n-1
Total possible Comparisons/swaps: 1+2+3+...+(n-1) = n(n-1)/2 = O(n^2)

Best case: O(n) if array is already sorted.

````

## Links

- https://cpp.sh/
