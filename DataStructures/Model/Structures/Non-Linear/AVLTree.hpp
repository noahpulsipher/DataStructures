//
//  AVLTree.hpp
//  DataStructures
//
//  Created by Pulsipher, Noah on 4/17/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef AVLTree_hpp
#define AVLTree_hpp

#include "BinarySearchTree.hpp"

template <class Type>
class AVLTree : public BinarySearchTree<Type>
{
private:
    BinaryTreeNode<Type> * leftRotation (BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * leftRightRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightLeftRotation(BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * balanceSubTree (BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * insertNode(BinaryTreeNode<Type> * parent, Type value);
    BinaryTreeNode<Type> * removeNode(BinaryTreeNode<Type> * parent, Type value);
    
    int heightDifference(BinaryTreeNode<Type>* parent);
    
public:
    AVLTree();
    
    void insert(Type itemToInsert);
    void remove(Type value);
};

template <class Type>
int AVLTree<Type> :: heightDifference(BinaryTreeNode<Type> * node)
{
    int balance;
    int leftHeight = this->calculateHeight(node->getLeftNode());
    int rightHeight = this->calculateHeight(node->getRightNode());
    balance = leftHeight - rightHeight;
    return balance;
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: leftRotation (BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->getLeftNode();
    
    parent->setLeftChild(changedNode->getRightNode());
    
    changedNode->setRightChild(parent);
    
    return changedNode;
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: rightRotation (BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->getRightNode();
    
    parent->setRightChild(changedNode->getLeftNode());
    
    changedNode->setLeft Child(parent);
    
    return changedNode;
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: rightLeftRotation (BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->getRightNode();
    
    parent->setRightChild(leftRotation(changedNode));
    
    return rightRotation(parent);
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: leftRightRotation (BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->getLeftNode();
    
    parent->setLeftChild(rightRotation(changedNode));
    
    return leftRotation(parent);
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: balanceSubTree (BinaryTreeNode<Type> * parent)
{
    int balance Factor = heightDifference(parent);
    
    if(balanceFactor > 1)
    {
        if(heightDifferene(parent->getLeftNode()) > 0)
        {
            parent = leftRotation(parent);
        }
        else
        {
            parent = leftRightRotation(parent);
        }
    }
    else if(balanceFactor < -1)
    {
        if(heightDifference(parent->getRightNode()) > 0)
        {
            parent = rightLeftRotation(parent);
        }
        else
        {
            parent = rightRotation(parent);
        }
    }
    return parent;
}



















#endif /* AVLTree_hpp */
