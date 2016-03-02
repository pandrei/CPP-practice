#include <iostream>
#include <vector>
using namespace std;

class mapEntry {
	public:
		mapEntry(int k, int v);
		int getKey();
		int getValue();
	private:
		int key;
		int value;
};

mapEntry::mapEntry(int k, int v) {
	key = k;
	value = v;
}

int mapEntry::getKey() {
	return key;
}

int mapEntry::getValue() {
	return value;
}

class hashtable {
	public:
		hashtable(size_t size);
		~hashtable();
		void put(int key, int value);
		int get(int key);
		void DebugHashtable();
private:
	vector<mapEntry> *htable;
	size_t dimension;

};

hashtable::hashtable(size_t size) {
	htable = new vector<mapEntry>[size];
	dimension = size;
}

hashtable::~hashtable() {
	delete[] htable;
}

void hashtable::put(int key, int value) {
	int hash = key % dimension;
	//colision
	if (!htable[hash].empty()) {
		//solved by chaining
		bool keyFound = false;
		for (vector<mapEntry>::iterator it = htable[hash].begin(); it != htable[hash].end(); ++it) {
			if (it->getKey() == key) {
				htable[hash].erase(it);
				htable[hash].push_back(mapEntry(key, value));
				keyFound = true;
				break;
			}
		}
		if (!keyFound)
			htable[hash].push_back(mapEntry(key, value));

	}
	else {
		htable[hash].push_back(mapEntry(key, value));
	}
}

int hashtable::get(int key) {
	int hash = key % dimension;

	if (htable[hash].empty())
		return -1;
	else {
		for (vector<mapEntry>::iterator it = htable[hash].begin(); it != htable[hash].end(); ++it) {
			if (it->getKey() == key)
				return it->getValue();
		}
		return -1;
	}
}

void hashtable::DebugHashtable() {
	for (int i = 0; i < dimension; i++) {
		for (vector<mapEntry>::iterator j = htable[i].begin(); j != htable[i].end(); j++) {
			cout << " key is " << j->getKey() << "value is " << j->getValue() << endl;
		}
		cout << endl;
	}
}
int main() {
	hashtable h(10);
	for (int i = 0; i < 12; i++) {
		h.put(i, 2 * i);
	}
	//check collision with identical key, value should b replaced.
	h.put(5, 150);
	h.DebugHashtable();
	getchar();
	return 0;
}
