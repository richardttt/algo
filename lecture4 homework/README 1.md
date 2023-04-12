# Activities



## Task 4: Individual (at home)

1. Merge-sort has better worst case performance than quicksort. So why Quick-sort is considered better than Merge-sort? Refer to the following article
   https://www.geeksforgeeks.org/quicksort-better-mergesort/

```
Quick sort requires less space than mergesort. Quick sort is an in-place sorting algorithm, therefore no additional storage space is needed for sorting as we do not create temporary arrays for merges.

Quick sort is faster in virtual memory environment due to it's good cache locality. 

```
2. Refer to the following article. Analyze the complexity of the Merge-sort algorithm.
   https://www.softwaretestinghelp.com/merge-sort/

```
time complexity is O(n log n). 
we need to consider reccursive step where the problem is divided into 2 and the merge of two list of n/2 length.

it is not adaptive as it does not take advantage of sorted list.
it takes o(n) extra space when we use arrays , all the smaller lists we create in divide phase.

it is stable sort as it maintains the order of items.

```
3. Refer to the following article. Analyze the complexity of the Quick-sort algorithm.
   https://www.softwaretestinghelp.com/quick-sort/

```

Worst case time complexity is	O(n^2 ). However this can be improved by 
optimising the selection of pivot.

quick sort is neither adaptive or stable. However, it takes less space than merger sort.

```