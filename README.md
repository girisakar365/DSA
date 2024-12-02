# Data Structure And Algorithms

My personal notes on data structures and algorithms.

## Table of Contents 📚
| S.No. | Topics |
| --- | --- |
| 1. | [Introduction to Data Structures](#introduction-to-data-structures) |
| 2. | [Introduction to Algorithms](#introduction-to-algorithms) |
| 3. | [Stack](#stack) |



## Introduction to Data Structures

Data structures are the fundamental building blocks of computer programming. They define how data is organized, stored, and manipulated within a program.

1. **What is data structure?**

    A data structure is a storage that is used to store and organize data. It is a way of arranging data on a computer so that it can be accessed and updated efficiently.

    A data structure is not only used for organizing the data. It is also used for processing, retrieving, and storing data. There are different basic and advanced types of data structures that are used in almost every program or software system that has been developed. 

2. **Classification of data structures:**

    ![Data Structures Classification](/assets/ClassificationofDataStructure.jpg)
    **Credit:** [GeeksforGeeks](https://www.geeksforgeeks.org/data-structures/)

    1. **Linear Data Structure:** 

        Data structure in which data elements are arranged sequentially or linearly, where each element is attached to its previous and next adjacent elements, is called a linear data structure. 
        Example: Array, Stack, Queue, Linked List, etc.
        Static Data Structure: Static data structure has a fixed memory size. It is easier to access the elements in a static data structure. 
        Example: array.

    2. **Dynamic Data Structure:** 

        In dynamic data structure, the size is not fixed. It can be randomly updated during the runtime which may be considered efficient concerning the memory (space) complexity of the code. 
        Example: Queue, Stack, etc.

    3. **Non-Linear Data Structure:** 

        Data structures where data elements are not placed sequentially or linearly are called non-linear data structures. In a non-linear data structure, we can’t traverse all the elements in a single run only. 
        Examples: Trees and Graphs.
    
## Introduction to Algorithms

Algorithm is a step-by-step procedure for solving a problem or accomplishing a task. In the context of data structures and algorithms, it is a set of well-defined instructions for performing a specific computational task. Algorithms are fundamental to computer science and play a very important role in designing efficient solutions for various problems. 
        
![Algorithm](/assets/Algorithm.jpg)
**Credit:** [GeeksforGeeks](https://www.geeksforgeeks.org/algorithms/)

1. **What is an Algorithm?**

    An algorithm is a finite sequence of well-defined instructions that can be used to solve a computational problem. It provides a step-by-step procedure that convert an input into a desired output.


2. **Algorithms typically follow a logical structure:**

- Input: The algorithm receives input data.
- Processing: The algorithm performs a series of operations on the input data.
- Output: The algorithm produces the desired output.

## Stack
1. **What is a Stack?**

    Stack is a linear data structure based on LIFO(Last In First Out) principle in which the insertion of a new element and removal of an existing element takes place at the same end represented as the top of the stack.

    ![Stack](/assets/Stack-Representation.webp)
    **Credit**: [GeeksforGeeks](https://www.geeksforgeeks.org/stack-data-structure/)

2. **Types of Stack Data Structure:**

    1. **Fixed Size Stack** : As the name suggests, a fixed size stack has a fixed size and cannot grow or shrink dynamically. If the stack is full and an attempt is made to add an element to it, an overflow error occurs. If the stack is empty and an attempt is made to remove an element from it, an underflow error occurs.

    2. **Dynamic Size Stack** : A dynamic size stack can grow or shrink dynamically. When the stack is full, it automatically increases its size to accommodate the new element, and when the stack is empty, it decreases its size. This type of stack is implemented using a linked list, as it allows for easy resizing of the stack. 

3. **Basic Operations on Stack Data Structure:**

    In order to make manipulations in a stack, there are certain operations provided to us.

    1. `push()` to insert an element into the stack
    2. `pop()` to remove an element from the stack
    3. `top()` Returns the top element of the stack.
    4. `isEmpty()` returns true if stack is empty else false.
    5. `isFull()` returns true if the stack is full else false. 
    
4. **Algorithm for Push Operation:**

    - Before pushing the element to the stack, we check if the stack is full .
    - If the stack is full (top == capacity-1) , then Stack Overflows and we cannot insert the element to the stack.
    - Otherwise, we increment the value of top by 1 (top = top + 1) and the new value is inserted at top position .
    - The elements can be pushed into the stack till we reach the capacity of the stack. 

    ![push-operation](/assets/Push-Operation-in-Stack.webp)
    **Credit**: [GeeksforGeeks](https://www.geeksforgeeks.org/stack-data-structure/)

```cpp
void push(int element) {
    if(top == capacity-1) {
        cout<<"Stack Overflow"<<endl;
    } else {
        top++;
        stack[top] = element;
    }
}
```

5. **Algorithm for Pop Operation:**

    - Before popping the element from the stack, we check if the stack is empty.
    - If the stack is empty (top == -1), then Stack Underflows and we cannot remove the element from the stack.
    - Otherwise, we remove the element from the top of the stack and decrement the value of top by 1 (top = top - 1).
    - The elements can be popped from the stack till we reach the bottom of the stack.

    ![pop-operation](/assets/Pop-Operation-in-Stack.webp)
    **Credit**: [GeeksforGeeks](https://www.geeksforgeeks.org/stack-data-structure/)

```cpp
void pop() {
    if(top == -1) {
        cout<<"Stack Underflow"<<endl;
    } else {
        top--;
    }
}
```

6. **Algorithm for Peek Operation:**

    - Before returning the top element from the stack, we check if the stack is empty.
    - If the stack is empty (top == -1), we simply print “Stack is empty”.
    - Otherwise, we return the element stored at index = top.

    ![peek-operation](/assets/Top-or-Peek-Operation-in-Stack.webp)
    **Credit**: [GeeksforGeeks](https://www.geeksforgeeks.org/stack-data-structure/)

```cpp
int peek() {
    if(top == -1) {
        cout<<"Stack is empty"<<endl;
        return -1;
    } else {
        return stack[top];
    }
}
```

7. **Algorithm for isEmpty Operation:**

    - If the stack is empty (top == -1), then the function returns true.
    - Otherwise, the function returns false.

    ![isEmpty-operation](/assets/isEmpty-Operation-in-Stack.webp)
    **Credit**: [GeeksforGeeks](https://www.geeksforgeeks.org/stack-data-structure/)

```cpp
bool isEmpty() {
    return top == -1;
}
```

8. **Algorithm for isFull Operation:**

    - If the stack is full (top == capacity-1), then the function returns true.
    - Otherwise, the function returns false.

    ![isFull-operation](/assets/isFull-Operation-in-Stack.webp)
    **Credit**: [GeeksforGeeks](https://www.geeksforgeeks.org/stack-data-structure/)

```cpp
bool isFull() {
    return top == capacity-1;
}
```
9. **Time Complexity of Stack Operations:**
    
    - The time complexity of push(), pop(), peek(), isEmpty(), and isFull() operations is O(1) because they all take constant time to execute.

10. **Bottom varying approach**

    In this approach, the bottom of the stack is considered as the base of the stack and the top of the stack is considered as the top of the stack. The elements are pushed and popped from the bottom of the stack.


```cpp
    // Push operation in stack using bottom varying approach
    int push(int data){
        if(bottom == maxsize){
            cout << "Stack Overflow" << endl;
            return 0;
        }
        for (int i = bottom; i > 0; i--){
            stack[i] = stack[i - 1];
        }
        stack[0] = data;
        bottom += 1;
        return 1;
    }
```
```cpp
    // Pop operation in stack using bottom varying approach
    int pop(){
        if(bottom == 0){
            cout << "Stack Underflow" << endl;
        }
        int item = stack[0];
        bottom--;
        for (int i = 0; i <= bottom; i++){
            stack[i] = stack[i + 1];
        }
        return item;
    }
```
