#include <iostream>
using namespace std;
//Binary search tree
struct node {
	int val;
	node* left, *right;
};
class bst {
	public:
		bst();
		~bst();
		bool search(int key);
		void insert(int key);
		int  bst_delete(int key);
		void display();
	private:
		node* root;
		bool search(int key, node* n);
		void insert(int key, node* n);
		int bst_delete(int key, node* n);
		void display(node* n);

};

bst::bst() {
	root = NULL;
}

bool bst::search(int key) {
	return search(key, root);
}

bool bst::search(int key, node* n) {
	if (n == NULL)
		return false;
	if (n->val < key)
		search(key, n->left);
	else if (n->val > key)
		search(key, n->right);
	else if (n->val == key)
		return true;
}

void bst::insert(int key) {
	insert(key, root);
}

void bst::insert(int key, node* n) {
	if (n == NULL) {
		n = new node;
		n->val = key;
		n->left = NULL;
		n->right = NULL;
	}
	else
		if (n->val < key)
			insert(key, n->left);
		else
			insert(key, n->right);
}

int bst::bst_delete(int key) {
	bst_delete(key, root);
}
//todo finish deletion
int bst::bst_delete(int key, node* n) {
	return 0;
}
void bst::display() {
	display(root);
}

void bst::display(node* n) {
	if (n == NULL)
		return;
	display(n->left);
	cout << n->val << " ";
	display(n->right);
}
