# Activities

## Task 1:

- Refer to the following link. Discuss how Queues based on linked lists works:
  https://www.cs.usfca.edu/~galles/visualization/QueueLL.html


````
-It follows FIFO principle.
- values are appened (enqued) at the end and removed(dequed) from the beginning.
- Head is at the start(front element) and tail is at the end(rear element).
````


## Task 2:

- The following snippet is from `./src/queue.cpp` lines 8-10. What happens if `front`, `rear` and `temp` were not global variables?

```cpp
struct node *front = NULL;
struct node *rear = NULL;
struct node *temp;
```
````
then we won't be able to access pointers to front and rear. it 
will be out of scope in our queue functions.
````
## Task 3:

- The following snippet is from `./src/queue.cpp` lines 11-28. Discuss in groups how the code works:

```cpp
void Insert(int val)
{
    if (rear == NULL)
    {
        rear = new node;
        rear->next = NULL;
        rear->data = val;
        front = rear;
    }
    else
    {
        temp = new node;
        rear->next = temp;
        temp->data = val;
        temp->next = NULL;
        rear = temp;
    }
}
```
````
We first check status of linked list if it's empty we create a new rear node,
points it's next link to null and put data in rear node. front = rear, make it the first link.
if there is already list we create new temp node, points previous rear node's next to temp node,assign data to temp node and point it's next link to null (so this is the last element)
and at last assign this temp node to rear.
````

## Task 4: Individual, at home

- Discuss the various operations that can be performed on a linked list. Refer to the following link:
  https://www.softwaretestinghelp.com/linked-list/

````
we can perform insertion(at begining, at end or after given node.) and deletion(We can delete the first node, last node or a random kth node from the linked list) operations on a linked list.

````


## Links

- https://cpp.sh/
