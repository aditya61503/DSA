#include<iostream>
#include<vector>
using namespace std;
int binary_search(const vector<int>&arr,int target){
    int left=0;
    int right=arr.size()-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==target)
            return mid;
        else if(arr[mid]<target)
            left=mid+1;
        else
            right=mid-1;

    }return -1;
}
int main(){
    cout<<"Enter the size of array";
    int n;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter array elements in sorted manner";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target ele";
    cin>>target;
    int result=binary_search(arr,target);
    cout<<"Your target ele is on "<<result+1;
}