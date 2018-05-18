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

	int poz;
	cin >> poz;
	int n = 0;
	for (Node* current = first; current != nullptr; current = current->next)
		n++;
	poz = n - poz;
	
	Node* current = first;
	for (int i = 0; i < poz; i++)
		current = current->next;
	cout << current->data << endl;
}
