20 Patterns to Master Dynamic Programming


Dynamic Programming (DP) is arguably the most difficult topic for coding interviews.

But, like any other topic, the fastest way to learn it is by understanding different patterns that can help you solve a wide variety of problems.


In this article, I’ll walk you through 20 patterns that will make learning DP much easier.

I’ll share when to use each pattern and provide links to LeetCode problems you can practice to learn them better.

I have listed them from easy to hard and also linked resources to learn each pattern.

1. Fibonacci Sequence

The Fibonacci sequence pattern is useful when the solution to a problem depends on the solutions of smaller instances of the same problem.

There is a clear recursive relationship, often resembling the classic Fibonacci sequence F(n) = F(n-1) + F(n-2).

LeetCode Problems:
LeetCode 70: Climbing Stairs

LeetCode 509: Fibonacci Number

LeetCode 746. Min Cost Climbing Stairs

2. Kadane's Algorithm

Kadane's Algorithm is primarily used for solving the Maximum Subarray Problem and its variations where the problem asks to optimize a contiguous subarray within a one-dimensional numeric array

LeetCode Problems:
LeetCode 53: Maximum Subarray

LeetCode 918: Maximum Sum Circular Subarray

LeetCode 152: Maximum Product Subarray

3. 0/1 Knapsack

The 0/1 Knapsack pattern is useful when:

You have a set of items, each with a weight and a value.

You need to select a subset of these items.

There's a constraint on the total weight (or some other resource) you can use.

You want to maximize (or minimize) the total value of the selected items.

Each item can be chosen only once (hence the "0/1" - you either take it or you don't).

LeetCode Problems:
LeetCode 416: Partition Equal Subset Sum

LeetCode 494: Target Sum

LeetCode 1049. Last Stone Weight II

4. Unbounded Knapsack
The Unbounded Knapsack pattern is useful when:

You have a set of items, each with a weight and a value.

You need to select items to maximize total value.

There's a constraint on the total weight (or some other resource) you can use.

You can select each item multiple times (unlike 0/1 Knapsack where each item can be chosen only once).

The supply of each item is considered infinite.

LeetCode Problems:
LeetCode 322: Coin Change

LeetCode 518: Coin Change 2

LeetCode 279. Perfect Squares

5. Longest Common Subsequence (LCS)

The Longest Common Subsequence pattern is useful when you are given two sequences and need to find a subsequence that appears in the same order in both the given sequences.

LeetCode Problems:
LeetCode 1143: Longest Common Subsequence

LeetCode 583: Delete Operation for Two Strings

LeetCode 1092: Shortest Common Supersequence

6. Longest Increasing Subsequence (LIS)

The Longest Increasing Subsequence pattern is used to solve problems that involve finding the longest subsequence of elements in a sequence where the elements are in increasing order.

LeetCode Problems:
LeetCode 300: Longest Increasing Subsequence

LeetCode 673: Number of Longest Increasing Subsequence

leetCode 354: Russian Doll Envelopes

7. Palindromic Subsequence

The Palindromic Subsequence pattern is used when solving problems that involve finding a subsequence within a sequence (usually a string) that reads the same forwards and backwards.

LeetCode Problems:
LeetCode 516: Longest Palindromic Subsequence

LeetCode 647: Palindromic Substrings

LeetCode 1312: Minimum Insertion Steps to Make a String Palindrome

Subscribe to receive new articles every week.

Type your email...
Subscribe
8. Edit Distance
The Edit Distance pattern is used to solve problems that involve transforming one sequence (usually a string) into another sequence using a minimum number of operations.

The allowed operations typically include insertion, deletion, and substitution.

LeetCode Problems:
LeetCode 72: Edit Distance

LeetCode 583: Delete Operation for Two Strings

LeetCode 712: Minimum ASCII Delete Sum for Two Strings

9. Subset Sum
The Subset Sum pattern is used to solve problems where you need to determine whether a subset of elements from a given set can sum up to a specific target value.

LeetCode Problems:
LeetCode 416: Partition Equal Subset Sum

LeetCode 494: Target Sum

LeetCode 698: Partition to K Equal Sum Subsets

10. String Partition
The String Partition pattern is used to solve problems that involve partitioning a string into smaller substrings that satisfy certain conditions.

It’s useful when:

You're working with problems involving strings or sequences.

The problem requires splitting the string into substrings or subsequences.

You need to optimize some property over these partitions (e.g., minimize cost, maximize value).

The solution to the overall problem can be built from solutions to subproblems on smaller substrings.

There's a need to consider different ways of partitioning the string.

LeetCode Problems:
LeetCode 139: Word Break

LeetCode 132. Palindrome Partitioning II

LeetCode 472: Concatenated Words

11. Catalan Numbers
The Catalan Number pattern is used to solve combinatorial problems that can be decomposed into smaller, similar subproblems.

Some of the use-cases of this pattern include:

Counting the number of valid parentheses expressions of a given length

Counting the number of distinct binary search trees that can be formed with n nodes.

Counting the number of ways to triangulate a polygon with n+2 sides.

LeetCode Problems:
LeetCode 96: Unique Binary Search Trees

LeetCode 22: Generate Parentheses

12. Matrix Chain Multiplication
This pattern is used to solve problems that involve determining the optimal order of operations to minimize the cost of performing a series of operations.

It is based on the popular optimization problem: Matrix Chain Multiplication.

It’s useful when:

You're dealing with a sequence of elements that can be combined pairwise.

The cost of combining elements depends on the order of combination.

You need to find the optimal way to combine the elements.

The problem involves minimizing (or maximizing) the cost of operations of combining the elements.

LeetCode Problems:
LeetCode 1039: Minimum Score Triangulation of Polygon

LeetCode 312: Burst Balloons

LeetCode 1000: Minimum Cost to Merge Stones

13. Count Distinct Ways
This pattern is useful when:

You need to count the number of different ways to achieve a certain goal or reach a particular state.

The problem involves making a series of choices or steps to reach a target.

There are multiple valid paths or combinations to reach the solution.

The problem can be broken down into smaller subproblems with overlapping solutions.

You're dealing with combinatorial problems that ask "in how many ways" can something be done.

LeetCode Problems:
LeetCode 91: Decode Ways

LeetCode 2266. Count Number of Texts

14. DP on Grids

The DP on Grids pattern is used to solve problems that involve navigating or optimizing paths within a grid (2D array).

For these problems, you need to consider multiple directions of movement (e.g., right, down, diagonal) and solution at each cell depends on the solutions of neighboring cells.

LeetCode Problems:
LeetCode 62: Unique Paths

LeetCode 64: Minimum Path Sum

LeetCode 329. Longest Increasing Path in a Matrix

15. DP on Trees
The DP on Trees pattern is useful when:

You're working with tree-structured data represented by nodes and edges.

The problem can be broken down into solutions of subproblems that are themselves tree problems.

The problem requires making decisions at each node that affect its children or parent.

You need to compute values for nodes based on their children or ancestors.

LeetCode Problems:
LeetCode 337: House Robber III

LeetCode 124: Binary Tree Maximum Path Sum

LeetCode 968: Binary Tree Cameras

16. DP on Graphs
The DP on Graphs pattern is useful when:

You're dealing with problems involving graph structures.

The problem requires finding optimal paths, longest paths, cycles, or other optimized properties on graphs.

You need to compute values for nodes or edges based on their neighbors or connected components.

The problem involves traversing a graph while maintaining some state.

LeetCode Problems:
LeetCode 787: Cheapest Flights Within K Stops

LeetCode 1334. Find the City With the Smallest Number of Neighbors at a Threshold Distance

17. Digit DP
The Digit DP Pattern is useful when:

You're dealing with problems involving counting or summing over a range of numbers.

The problem requires considering the digits of numbers individually.

You need to find patterns or properties related to the digits of numbers within a range.

The range of numbers is large (often up to 10^18 or more), making brute force approaches infeasible.

The problem involves constraints on the digits.

LeetCode Problems:
LeetCode 357: Count Numbers with Unique Digits

LeetCode 233: Number of Digit One

LeetCode 902. Numbers At Most N Given Digit Set

18. Bitmasking DP
The Bitmasking DP pattern is used to solve problems that involve a large number of states or combinations, where each state can be efficiently represented using bits in an integer.

It’s particularly useful when:

You're dealing with problems involving subsets or combinations of elements.

The total number of elements is relatively small (typically <= 20-30).

You need to efficiently represent and manipulate sets of elements.

The problem involves making decisions for each element (include/exclude) or tracking visited/unvisited states.

You want to optimize space usage in DP solutions.

LeetCode Problems:
LeetCode 1986: Minimum Number of Work Sessions to Finish the Tasks

LeetCode 2305. Fair Distribution of Cookies

LeetCode 847: Shortest Path Visiting All Nodes

19. Probability DP
This pattern is useful when:

You're dealing with problems involving probability calculations.

The probability of a state depends on the probabilities of previous states.

You need to calculate the expected value of an outcome.

The problem involves random processes or games of chance.

LeetCode Problems:
LeetCode 688: Knight Probability in Chessboard

LeetCode 808: Soup Servings

LeetCode 837. New 21 Game

20. State Machine DP
The State Machine DP Pattern is useful when when:

The problem can be modeled as a series of states and transitions between these states.

There are clear rules for moving from one state to another.

The optimal solution depends on making the best sequence of state transitions.

The problem involves making decisions that affect future states.

There's a finite number of possible states, and each state can be clearly defined.

LeetCode Problems:
LeetCode 309: Best Time to Buy and Sell Stock with Cooldown

LeetCode 123: Best Time to Buy and Sell Stock III





















// LeetCode was HARD until I Learned these 15 Patterns
#21 - Patterns to master LeetCode

Ashish Pratap Singh
Jul 21, 2024

I have solved more than 1500 LeetCode problems, and if there is one thing I have learned, it’s this:

LeetCode is less about the number of problems you have solved and more about how many patterns you know.

Learning patterns enables you to solve a wide variety of problems in lesser time and helps you quickly identify the right approach to a problem you have never seen before.


In this article, I’ll walk you through the 15 most important patterns I learned that made my LeetCode journey lot less painful.

I’ll share when to use each pattern along with a sample problem and provide links to LeetCode problems you can practice to learn these patterns better.

1. Prefix Sum

Prefix Sum involves preprocessing an array to create a new array where each element at index i represents the sum of the array from the start up to i. This allows for efficient sum queries on subarrays.

Use this pattern when you need to perform multiple sum queries on a subarray or need to calculate cumulative sums.

Sample Problem:
Given an array nums, answer multiple queries about the sum of elements within a specific range [i, j].

Example:

Input: nums = [1, 2, 3, 4, 5, 6], i = 1, j = 3

Output: 9

Explanation:
Preprocess the array A to create a prefix sum array: P = [1, 3, 6, 10, 15, 21].

To find the sum between indices i and j, use the formula: P[j] - P[i-1].

LeetCode Problems:
Range Sum Query - Immutable (LeetCode #303)

Contiguous Array (LeetCode #525)

Subarray Sum Equals K (LeetCode #560)

2. Two Pointers

The Two Pointers pattern involves using two pointers to iterate through an array or list, often used to find pairs or elements that meet specific criteria.

Use this pattern when dealing with sorted arrays or lists where you need to find pairs that satisfy a specific condition.

Sample Problem:
Find two numbers in a sorted array that add up to a target value.

Example:

Input: nums = [1, 2, 3, 4, 6], target = 6

Output: [1, 3]

Explanation:
Initialize two pointers, one at the start (left) and one at the end (right) of the array.

Check the sum of the elements at the two pointers.

If the sum equals the target, return the indices.

If the sum is less than the target, move the left pointer to the right.

If the sum is greater than the target, move the right pointer to the left.

LeetCode Problems:
Two Sum II - Input Array is Sorted (LeetCode #167)

3Sum (LeetCode #15)

Container With Most Water (LeetCode #11)

3. Sliding Window

The Sliding Window pattern is used to find a subarray or substring that satisfies a specific condition, optimizing the time complexity by maintaining a window of elements.

Use this pattern when dealing with problems involving contiguous subarrays or substrings.

Sample Problem:
Find the maximum sum of a subarray of size k.

Example:

Input: nums = [2, 1, 5, 1, 3, 2], k = 3

Output: 9

Explanation:
Start with the sum of the first k elements.

Slide the window one element at a time, subtracting the element that goes out of the window and adding the new element.

Keep track of the maximum sum encountered.

LeetCode Problems:
Maximum Average Subarray I (LeetCode #643)

Longest Substring Without Repeating Characters (LeetCode #3)

Minimum Window Substring (LeetCode #76)

4. Fast & Slow Pointers

The Fast & Slow Pointers (Tortoise and Hare) pattern is used to detect cycles in linked lists and other similar structures.

Sample Problem:
Detect if a linked list has a cycle.

Explanation:
Initialize two pointers, one moving one step at a time (slow) and the other moving two steps at a time (fast).

If there is a cycle, the fast pointer will eventually meet the slow pointer.

If the fast pointer reaches the end of the list, there is no cycle.

LeetCode Problems:
Linked List Cycle (LeetCode #141)

Happy Number (LeetCode #202)

Find the Duplicate Number (LeetCode #287)

Subscribe to receive new articles every week.

Type your email...
Subscribe
5. LinkedList In-place Reversal

The In-place Reversal of a LinkedList pattern reverses parts of a linked list without using extra space.

Use this pattern when you need to reverse sections of a linked list.

Sample Problem:
Reverse a sublist of a linked list from position m to n.

Example:

Input: head = [1, 2, 3, 4, 5], m = 2, n = 4

Output: [1, 4, 3, 2, 5]

Explanation:
Identify the start and end of the sublist.

Reverse the nodes in place by adjusting the pointers.

LeetCode Problems:
Reverse Linked List (LeetCode #206)

Reverse Linked List II (LeetCode #92)

Swap Nodes in Pairs (LeetCode #24)

6. Monotonic Stack

The Monotonic Stack pattern uses a stack to maintain a sequence of elements in a specific order (increasing or decreasing).

Use this pattern for problems that require finding the next greater or smaller element.

Sample Problem:
Find the next greater element for each element in an array. Output -1 if the greater element doesn’t exist.

Example:

Input: nums = [2, 1, 2, 4, 3]

Output: [4, 2, 4, -1, -1]

Explanation:
Use a stack to keep track of elements for which we haven't found the next greater element yet.

Iterate through the array, and for each element, pop elements from the stack until you find a greater element.

If the stack is not empty, set the result for index at the top of the stack to current element.

Push the current element onto the stack.

LeetCode Problems:
Next Greater Element I (LeetCode #496)

Daily Temperatures (LeetCode #739)

Largest Rectangle in Histogram (LeetCode #84)

7. Top ‘K’ Elements

The Top 'K' Elements pattern finds the top k largest or smallest elements in an array or stream of data using heaps or sorting.

Sample Problem:
Find the k-th largest element in an unsorted array.

Example:

Input: nums = [3, 2, 1, 5, 6, 4], k = 2

Output: 5

Explanation:
Use a min-heap of size k to keep track of the k largest elements.

Iterate through the array, adding elements to the heap.

If the heap size exceeds k, remove the smallest element from the heap.

The root of the heap will be the k-th largest element.

LeetCode Problems:
Kth Largest Element in an Array (LeetCode #215)

Top K Frequent Elements (LeetCode #347)

Find K Pairs with Smallest Sums (LeetCode #373)

8. Overlapping Intervals

The Overlapping Intervals pattern is used to merge or handle overlapping intervals in an array.

In an interval array sorted by start time, two intervals [a, b] and [c, d] overlap if b >= c (i.e., the end time of the first interval is greater than or equal to the start time of the second interval).

Sample Problem:
Problem Statement: Merge all overlapping intervals.

Example:

Input: intervals = [[1, 3], [2, 6], [8, 10], [15, 18]]

Output: [[1, 6], [8, 10], [15, 18]]

Explanation:
Sort the intervals by their start time.

Create an empty list called merged to store the merged intervals.

Iterate through the intervals and check if it overlaps with the last interval in the merged list.

If it overlaps, merge the intervals by updating the end time of the last interval in merged.

If it does not overlap, simply add the current interval to the merged list.

LeetCode Problems:
Merge Intervals (LeetCode #56)

Insert Interval (LeetCode #57)

Non-Overlapping Intervals (LeetCode #435)

9. Modified Binary Search

The Modified Binary Search pattern adapts binary search to solve a wider range of problems, such as finding elements in rotated sorted arrays.

Use this pattern for problems involving sorted or rotated arrays where you need to find a specific element.

Sample Problem:
Find an element in a rotated sorted array.

Example:

Input: nums = [4, 5, 6, 7, 0, 1, 2], target = 0

Output: 4

Explanation:
Perform binary search with an additional check to determine which half of the array is sorted.

We then check if the target is within the range of the sorted half.

If it is, we search that half; otherwise, we search the other half.

LeetCode Problems:
Search in Rotated Sorted Array (LeetCode #33)

Find Minimum in Rotated Sorted Array (LeetCode #153)

Search a 2D Matrix II (LeetCode #240)

10. Binary Tree Traversal

Binary Tree Traversal involves visiting all the nodes in a binary tree in a specific order.

PreOrder: root -> left -> right

InOrder: left -> root -> right

PostOrder: left -> right -> root

Sample Problem:
Problem Statement: Perform inorder traversal of a binary tree.

Example:

Input: root = [1, null, 2, 3]

Output: [1, 3, 2]

Explanation:
Inorder traversal visits nodes in the order: left, root, right.

Use recursion or a stack to traverse the tree in this order.

LeetCode Problems:
PreOrder → Binary Tree Paths (LeetCode #257)

InOrder → Kth Smallest Element in a BST (LeetCode #230)

PostOrder → Binary Tree Maximum Path Sum (LeetCode #124)

11. Depth-First Search (DFS)

Depth-First Search (DFS) is a traversal technique that explores as far down a branch as possible before backtracking.

Use this pattern for exploring all paths or branches in graphs or trees.

Sample Problem:
Find all paths from the root to leaves in a binary tree.

Example:

Input: root = [1, 2, 3, null, 5]

Output: ["1->2->5", "1->3"]

Explanation:
Use recursion or a stack to traverse each path from the root to the leaves.

Record each path as you traverse.

LeetCode Problems:
Clone Graph (LeetCode #133)

Path Sum II (LeetCode #113)

Course Schedule II (LeetCode #210)

12. Breadth-First Search (BFS)

Breadth-First Search (BFS) is a traversal technique that explores nodes level by level in a tree or graph.

Use this pattern for finding the shortest paths in unweighted graphs or level-order traversal in trees.

Sample Problem:
Perform level-order traversal of a binary tree.

Example:

Input: root = [3, 9, 20, null, null, 15, 7]

Output: [[3], [9, 20], [15, 7]]

Explanation:
Use a queue to keep track of nodes at each level.

Traverse each level and add the children of the current nodes to the queue.

LeetCode Problems:
Binary Tree Level Order Traversal (LeetCode #102)

Rotting Oranges (LeetCode #994)

Word Ladder (LeetCode #127)

13. Matrix Traversal

Matrix Traversal involves traversing elements in a matrix using different techniques (DFS, BFS, etc.).

Use this pattern for problems involving traversing 2D grids or matrices horizontally, vertically or diagonally.

Sample Problem:
Perform flood fill on a 2D grid. Change all the cells connected to the starting cell to new color.

Example:

Input: image = [[1,1,1],[1,1,0],[1,0,1]], sr = 1, sc = 1, newColor = 2

Output: [[2,2,2],[2,2,0],[2,0,1]]

Explanation:
Use DFS or BFS to traverse the matrix starting from the given cell.

Change the color of the connected cells to the new color.

LeetCode Problems:
Flood Fill (LeetCode #733)

Number of Islands (LeetCode #200)

Surrounded Regions (LeetCode #130)

14. Backtracking

Backtracking explores all possible solutions and backtracks when a solution path fails.

Use this pattern when you need to find all (or some) solutions to a problem that satisfies given constraints. For example: combinatorial problems, such as generating permutations, combinations, or subsets.

Sample Problem:
Generate all permutations of a given list of numbers.

Example:

Input: nums = [1, 2, 3]

Output: [[1,2,3], [1,3,2], [2,1,3], [2,3,1], [3,1,2], [3,2,1]]

Explanation:
Use recursion to generate permutations.

For each element, include it in the current permutation and recursively generate the remaining permutations.

Backtrack when all permutations for a given path are generated.

LeetCode Problems:
Permutations (LeetCode #46)

Subsets (LeetCode #78)

N-Queens (LeetCode #51)

15. Dynamic Programming Patterns

Dynamic Programming (DP) involves breaking down problems into smaller subproblems and solving them using a bottom-up or top-down approach.

Use this pattern for problems with overlapping subproblems and optimal substructure.

DP itself has multiple sub-patterns. Some of the most important ones are:

Fibonacci Numbers

0/1 Knapsack

Longest Common Subsequence (LCS)

Longest Increasing Subsequence (LIS)

Subset Sum

Matrix Chain Multiplication

For more Dynamic Programming Patterns, checkout my other article:

20 Patterns to Master Dynamic Programming
20 Patterns to Master Dynamic Programming
Ashish Pratap Singh
·
Jul 28
Read full story
Sample Problem:
Calculate the n-th Fibonacci number.

Example:

Input: n = 5

Output: 5 (The first five Fibonacci numbers are 0, 1, 1, 2, 3, 5)

Explanation:
Use a bottom-up approach to calculate the n-th Fibonacci number.

Start with the first two numbers (0 and 1) and iterate to calculate the next numbers like (dp[i] = dp[i - 1] + dp[i - 2]).

LeetCode Problems:
Climbing Stairs (LeetCode #70)

House Robber (LeetCode #198)

Coin Change (LeetCode #322)

Longest Common Subsequence (LCS) (LeetCode #1143)

Longest Increasing Subsequence (LIS) (LeetCode #322)

Partition Equal Subset Sum (LeetCode #416)