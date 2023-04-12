# Activities

> The [modulo-calculator](#links) might be handy in these exercises.

## Task 1

- Refer to the following link. Discuss how open hashing works.
  https://www.cs.usfca.edu/~galles/visualization/OpenHash.html
- Open Hashing Practice. Refer to the following link. Move each record on the left to the appropriate bin on the right.
  https://opendsa-server.cs.vt.edu/OpenDSA/Exercises/Hashing/OpenHashPRO.html
- Given the following input (`4322, 1334, 1471, 9679, 1989, 6171, 6173, 4199`) and the hash function `x mod 10`, which of the following statements are true?
- [T] `9679, 1989, 4199` hash to the same value
- [T] `1471, 6171` hash to the same value
- [F] All elements hash to the same value
- [F] Each element hashes to a different value

## Task 2

- Bucket Hashing Practice. Refer to the following [link](https://opendsa-server.cs.vt.edu/OpenDSA/Exercises/Hashing/HashBucketPRO.html).
- The keys `12, 18, 13, 2, 3, 23, 5 and 15` are inserted into an initially empty hash table of length `10` using open addressing with hash function `h(k) = k mod 10` and **linear probing**. What is the resultant hash table?

## Task 3:

- What is the [Birthday Paradox](http://en.wikipedia.org/wiki/Birthday_problem)?
```
it's about probability of two or more people sharing the same birthday within a group of people.
it's a paradox because probability of people sharing the same birthday is much higher than what
we might assume intuitively.

```
- Why is it generally discussed with hashing?
```
it has to do with collision in hashing functions. the probablity of collision occuring increases as the number of input increases just like as number of people in a group increases the probablitiy of having similar birthday increases rapidly to close to almost 100%
```
- In a hash table of 9658 slots, what is the smallest number of records that must be inserted for the probability of a collision to be 61% or more? Use the calculator at this [link](https://opendsa-server.cs.vt.edu/ODSA/AV/Hashing/Birthday.html) :
  ```
 136 records.
 ```

- Discuss in groups how the following program works `./src/birthday.cpp`?

## Task 4: Individual (at home)

- Difference between `Separate Chaining` and `Open Addressing` collision handling techniques?

  https://www.geeksforgeeks.org/open-addressing-collision-handling-technique-in-hashing/

  https://www.geeksforgeeks.org/separate-chaining-collision-handling-technique-in-hashing/

  ```
  Separate chaining handle collision by creating a linked list
  to the bucket of has table. for instance in linear probing (open addressing) in case of collision value is added to next available free space. however, in separate chaning we will add linked list to the bucket to store this collision value.


  ```

- (Bonus) Run the following program and comment on the code `./src/hashtable.cpp`

```
0 ==> 54
1
2 ==> 20 ==> 56
3 ==> 87
4 ==> 76
5

We are using chaining for collision handling.
```

## Link(s)

- [modulo-calculator](https://www.calculators.org/math/modulo.php)
- [Practice Problems on Hashing](https://www.geeksforgeeks.org/practice-problems-on-hashing/)
