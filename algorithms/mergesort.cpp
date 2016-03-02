#include <iostream>
using namespace std;
#define size 500
void merge(int *a, int low, int high, int mid) {
    int i = 1, k = 1, j = mid+1;
    int temp[size];
    
    while(i <= mid && j <= high)
        if(a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    
    while( i <= mid)
        temp[k++] = a[i++];
            
    while( j < high)
        temp[k++] = a[j++];
    
    for(i = 0; i < k; i++)
        a[i] = temp[i];    
    
}
void mergesort(int *a, int left, int right) {
    int mid = (left+right) / 2;
    
    mergesort(a, left, mid);
    mergesort(a, mid+1, right);
    merge(a, left, right, mid);
}

int main()
{
    int a[20], i, b[20];
    cout << "enter  the elements\n";
    for (i = 0; i < 5; i++)
    {
        cin>>a[i];
    }
    mergesort(a, 0, 4);
    cout << "sorted array\n";
    for (i = 0; i < 5; i++)
    {
        cout<<a[i];
    }
    cout << "enter  the elements\n";
    for (i = 0; i < 5; i++)
    {
        cin >> b[i];
    }
    mergesort(b, 0, 4);
    cout << "sorted array\n";
    for (i = 0; i < 5; i++)
    {
        cout << b[i];
    }
}