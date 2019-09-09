We have to replace every node value by sum of all values in the BST greater than or equal to the present value.

The property of BST is that, for every node n, all nodes in the right subtree of n have a value greater than that of n.

Thus, we have to replace every node value by the sum of its value, and the sum of the nodes in its right subtree.

Since, leaf nodes and nodes with only left child, do not have any right children, they will retain their original values.

I present a time optimised recursive solution for the same.

Since, there are only O(10^2) nodes, hence Stack memory constraints due to recursion are not very paramount, and thus, recursion presents
the most understandable method.

We initialise a variable sum with 0. We recursively call the function summer, for every node and the updated sum value.

In the summer function, we recursively call for the node's right child. We return when we reach NULL.

We add the present node value to the sum, which will contain sum of all node values in the right child of the node under consideration.

We update the sum for the nodes, starting with the leaf nodes, and continuing in a bottom up fashion. 

Following is a step by step implementation with an example tree:

Consider the following BST:
  
                              4
                           /      \
                          1          6
                         /  \       /  \
                        0    2    5     7
                              \           \
                                3           8
                                
                                
Algorithm:

* Initialise sum to 0. The present node is 4. We call the function summer with these parameters.
* Since the root is not null, we recurse for 6,  7, 8.
* After 8, root is null, therefore we return to the function call for 8. sum = 0 as of now.
* We update sum to 8, and update the value of the node 8 to the value of sum. Since 8 is a leaf node, and thus, does not have a right child,
its value remains unchanged.
