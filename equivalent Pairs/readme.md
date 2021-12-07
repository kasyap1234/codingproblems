Equivalent Pairs
Question 918 of 1031
Easy
You are given a list of integers nums. Return the number of pairs i < j such that nums[i] = nums[j].

Constraints

0 ≤ n ≤ 100,000 where n is the length of nums
Example 1
Input
nums = [3, 2, 3, 2, 2]
Output
4
Explanation
We have index pairs (0, 2), (1, 3), (1, 4), (3, 4).
Solved
1,940
Attempted
2,360
Rate
82.21%
Hint #1
How many pairs do we get from a list that contains the same number n times?
Hint #2
For every index  i, check how many elements are there from 0 to (i-1)th index having value equal to a[i].
Companies
