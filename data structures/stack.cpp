#include <iostream>
using namespace std;
#include <iostream>

struct node {
	int value;
	node* next;
};


class stack {

public:
	~stack();
	stack();
	int push(int val);
	int pop();
	int peek();
	bool empty();

private:
	int peek(node* stack);
	void destroy_stack(node* stack);
	node* base;
};

stack::stack() {
	base = NULL;
};



int stack::push(int val) {
	if (base != NULL) {
		node* top = new node;
		top->value = val;
		top->next = base->next;
		base->next = top;
	}
	else {
		base = new node;
		base->value = val;
		base->next = NULL;
	}
	return 0;
}


int stack::pop() {
	if (!base)
		return -1;

	node* tmp = base;
	base = base->next;
	delete tmp;
	return 0;
}

int stack::peek() {
	if (base != NULL)
		return peek(base);
	return -1;
}

int stack::peek(node* b) {
	return b->value;
}

bool stack::empty() {
	if (!base)
		return true;
	return false;
}

stack::~stack() {
	destroy_stack(base);
}

void stack::destroy_stack(node* b) {
	while (b != NULL) {
		node* tmp = b;
		b = b->next;
		delete tmp;
	}
}

int main() {
	stack s;
	for (int i = 0; i < 10; i++)
		s.push(i);
	for (int i = 0; i < 10; i++) {
		cout << s.peek() << " ";
		s.pop();
	}
	cout << endl;
	getchar();
	return 0;
}
