# Activities

## Task 1

- Refer to the following link. Discuss the characteristics of Greedy approach:
  https://www.geeksforgeeks.org/greedy-approach-vs-dynamic-programming/

  Answer:
  A Greedy algorithm is an algorithmic paradigm that builds up a solution piece by piece, always choosing the next piece that offers the most obvious and immediate benefit. So the problems where choosing locally optimal also leads to a global solution is the best fit for Greedy. 


## Task 2

- Explain how the code in `./src/fkp.cpp` works. Refer to the following link:
  https://www.geeksforgeeks.org/fractional-knapsack-problem/

  Answer:
  Calculate the ratio(value/weight) for each item.
  Sort all the items in decreasing order of the ratio.
  Initialize res =0, curr_cap = given_cap.
  Do the following for every item “i” in the sorted order:
  If the weight of the current item is less than or equal to the remaining capacity then add the value of that item into the result
  Else add the current item as much as we can and break out of the loop.
  Return res.

## Task 3

- Explain how the code in `./src/asp.cpp` works. Refer to the following link:
  https://www.geeksforgeeks.org/activity-selection-problem-greedy-algo-1/

## Task 4: Individual (at home)

- Refer to te following link. Explain the differences between Greedy Algorithm and Dynamic Programming
  https://www.geeksforgeeks.org/greedy-approach-vs-dynamic-programming/

## Link(s)

- https://cpp.sh/
