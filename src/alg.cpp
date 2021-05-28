// Copyright 2021 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "bst.h"

BST<std::string> makeTree(const char* filename) {
  // поместите сюда свой код
ifstream file(filename);

if (!file) {
cout << "error opening file!" << std::endl;
return NULL;
}
BST<string> b, *root = NULL;
string word = "";
while (!file.eof()) {
int ch = file.get();
if (isalpha(ch)) {
word += ch;
} else {
if (word != "") {
root = b.Insert(root, toLowerCase(word));
word = "";
}
}
}
file.close();
return root;
}
