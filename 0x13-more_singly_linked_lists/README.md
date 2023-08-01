# 0x13. C - More singly linked lists

### What is a Singly Linked List?
* A singly linked list is a data structure that consists of a sequence of elements called nodes.
* Each node contains two parts: data and a reference (or pointer) to the next node in the list.
* The last node's reference points to NULL to signify the end of the list.

### How does it work?
* Imagine a chain of connected nodes, where each node holds some data and points to the next node in line.
* It's like a train, where each carriage (node) contains passengers (data) and is connected to the next carriage.

### Advantages:
* Efficient insertion and deletion at the beginning of the list (compared to arrays).
* Dynamic size: It can grow or shrink as needed.

### Disadvantages:
* Searching for an element is slower compared to arrays (no direct access).
* To access an element, you need to traverse the list from the beginning.

### Basic Operations:
* Insertion: Adding a new node to the list.
* Deletion: Removing a node from the list.
* Traversal: Visiting each node in the list one by one.
* Searching: Finding a specific element in the list.

#### Example:
- Let's say we have a singly linked list representing a sequence of numbers: 3 -> 7 -> 12 -> 8 -> NULL. Here, 3 is the first node, 7 is the next node after 3, and so on. The last node 8 points to NULL, indicating the end of the list.

- Remember that each node has two parts: the actual data (3, 7, 12, 8) and a reference to the next node. To traverse the list, we start from the first node and follow the references until we reach NULL.

- That's the basic idea of a singly linked list! It's a fundamental data structure used in computer science and programming to manage collections of data in a flexible and efficient manner.
