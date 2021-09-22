#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int Value;
	Node* Next;
};

void printList(Node* n){
	while(n!=NULL){
		cout << n->Value << endl;
		n = n->Next;
	}
}

void insertAtTheFront(Node** head, int newValue){
	Node* newNode = new Node();
	newNode->Value = newValue;
	newNode->Next = *head;
	*head = newNode;
}

void insertAtTheEnd(Node** head, int newValue){
	Node* newNode = new Node();
	newNode->Value = newValue;
	newNode->Next = NULL;
	if(*head == NULL){
		*head = newNode;
		return;
	}
	Node* last = *head;
	while(last->Next!=NULL){
		last = last->Next;
	}
	last->Next = newNode;
}

void insertAfter(Node* previous, int newValue){
	if(previous == NULL){
		cout << "previous can not be NULL";
		return;
	}
	Node* newNode = new Node();
	newNode->Value = newValue;
	newNode->Next = previous->Next;
	previous->Next = newNode;
}

int main(){
	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();
	head->Value = 100;
	head->Next = second;
	second->Value = 200;
	second->Next = third;
	third->Value= 300;
	third->Next = NULL;
	insertAtTheFront(&head, -100);
	insertAfter(head, -200);
	insertAtTheEnd(&head, -300);
	printList(head);
}