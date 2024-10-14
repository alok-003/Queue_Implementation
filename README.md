# Queue Implementation
Experiment 19

## Aim 
To implement queue.


## Theory
#### Definition

A queue is a linear data structure that follows the First In, First Out (FIFO) principle. This means that the first element added to the queue will be the first one to be removed. Queues are widely used in various applications, such as scheduling processes, managing requests in a service, and handling asynchronous data.

#### Key Characteristics 

- **FIFO Structure**: The first element added to the queue is the first to be removed.
  
#### Operations

- **Enqueue**: Add an element to the rear of the queue.
- **Dequeue**: Remove and return the front element of the queue.
- **Peek/Front**: Return the front element without removing it.
- **isEmpty**: Check if the queue is empty.
- **isFull**: Check if the queue is full (only applicable in fixed-size queues).

#### Implementation

Queues can be implemented using two primary methods: arrays and linked lists.
Example
```cpp
struct Queue {
    int arr[MAX]; // Array to hold queue elements
    int front;    // Index of the front element
    int rear;     // Index of the rear element
};
```
## Algorithms
### Queue using STL(Standard Template Library)
1. **Initialization:**
2. **Include Necessary Libraries:**
   - **Include the `<iostream>` header for input and output operations.**
   - **Include the `<queue>` header to use the queue data structure.**
3. **Main Function:**
   - **Start the `main()` function.**
4. **Create a Queue:**
   - **Declare a queue of integers named `q`.**
5. **Push Elements into the Queue:**
   - **Use the `push()` method to add three integers (30, 20, and 10) to the queue.**
6. **Access the Front Element:**
   - **Use the `front()` method to get the value of the front element of the queue.**
   - **Output the front element to the console with a message.**
7. **Pop the Front Element:**
   - **Use the `pop()` method to remove the front element from the queue.**
8. **Access the Front Element Again:**
   - **Use the `front()` method again to get the new front element after the pop operation.**
   - **Output this new front element to the console.**
9. **End**

### Queue Implementation in Array
1. **Initialization:**
2. **Class Definition:**
   - **Define a class `Queue` with public member variables: `capacity`, `front`, `rear`, and a pointer 
   `arr` to hold  queue elements.**
3. **Constructor:**
   - **In the constructor `Queue(int capacity)`:**
     - **Initialize `capacity` with the given value.**
     - **Allocate memory for `arr` to hold `capacity` integers.**
     - **Set `front` and `rear` to -1 (indicating an empty queue).**
4. **Push Operation:**
   - **Define the method `push(int element)`:**
     - **Check if there is space to add a new element (`rear + 1 < capacity`).**
     - **If the queue is empty (`front == -1`), set `front` to 0.**
     - **Increment `rear` and add `element` to `arr[rear]`.**
     - **If there’s no space, output "Queue Overflow".**
5. **Pop Operation:**
   - **Define the method `pop()`:**
     - **Check if the queue is empty (`front >= 0`).**
     - **If the queue has only one element (`front == rear`), set both `front` and `rear` to -1 (reset the 
     queue).**
     - **If not empty, increment `front` to remove the front element.**
     - **If the queue is empty, output "Queue Underflow".**
6. **Peek Operation:**
   - **Define the method `peek()`:**
     - **Check if the queue is empty (`front >= 0`).**
     - **If not empty, return the element at `arr[front]`.**
     - **If empty, return -1.**
7. **Destructor:**
   - **In the destructor, free the allocated memory for `arr` to avoid memory leaks.**
8. **Main Function**
   - **Create a Queue Instance:**
     - **Instantiate a `Queue` object with a capacity of 5.**
   - **Push Elements:**
     - **Push three integers (10, 20, and 30) onto the queue.**
   - **Peek**
     - **Call `peek()` to access and output the front element of the queue.**
   - **Pop:**
     - **Call `pop()` to remove the front element.**
   - **Peek Again:**
     - **Call `peek()` again and output the new front element after the pop operation.**
9. **End**
