#include <iostream>
using namespace std;

void leftrotate(int n, int a[]) {
    int temp = a[0];
    for (int i = 1; i < n; i++) {
        a[i - 1] = a[i];
    }
    a[n - 1] = temp;
}

int main() {
    int n;
    cout << "Enter n = ";
    cin >> n;
    
    int a[n];

    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    leftrotate(n, a);

    cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

