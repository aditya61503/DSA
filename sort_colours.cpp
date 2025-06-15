#include <iostream>
#include <vector>
using namespace std;

void sort_colours(vector<int>&nums){
    int low=0;
    int mid=0;
    int high=nums.size()-1;

    while(mid<=high){
        if(nums[mid] == 0){
            swap(nums[mid],nums[low]);
            low++;
            mid++;
        }
        else if(nums[mid] == 1){
            mid++;
        }
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements (only 0s, 1s, and 2s): ";
    for(int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    sort_colours(nums);

    cout << "Sorted array: ";
    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

