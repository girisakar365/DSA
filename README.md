# Data Structures And Algorithms

### Introduction
This Repo contains all my progress in DSA as notes.

### Content Overview:
### Content Overview:
| Serial No. | Topic                                           | Description                                           |
|------------|-------------------------------------------------|-------------------------------------------------------|
| 1          | [Algorithmic Complexity](#algorithmic-complexity) | Considerations for algorithm efficiency - time and space. |
| 2          | [Measuring Time](#measuring-time)             | Evaluating program efficiency through order of growth. |
| 3          | [Order of Growth](#order-of-growth)           | Identifying the largest factors in runtime.            |
| 4          | [The Big O Notation](#the-big-o-notation)     | Notation to calculate the order of growth.            |
| 5          | [Types of Complexity](#types-of-complexity)   | Overview of common complexity types: O(1), O(log(n)), etc. |
| 6          | [Data Structures](#data-structures)           | A look into organizing and managing data efficiently.  |
| 6.1        | [Array](#array)                               | A linear data structure for storing data efficiently.  |
| 6.2        | [Linked List](#linked-list)                   | A dynamic data structure for managing data.           |
| 6.3        | [Stacks](#stacks)                             | A linear data structure with Last-In-First-Out (LIFO) behavior. |
| 6.4        | [Queues](#queues)                             | A linear data structure with First-In-First-Out (FIFO) behavior. |
| 6.5        | [Hashing](#hashing)                           | A technique for fast data retrieval using a hash function. |
| 6.6        | [Trees](#trees)                               | Non-linear data structures for hierarchical organization. |
| 6.7        | [Graphs](#graphs)                             | Non-linear data structures for complex relationships. |

### Algorithmic Complexity:

Things to consider:
1. Time
2. Space

### Measuring time:

The best way to evalute program efficiency is order of growth.

### Order of growth

`We look at the largest factors in run time (i.e section that takes the longest run time.)`


### The Big O notation:
This is the method to calculate the order of growth.

O( ) -> Read as order of.

To identify the order or type of big O notation, we do the following.

#### Example 1.0
```py
# Here we calculate the number of operation of this program.

def fact_iter(n):
    answer = 1 #1
    while n > 1: #2 : n > 1
        answer *= n #4 : answer = answer * n
        n -= 1 #6

    return answer #7
'''
We have 6 operations in total.
Equation becomes 1 + 5n + 1

where:
    1 = #1
    5n = [#2 : #6]
    1 = #7

'''
```
Since the above program has the equation 1 + 5n + 1 now we do the following steps.

- remove the constants from the equtaion
- consider the big factor of n.

So, in the program with equation 1 + 5n + 1 O(n) is the order of the program. (i.e linear).

#### Example 1.1
```
1. n^2 + 2n + 2 -> O(n²)
2. n^2 + 100000n + 3^1000 -> O(n²)
3. log(n) + n + 4 -> O(n)
4. 0.0001 * n * log(n) + 300n -> O(nlog(n))
3. 2n^30 + 3^n -> O(3^n) i.e O(+i^n)
```

![BOTC](https://github.com/girisakar365/DSA/blob/main/img/Big-O%20complexity%20chart.jpg?raw=true)

### Types of complexity: 

- O(1): Constant TC
#### Example 1.2
```py
a = [i for i in range(1,10001)]
print(a[5])

a = [i for i in range(1,100001)]
print(a[5])

'''
Since, array is a contineous memeory allocation. 

So, if * a[0] = 1000 then * a[1] = 1002

a[n] = 1000 + 2*index

Since, no variable of input is required so, it is O(1) TC.
'''
```
<br><br>
- O( log(n) ): Logarithmic TC
Binary Sort
![binrarySearch](https://github.com/girisakar365/DSA/blob/main/img/binary-search.gif?raw=true)
#### Example 1.3
```py
a = [i for i in range(0,100)]

target = 5
output = 0

while target != output:

    mid = len(a) // 2

    if a[mid] == target:
        output = a[mid]
        break

    elif a[mid] > target:
        a = a[0:mid]
    
    elif a[mid] < target:
        a = a[mid+1:]
    
```

- O(n): Linear TC
#### Example 1.4
```py
a = [i for i in range(1,1001)]

for i in a:
    if i == 250:
        print(i)
        break
```
- O( nlog(n) ) : nlog(n) TC

![mergeSort](https://github.com/girisakar365/DSA/blob/main/img/merge-sort.gif?raw=true)
#### Example 1.5
```py
def merge_sort(arr):
    if len(arr) <= 1:
        return arr

    mid = len(arr) // 2
    left, right = merge_sort(arr[:mid]), merge_sort(arr[mid:])
    result, i, j = [], 0, 0

    while i < len(left) and j < len(right):
        result.append(left[i] if left[i] < right[j] else right[j])
        i, j = i + (left[i] < right[j]), j + (left[i] >= right[j])

    return result + left[i:] + right[j]

arr = [12, 11, 13, 5, 6, 7]
sorted_arr = merge_sort(arr)
print(sorted_arr)

```
- O(n²): Quadratic TC
#### Example 1.6
```py

# time grows by input^2

a = []

for i in range(1,101):
    for j in range(i,i+2):
        a.append(i)
print(a)
```

### Data Structures:

A way to orgainze and manage data effeciently.

### Types:

- Linear Data Strucutres: Organising data in linear manner.
    - array
    - linked list
    - stacks
    - queues
    - hashing

- Non Linear Data Structures: : Organising data in non-linear manner.
    - trees
    - graphs

#### Array:

Linear data structures to store multiple data of same data type in <b>contineous memory location</b>.

![array](https://github.com/girisakar365/DSA/blob/main/img/array.jpg?raw=true)

- Disadvantages:
    - fixed size (memory wastage)
    - homogeneous (lack of flexibility)

- Soluctions:

    - refrential arrya
    
    ![ra](https://github.com/girisakar365/DSA/blob/main/img/refrencial%20array.png?raw=true)

    - dynamic array 
    
    ![da](https://github.com/girisakar365/DSA/blob/main/img/dynamic%20array.png?raw=true)

#### Example 2.0: Dynamic Array
```py
import sys

lst = []

for i in range(20):
    print(i,sys.getsizeof(i))
    lst.append(i)
```
```
0 56
1 88
2 88
3 88
4 88
5 120
6 120
7 120
8 120
9 184
10 184
11 184
12 184
13 184
14 184
15 184
16 184
17 248
18 248
19 248

[Done] exited with code=0 in 0.233 seconds
```

changees

