# Activities

## Task 1

Refer to the following link. Explain how the Knapsack Algorithm works:
https://monicagranbois.com/knapsack-algorithm-visualization/

Knapsack can be considered as value optimization problem. weare given constraint in terms of capacity, and the weightage/value of each item. our goal is to maximize the value in such a way that it meets the capacity contraint.  we can solve these problems using brute force recurssive method or using dynamic programming by talking advantage for memoization.

## Task 2

Refer to the following link. What are the difference between the brute force and the optimized solutions to the Knapsack problem.
https://www.educative.io/blog/0-1-knapsack-problem-dynamic-solution
    - Time complexity of brute force silution is O(2^n) due to calls with iverlapping subcalls.
    - using DP we can reduce the time complexity to O(N*C) as memoization table stores results for all subproblems

## Task 3

There are different implementations of the stair case problem in the following link:
https://www.enjoyalgorithms.com/blog/climbing-stairs-problem

Compare the time and space complexity of the different approaches

## Task 4: Individual (at home)

- Difference between divide and conquer and dynamic programming
    - D & C involves breaking down a complex problem into smaller sub-problems & finding solutions for these sub-problems. DP on other hand optimizes time complexity by storing solutions for sub-problems.
- State some application of dynamic programming
    - graph theory, finding a shortest path
- Difference between recursion vs dynamic programming
    - recurssion is expensive in the sense that function calls are stacked. DP can use techniques like memoization to reduce the T.C
- Difference between Top down and bottom up approaches to dynamic programming
    - Top Down: Memoization: starts from the end and works backwards.
    - Bottom Up: Tabulation. tabulation uses iterations. we start from the beganing and goes to end. we avoid recurssive calls
- How to solve a Dynamic Programming Problem?
        - we can use these 7 steos to solve DP.
                -     1) recognize a DP problem
                      2) Identify problem variables
                      3)Clearly express the recurrence relation
                      4) Identify the base cases
                      5) Decide if you want to implement it iteratively or recursively
                      6) Add memoization
                      7)  Determine time complexity

> Refer to the [links](#links) section below

## Links

- https://cpp.sh/
- [Recursion vs dynamic programming](https://www.geeksforgeeks.org/introduction-to-dynamic-programming-data-structures-and-algorithm-tutorials/)
- [How to solve a Dynamic Programming Problem ?](https://www.geeksforgeeks.org/solve-dynamic-programming-problem/)
