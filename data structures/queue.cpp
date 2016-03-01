#include <iostream>
using namespace std;
struct node {
	int val;
	node* left, *right;
};

class queue {
	public:
		queue();
		~queue();
		int push(int val);
		int pop();
		int front();
		int back();
		void test_queue();
	private:
		
		node* head;
		node* tail;
};

queue::queue() {
	head = NULL;
	tail = NULL;
}

int queue::push(int val) {
	if (head == NULL) {
		head = new node;
		head->val = val;
		head->left = NULL;
		head->right = NULL;
	} else 

	if (tail == NULL) {
		tail = new node;
		tail->val = val;
		tail->left = head;
		head->right = tail;
		tail->right = NULL;
	} else 
	if( head != NULL && tail != NULL) {
		node* tmp = new node;
		tmp->val = val;
		tmp->left = NULL;
		tmp->right = head;
		head = tmp;
	}
	return 0;
}

int queue::pop() {
	if (!tail)
		return -1;
	else {
		node * tmp = tail;
		tail = tail->left;
		delete tmp;
		return 0;
	}
}

int queue::front() {
	if (head == NULL)
		return -1;
	else
		return head->val;
}

int queue::back() {
	if (tail == NULL)
		return -1;
	return tail->val;
}

queue::~queue() {
	node* iter;
	while (head != NULL) {
		iter = head;
		head = head->right;
		delete iter;
	}
}

void queue::test_queue() {
	node* iter;
	iter = head;
	while (iter != NULL)
	{
		cout << iter->val << " ";
		iter = iter->right;
	}
}
int main() {
	queue q;
	for (int i = 0; i < 10; i++) {
		q.push(i);
	//	cout << q.back() << " " << q.front() << endl;
	}
	//q.test_queue();
	cout << endl;
	for (int i = 0; i < 10; i++) {
		cout << q.front();
		q.pop();
	}
	getchar();
	return 0;
}
