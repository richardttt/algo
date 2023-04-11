# Activities

## Task 1

- Refer to the following link. Discuss how bubble sort works:
  https://opendsa-server.cs.vt.edu/embed/bubblesortAV

```
We can observe that in each pass, the largest element is sorted, thus after single
pass we can pick largest element from the list, after 2 passes 2 largest elements and so on.
O(n^2) is the worst case in this case. 
Bubble sort is stable as it will keep ordering of the same weightage elements.
Buublesort can be made adaptive by using flag.

```

## Task 2

- Refer to the following link. Your task is to show the behavior for one iteration of the outer for loop of Bubble Sort (Try at least 3 cases).
  https://opendsa-server.cs.vt.edu/ODSA/Exercises/Sorting/BubsortPRO.html

## Task 3

- The following snippet is from `./src/bubble.cpp` lines 16-28. Discuss in groups how the code works:

```cpp

    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        pass++;
    }
```
````
we are comparing if an element is less than previous element, if it is we swap the position of elements.
````


- The following snippet is from `./src/selection.cpp` lines 34-41. Discuss in groups how the code works:

```cpp
    for (j = i + 1; j < 10; j++)
    {
        if (myarray[j] < ele_small)
        {
            ele_small = myarray[j];
            position = j;
        }
    }
```

````
it compares next element in an array (j index) to the element in ele_small variable. if 
element at j index is smaller than element in ele_small it assigns
value of element at j index to ele_small and change the index position to that of 
j to reflect the index of smaller element.
````



## Task 4: Individual, at home

- Discuss the complexity analysis of selection sort. Refer to the link below:
  https://www.softwaretestinghelp.com/selection-sort/

````
number of passes required : n-1
total possible comparisons = 1+2+3...(n-1) = O(n^2)
Max swaps: n-1
Complexity is O(n^2).
Stable: No, doesn't keep the order.
adabtable: No, because it doesn't take advantage of sorted array.Number of steps remains same.



````


## Links

- https://cpp.sh/
