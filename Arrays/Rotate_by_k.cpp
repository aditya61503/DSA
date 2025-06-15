#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;

    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

int main() {
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the array elements: ";
    for(int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    cout << "Enter the number of positions to rotate: ";
    cin >> k;

    rotate(nums, k);

    cout << "Array after rotation: ";
    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
