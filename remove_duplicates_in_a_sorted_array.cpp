#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;

    int k = 0; // Pointer to place the next unique element

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[k]) {
            nums[k+1] = nums[i];
            k++;
        }
    }
    return k+1;
}

int main() {
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int k = removeDuplicates(nums);

    cout << "Number of unique elements: " << k << endl;
    cout << "Array with unique elements: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
