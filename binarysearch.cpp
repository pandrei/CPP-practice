#include <iostream>
using namespace std;


int binary_search(int v[], int start, int end, int value) {
	if(start > end)
		return -1;
	else {
		int mid = (start + end) / 2;
			if (v[mid] == value) return mid;
		if (v[mid] > value)
			binary_search(v, start, mid-1, value);
		else
			binary_search(v, mid+1, end, value);
	}
	
}
int main() {
	int v[] = {1, 2, 3 , 4 , 6, 125, 194};
	cout << binary_search(v, 0, 7, 194);
	return 0;
}
