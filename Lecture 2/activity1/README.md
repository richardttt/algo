# Activities

## Task 1/5

> Refer to the instruction in [GitHub Workflow](../github.md)

- Clone today's repo
- Create a new branch e.g answers
- Create a repository in GitHub
- Change remote to point to your repo

## Task 2/5: Brute force

- What is the maximum number of steps it would take to perform a linear search on an ordered array of size 100,000?
  > Refer to `./src/search-linear.cpp`
    - the time complexity is O(N). 
    - 100,000 steps is the number of steps it would take to perform a linear search.
## Task 3/5: Decrease-and-Conquer

- What is the maximum number of steps it would take to perform a binary search on an ordered array of size 100,000?

  > Refer to `./src/search-binary.cpp`
  - Time complexity is O(log n)
    - Number of steps it will take to perform is 17. log(100000) 

## Task 4/5: Quiz

32 teams qualified for the 2014 World Cup. If the names of the teams were arranged in sorted order (an array), how many items in the array would binary search have to examine to find the location of a particular team in the array, in the worst case?

- [4] At most, 32. 32/2 = 16 midpoint = 24 midpoint = 28 midpint = 30 final = 32
- [4] At most, 1. 32/2 = 16 midpoint = 8 midpoint = 4 midpoint = 2 final = 1
- [3+1] At most, 6.  32/2 = 16 midpoint = 8  midpoint = 4 final = 6
- [1] At most, 16.

## Task 5/5: Individual, at home

Refactor the code in `./src/task4.cpp` to use recursion

- Refer to the following [link](https://www.techiedelight.com/binary-search/)
- Make sure that you:
  - Replace `printf()` with` std::cout()`
  - Include the right headers e.g. `iostream`

## Links

- https://cpp.sh/
- https://www.techiedelight.com/binary-search/
- https://www.softwaretestinghelp.com/searching-algorithms-in-cpp/
- https://www.khanacademy.org/computing/computer-science/algorithms/binary-search/e/running-time-of-binary-search
