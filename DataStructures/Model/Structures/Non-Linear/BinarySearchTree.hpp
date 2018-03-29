//
//  BinarySearchTree.hpp
//  DataStructures
//
//  Created by Pulsipher, Noah on 3/29/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp

#include "/Users/npul1355/Documents/C++/DataStructures/DataStructures/Model/Structures/Non-Linear/Tree.hpp"
#include "/Users/npul1355/Documents/C++/DataStructures/DataStructures/Model/Nodes/BinaryTreeNode.hpp"

class BinarySearchTree<Type>
{
public:
    
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinaryTreeNode<Type> * getRoot();
    void setRoot(BinaryTreeNode<Type> * root);
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    void demoTraversalSteps(BinaryTreeNode<Type> * node);
    
    int getSize();
    int getHeight();
    bool isComplete();
    bool isBalanced();
    
    bool contains(Type value);
    void insert(Type itemToInsert);
    void remove(Type value);
    
    Type findMinimum();
    Type findMaximum();
    
protected:
    
    int calculateSize(BinaryTreeNode<Type> * startNode);
    int calculateHeight(BinaryTreeNode<Type> * startNode);
    bool isBalanced(BinaryTreeNode<Type> * startNode);
    bool isComplete(BinaryTreeNode<Type> * startNode, int index, int size);
    
    void inOrderTraversal(BinaryTreeNode<Type> * inStart);
    void preOrderTraversal(BinaryTreeNode<Type> * preStart);
    void postOrderTraversal(BinaryTreeNode<Type> * postStart);
    
    BinaryTreeNode<Type> * getRightMostChild(BinaryTreeNode<Type> * current);
    BinaryTreeNode<Type> * getLeftMostChild(BinaryTreeNode<Type> * current);
    
    void removeNode(BinaryTreeNode<Type> * removeMe);
    
};

template <class Type>
BinarySearchTree<Type> :: BinarySearchTree()
{
    this->root = nullptr;
}

template <class Type>
void setRoot(BinaryTreeNode<Type> * root)
{
    
}

template <class Type>
void inOrderTraversal()
{
    
}

template <class Type>
void preOrderTraversal()
{
    
}

template <class Type>
void postOrderTraversal()
{
    
}

template <class Type>
void demoTraversalSteps(BinaryTreeNode<Type> * node)
{
    
}

template <class Type>
int getSize()
{
    
    return -1;
}

template <class Type>
int getHeight()
{
    
    return -1;
}

template <class Type>
bool isComplete()
{
    
    return false;
}

template <class Type>
bool isBalanced()
{
    
    return false;
}

template <class Type>
int calculateSize(BinaryTreeNode<Type> * startNode)
{
    
    return -1;
}

template <class Type>
int calculateHeight(BinaryTreeNode<Type> * startNode)
{
    
    return -1;
}

template <class Type>
bool isBalanced(BinaryTreeNode<Type> * startNode)
{
    
    return false;
}

template <class Type>
bool isComplete(BinaryTreeNode<Type> * startNode, int index, int size)
{
    
    return false;
}

template <class Type>
void inOrderTraversal(BinaryTreeNode<Type> * inStart)
{
    
}

template <class Type>
void preOrderTraversal(BinaryTreeNode<Type> * preStart)
{
    
}

template <class Type>
void postOrderTraversal(BinaryTreeNode<Type> * postStart)
{
    
}

template <class Type>
void removeNode(BinaryTreeNode<Type> * removeMe)
{
    
}

template <class Type>

template <class Type>

template <class Type>

template <class Type>

template <class Type>

template <class Type>




#endif /* BinarySearchTree_hpp */
