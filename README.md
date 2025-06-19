# Binary Trees - Group Project

  

## Description

  

This project is an implementation of binary trees using the C programming language. It was completed as a group project at Holberton School to deepen our understanding of tree data structures and memory management.

  

We implemented basic and advanced binary tree functions such as node creation, insertion, deletion, tree traversal, and property evaluations (height, depth, size, etc.).

  

---

  

## File Structure

  

```

.

├── binary_trees.h # Header file with struct and function prototypes

├── 0-binary_tree_node.c # Creates a binary tree node

├── 1-binary_tree_insert_left.c # Inserts a node as the left child

├── 2-binary_tree_insert_right.c # Inserts a node as the right child

├── 3-binary_tree_delete.c # Deletes a binary tree

├── 4-binary_tree_is_leaf.c # Checks if a node is a leaf

├── 5-binary_tree_is_root.c # Checks if a node is the root

├── 6-binary_tree_preorder.c # Preorder traversal

├── 7-binary_tree_inorder.c # Inorder traversal

├── 8-binary_tree_postorder.c # Postorder traversal

├── 9-binary_tree_height.c # Measures tree height

├── 10-binary_tree_depth.c # Measures node depth

├── 11-binary_tree_size.c # Measures size of tree

├── 12-binary_tree_leaves.c # Counts leaves in a tree

├── 13-binary_tree_nodes.c # Counts non-leaf nodes

├── 14-binary_tree_balance.c # Measures balance factor

├── 17-binary_tree_sibling.c # Finds the sibling of a node

├── 18-binary_tree_uncle.c # Finds the uncle of a node

```

  

---

  

## Data Structures Used

  

### `binary_tree_t`

  

```c

/**

* struct binary_tree_s - Binary tree node

*

* @n: Integer stored in the node

* @parent: Pointer to the parent node

* @left: Pointer to the left child node

* @right: Pointer to the right child node

*/

struct binary_tree_s

{

int n;

struct binary_tree_s *parent;

struct binary_tree_s *left;

struct binary_tree_s *right;

};

```

  

This structure represents each node in a binary tree. Each node contains:

-  `n`: the value

-  `parent`: a pointer to the node's parent

-  `left`: a pointer to the left child

-  `right`: a pointer to the right child

  

---

  

## Function Examples

  

### 0. Create a Node

  

```c

binary_tree_t  *node =  binary_tree_node(NULL, 98);

binary_tree_print(node);

```

  

**Output:**

```

98

```

  

---

  

### 1. Insert Left Child

  

```c

binary_tree_t  *root =  binary_tree_node(NULL, 90);

binary_tree_insert_left(root, 80);

binary_tree_print(root);

```

  

**Output:**

```

90

/

80

```

  

---

  

### 6. Preorder Traversal

  

```c

binary_tree_preorder(root, &print_func);

```

  

**Output (example):**

```

90

80

```

  

---

  

### 9. Tree Height

  

```c

size_t h =  binary_tree_height(root);

printf("Height: %lu\n", h);

```

  

**Output:**

```

Height: 1

```

  

---

  

### 14. Balance Factor

  

```c

int balance =  binary_tree_balance(root);

printf("Balance factor: %d\n", balance);

```

  

**Output:**

```

Balance factor: 1

```

  

---

  

### 18. Find Uncle

  

```c

binary_tree_t  *uncle =  binary_tree_uncle(node);

if  (uncle)

printf("Uncle: %d\n", uncle->n);

else

printf("No uncle\n");

```

  

**Output:**

```

Uncle: 80

```

  

---

  

## Authors

  

-  **Abdullah Alsanie** - [@AbdullahAlsanie](https://github.com/AbdullahAlsanie)

-  **Rayan Hantoul** - [@RayanHantoul](https://github.com/Ry-88)
