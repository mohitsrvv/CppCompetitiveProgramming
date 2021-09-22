// #include <bits/stdc++.h>
// using namespace std;

// class Node {
// public:
// 	int Value;
// 	Node* Next;
// };

// void printList(Node* n){
// 	while(n!=NULL){
// 		cout << n->Value << endl;
// 		n = n->Next;
// 	}
// }

// void insertAtTheFront(Node** head, int newValue){
// 	// Prepare a new node
// 	Node* newNode = new Node();
// 	newNode->Value = newValue;
// 	// Put it in front of current head
// 	newNode->Next = *head;
// 	// Move head of the list to point to the new Node
// 	*head = newNode;
// }

// void insertAtTheEnd(Node** head, int newValue){
// 	// Prepare a new node
// 	Node* newNode = new Node();
// 	newNode->Value = newValue;
// 	newNode->Next = NULL;
// 	// If linked list is empty, newNode will be head node
// 	if(*head == NULL){
// 		*head = newNode;
// 		return;
// 	}
// 	// Find the last node
// 	Node* last = *head;
// 	while(last->Next!=NULL){
// 		last = last->Next;
// 	}
// 	// insert a newNode after the last node(at the end)
// 	last->Next = newNode;
// }

// void insertAfter(Node* previous, int newValue){
// 	// Check if previous node is NULL
// 	if(previous == NULL){
// 		cout << "previous can not be NULL";
// 		return;
// 	}
// 	// Prepare a newNode;
// 	Node* newNode = new Node();
// 	newNode->Value = newValue;
// 	// insert newNode after previous
// 	newNode->Next = previous->Next;
// 	previous->Next = newNode;
// }

// int main(){
// 	Node* head = new Node();
// 	Node* second = new Node();
// 	Node* third = new Node();

// 	head->Value = 1;
// 	head->Next = second;

// 	second->Value = 2;
// 	second->Next = third;

// 	third->Value = 3;
// 	third->Next = NULL;

// 	insertAfter(head, -2);
// 	insertAtTheEnd(&head, -3);
// 	insertAtTheFront(&head, -1);
// 	printList(head);
// }






#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

void printList(Node* n){
	while(n != NULL){
		cout<<n->data<<" ";
		n = n->next;
	}
}

void insertFront(Node** head, int newData){
	Node* newNode = new Node();
	newNode->data = newData;
	newNode->next = *head;
	*head = newNode;
}

void insertLast(Node** head, int newData){
	Node* newNode = new Node();
	newNode->data = newData;
	newNode->next = NULL;
	if(*head == NULL){
		*head = newNode;
		return;
	}
	Node* last = *head;
	while(last->next != NULL){
		last = last->next;
	}
	last->next = newNode;
}

void insertAfter(Node* previous, int newData){
	if(previous == NULL){
		cout<<"Previous can not be null";
		return;
	}
	Node* newNode = new Node();
	newNode->data = newData;
	newNode->next = previous->next;
	previous->next = newNode;
}

int main(){
	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();
	head->data = 1;
	head->next = second;
	second->data = 2;
	second->next = third;
	third->data = 3;
	insertAfter(head, 3);
	third->next = NULL;
	insertLast(&head, -3);
	insertFront(&head, -1);
	printList(head);
}