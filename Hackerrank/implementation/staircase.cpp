#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void drawStaircase(int spaces, int hashes) {
	if (spaces < 0)
		return;
	for (int i = 0; i < spaces; i++)
		cout << " ";
	for (int i = 0; i < hashes; i++)
		cout << "#";
	cout << endl;
	drawStaircase(--spaces, ++hashes);

}
void staircase(int n) {
	drawStaircase(n - 1, 1);
}

int main() {
	int n;
	cin >> n;
	staircase(n);
	return 0;
}