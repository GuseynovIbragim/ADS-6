// Copyright 2021 NNTU-CS
#ifndef INCLUDE_BST_H_
#define INCLUDE_BST_H_
template <class T>
class BST {
T data;
int count;
BST<T> *left, *right;
 public:
BST();
BST(T);
BST<T>* Insert(BST<T>*, T);
void Inorder(BST<T>*);
BST<T>* makeTree(const char *filename);
};
#endif  // INCLUDE_BST_H_
