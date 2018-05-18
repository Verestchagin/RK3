#include <iostream>

using namespace std;

struct Node{
	int data;
	Node* next;
};

int main(int argc, char *argv[]) {
	Node *first = nullptr;
	first = new Node{atoi(argv[1]), nullptr};
	first -> next = new Node{atoi(argv[2]), nullptr};
	first -> next -> next = new Node{atoi(argv[3]), nullptr};
	first -> next -> next -> next = new Node{atoi(argv[4]), nullptr};
	for (Node* current = first; current != nullptr; current = current->next)
		cout << current->data << " ";
	cout << endl;

	Node* current = first;
	Node* next = nullptr;
	Node* previous = nullptr;
	while (current != nullptr){
		next = current->next;
		current->next = previous; 
		previous = current; 
		current = next; 
	}
	first = previous;
	for (Node* current = first; current != nullptr; current = current->next)
		cout << current->data << " ";
}
