/*
When you encounter competitive programming questions that involve minimum or maximum 
calculations, you should consider various algorithmic approaches depending on the specific
problem's characteristics. Here are some common approaches to consider:

1. **Brute-Force Approach:**
   - This approach involves trying all possible combinations and selecting the one that gives the minimum or maximum value.
   - It's suitable for small input sizes or when there are no obvious patterns or optimizations to exploit.
   - Example: Enumerating all subsets or permutations to find the minimum or maximum value.

2. **Greedy Approach:**
   - Greedy algorithms make locally optimal choices at each step in the hope of finding a global minimum or maximum.
   - This approach works well when the problem exhibits a greedy choice property, where the best choice at each step leads to the overall optimal solution.
   - Example: Huffman coding for minimum bit encoding, Prim's or Kruskal's algorithm for minimum spanning trees.

3. **Dynamic Programming Approach:**
   - Dynamic programming involves breaking down a problem into smaller subproblems and storing their solutions to avoid redundant calculations.
   - It is suitable for problems that can be divided into overlapping subproblems and where solutions can be efficiently cached.
   - Example: Calculating the minimum or maximum value for a sequence, such as the Longest Increasing Subsequence or the Knapsack problem.

4. **Binary Search:**
   - Binary search is an effective technique for finding the minimum or maximum value within a certain range when the data is ordered.
   - It is particularly useful for problems related to searching for extreme values in a sorted array or searching within a range of values.
   - Example: Finding the minimum or maximum element in a sorted array.

5. **Divide and Conquer:**
   - Divide and conquer algorithms divide a problem into smaller subproblems, solve them recursively, and then combine their solutions.
   - This approach is helpful when the problem can be split into non-overlapping subproblems.
   - Example: Finding the maximum subarray sum using the "Kadane's algorithm."

6. **Sorting:**
   - Sometimes, sorting the data first can simplify the process of finding minimum or maximum values.
   - Sorting can help in identifying patterns or relationships in the data.
   - Example: Finding the kth smallest or largest element in an array by sorting it.

7. **Graph Algorithms:**
   - For problems involving graphs, various graph algorithms can be employed to find minimum or maximum values.
   - Examples: Dijkstra's algorithm for finding the minimum distance in a weighted graph, and finding the maximum flow in a flow network using Ford-Fulkerson.

8. **Mathematical Techniques:**
   - In some cases, mathematical techniques like calculus, algebra, or geometric concepts may be used to find minimum or maximum values.
   - Example: Calculating the minimum or maximum point of a function using differentiation and critical points.

When tackling competitive programming problems related to minimum or maximum calculations, 
it's essential to analyze the problem statement carefully, identify any underlying patterns
or structures, and choose the most suitable approach based on the problem's requirements 
and constraints. Additionally, practice and experience in competitive programming will 
help you become more proficient at selecting the right approach for specific problems.

*/