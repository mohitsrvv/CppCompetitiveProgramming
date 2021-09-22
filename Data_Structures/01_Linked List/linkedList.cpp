// A simple C++ program for traversal of a linked list
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
   int data;
   Node* next;
};

// This function prints contents of linked list
// starting from the given node
void printList(Node* n){
   while(n != NULL){
      cout<<n->data<<" ";
      n = n->next;
   }
}

int main(){
   Node* head = new Node();
   Node* second = new Node();
   Node* third = new Node();

   head->data = 2;
   head->next = second;

   second->data = 4;
   second->next = third;

   third->data = 6;
   third->next = NULL;
   printList(head);
}