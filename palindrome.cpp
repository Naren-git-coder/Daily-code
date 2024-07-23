#include<iostream>
using namespace std;

bool REV(int i, string a) {
    if(i >= a.size() / 2)  
      {
		}return true;}
    if(a[i] != a[a.size() - i - 1])
      {
		  return false;}
    return REV(i + 1, a);
}

int main() {
    string a;
    cout << "Enter a word to check: ";
    cin >> a;

    bool isPalindrome = REV(0, a);

    if(isPalindrome)
        cout << a << " is a palindrome." << endl;
    else
        cout << a << " is not a palindrome." << endl;
    
    return 0;
}

