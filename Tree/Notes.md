# Tree
* Hierachical  Data is stored
* Tree is non Linear
* If tree has n nodes then there will be n-1 nodes.

## Binary Tree
* A tree which which a node has utmost 2 nodes is called as Binary Tree
* Strict Binary tree: Each node can have either 2 or 0 children
* Complerte Binary tree: All level except last are completely filled and all nodes are as left as possible.
* Balanced Binary Tree: Difference between height of left and right subtree for every node is not more than K(mostly).

## Binary Search Tree
Binary tree where value of all nodes in left subtree is lesser and value of all nodes in right subtree is greater.

## Binary Tree Traversal
* Process of visiting each node in the tree exactly in some order
### Breadth First search
* Travese through one level of children nodes, then traves through level of grandchildren node
### Depth first search
* Travese through left subtree first, then traverse through the right subtree(s).
* Also called as level order traversal
There are 3 types.
#### Inorder, Preorder, Post order Tree Traversal
* Inorder:Left->Root->Right
* Preorder:Root->Left->Right
* Postorder:Left->Right->Root

## Questions
* Check if Binary tree is Binary search Tree.
* Deleting a Node from Binary Search Tree.