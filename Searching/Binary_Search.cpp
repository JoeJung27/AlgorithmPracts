#include<iostream>
using namespace std;

int search(int *nums, int target, int left, int right){

    if (left>right) return -1;
    int mid = (left+right)/2;
    if (nums[mid]==target){
        cout<<"\nAt:\n";
        return mid;
    }

    else if (nums[mid]>target){
        return search(nums,target,left,mid-1);
    }
    else{
        return search(nums,target,mid+1,right);
    }
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n;
    cout<<"\nEnter Number:\n";
    cin>>n;
    cout<<search(arr,n,0,10);
}

