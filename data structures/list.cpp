#include <iostream>
using namespace std;
struct node {
	int value;
	node* next;
};

class list {
public:
	list();
	int add(int value);
	int remove(int value);
	int get(int position);
	bool empty();
private:
	node* head;
	int add(node* head, int value);
	int remove(node* head, int value);
	int get(node* head, int pos);
};

list::list() {
	head = NULL;
}

int list::add(int value) {
	if (head != NULL)
		add(head, value);
	else {
		head = new node;
		head->value = value;
		head->next = NULL;
	}

	return 0;
}

int list::add(node* head, int value) {
	node* iter = head;
	while (iter->next != NULL)
		iter = iter->next;
	node* newItem = new node;

	newItem->next = NULL;
	newItem->value = value;

	iter->next = newItem;

	return 0;
}

int list::remove(int value) {
	if (head != NULL)
		return remove(head, value);
	else
		return -1;
}

int list::remove(node* head, int value) {

	node* iterr = head;
	node* tmp = NULL;
	while (iterr->next != NULL && iterr->next->value != value)
		iterr = iterr->next;

	if (iterr->next == NULL)
		return -1;
	tmp = iterr->next->next;
	delete iterr->next;
	iterr->next = tmp;

	return 0;
}

int list::get(int value) {
	if (head != NULL)
		return get(head, value);
	else
		return -1;
}

int list::get(node* head, int position) {
	node *iterr = head;
	int pos = 0;
	while (iterr != NULL && pos != position) {
		iterr = iterr->next;
		pos++;
	}
	if (!iterr)
		return -1;
	else
		return iterr->value;
}

bool list::empty() {
	if (!head)
		return true;
	return false;
}

int main() {
	list l;
	for (int i = 0; i < 10; i++)
		l.add(i);
	for (int i = 0; i < 10; i++)
		cout << l.get(i) << " ";

	for (int i = 0; i < 10; i = i + 2)
		l.remove(i);
	cout << endl;
	for (int i = 0; i < 5; i++)
		cout << l.get(i) << " ";
	return 0;
}
