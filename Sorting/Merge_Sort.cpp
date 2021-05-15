#include <iostream>
#include <vector>
using namespace std;

const int Max = 1000;

void merge(vector <int> &Nums, int left, int mid, int right){
    vector <int> left_sub (Nums.begin()+left,Nums.begin()+mid+1);
    vector <int> right_sub (Nums.begin()+mid+1,Nums.begin()+right+1);
    left_sub.insert(left_sub.end(),Max);
    right_sub.insert(right_sub.end(),Max);
    int idx_left = 0 , idx_right = 0;
    for(int i=left;i<=right;i++){
        if(left_sub[idx_left]<=right_sub[idx_right]){
            Nums[i] = left_sub[idx_left];
            idx_left++;
        }
        else{
            Nums[i] = right_sub[idx_right];
            idx_right++;
        }
    }
}

void sort(vector <int> &nums, int left, int right){
    if(left<right){
        int mid=(left+right)/2;
        sort(nums,left,mid);
        sort(nums,mid+1,right);
        merge(nums,left,mid,right);
    }
}

int main(){
    cout<<"\nEnter Numbers:\n";
    vector <int> arr;
    int num;
    while(cin>>num){
        arr.push_back(num);
    }
    sort(arr,0,arr.size()-1);
    cout<<"\nSorted:\n";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<' ';
    }
}

