/*
When you're asked to find the kth minimum or maximum element in a collection (such as an array or a sequence), you can use various techniques and algorithms to solve the problem. Here are some common approaches:

1. **Sorting:** One of the simplest methods is to sort the collection in ascending or descending order, depending on whether you need the kth minimum or maximum. Once the collection is sorted, you can directly access the kth element.
   - Time Complexity: O(n * log(n)) for sorting the entire collection.

2. **QuickSelect Algorithm:** QuickSelect is an efficient algorithm for finding the kth element in an unsorted or partially sorted collection. It is a variation of the quicksort algorithm
   - Time Complexity: On average, O(n). In the worst case, it can be O(n^2), but it can be optimized to O(n) in practice.

3. **Min-Heap or Max-Heap:** You can use a min-heap or a max-heap to find the kth minimum or maximum element, respectively. Build a heap from the collection and perform k "delete-min" or "delete-max" operations.
   - Time Complexity: O(k * log(n)), where n is the size of the collection.

4. **Selection Algorithm (Median of Medians):** The selection algorithm is used to find the kth element in an unsorted collection and is based on the "divide and conquer" strategy. The median of medians is a variation of this algorithm.
   - Time Complexity: O(n) in the worst case.

5. **Variations for Partial Sorting:** In some cases, you can use partial sorting techniques like "k-sort" or "k-partition" to find the kth minimum or maximum element more efficiently than full sorting.

6. **Priority Queue:** You can use a priority queue (min-heap or max-heap) to efficiently find the kth minimum or maximum element. Insert all elements into the priority queue, and then extract k-1 elements.
   - Time Complexity: O(n + k * log(n)).

7. **QuickSelect with Randomized Pivot:** This is an improvement of the QuickSelect algorithm that uses a randomized pivot selection, reducing the chances of encountering the worst-case scenario.
   - Time Complexity: Expected O(n).

The choice of method depends on the specific problem and constraints. If you need to find multiple kth elements in a dynamic collection, data structures like order statistics trees or binary indexed trees (Fenwick trees) can be used to achieve better time complexity for successive queries.

In competitive programming, the best approach may vary depending on the problem's input size and constraints. It's essential to understand and implement these techniques efficiently, as selecting the wrong approach can lead to inefficient solutions.
*/