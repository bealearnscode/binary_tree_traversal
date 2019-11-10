# Binary Tree Traversal

Programming Assignment for ESU CPSC 250 - Data Structures & Algorithms

## Binary Trees

A binary tree is made of nodes, where each node contains a "left" reference, a "right" reference,
and a data element. The topmost node in the tree is called the root. Every node (excluding a root)
in a tree is connected by a directed edge from exactly one other node. This node is called a
parent. The following is the structure specification of a node for binary tree:

```C++
struct Node
{
struct Node *lchild;
int data;
struct Node *rchild;
};
```

## What Does This Program Do

This program demonstrates how to create a binary tree, then traverses the tree for pre, post,
inorder and level order form, finding the height of the tree and degree of each nodes.

## License

[MIT](https://choosealicense.com/licenses/mit/)
