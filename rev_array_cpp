#include<iostream>
using namespace std;

void REV(int i, int n, int a[]) {
    if(i >= n/2)
        return;
    int temp = a[i];
    a[i] = a[n-i-1];
    a[n-i-1] = temp;
    REV(i + 1, n, a);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int a[n];
    
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Original array: ";
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    REV(0, n , a);
    
    cout << "Reversed array: ";
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}
