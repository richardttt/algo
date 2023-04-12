# Activities

## Task 1

- Refer to the following link. Discuss how Min Heap data structure works:
  https://www.cs.usfca.edu/~galles/visualization/Heap.html

- Min heap is a binary tree where a root node has the minimum key in the ree.  It is almost a complete binary trrr, except at the last level. Except for the last two layers every other node has two children
## Task 2

- Refer to the following link.
  https://iq.opengenus.org/time-and-space-complexity-of-heap/

Discuss the Time and Space Complexity of Heap data structure operations, in the Best case, average case and worst case.


## Task 3

- Explain how the code in ./src/priority-queue.cpp works. Refer to the following link:
  https://www.geeksforgeeks.org/priority-queue-using-binary-heap/

## Task 4: Individual (at home)

- Explain how the code in ./src/heap.cpp works. Refer to the following link:
  https://www.geeksforgeeks.org/binary-heap/

  - Insertion
  - We checks if the key satisfied min heap property; by comparing each key with parent 
    and swapping accordingly
    while (i != 0 && harr[parent(i)] > harr[i]) 
    {   
        swap(&harr[i], &harr[parent(i)]);
        i = parent(i);
    }
}

- Deletion : We reduce the key to be removed to minus inifinity and extract it from the tree.
    - void MinHeap::deleteKey(int i)
        {
           decreaseKey(i, INT_MIN);
          extractMin();
        }
  - deceaseKey(): We are decreasing the key in this function; smallest will be at root
  - extractMin(): we remove the smallest key
 
## Link(s)

- https://cpp.sh/
- https://www.geeksforgeeks.org/array-representation-of-binary-heap/
