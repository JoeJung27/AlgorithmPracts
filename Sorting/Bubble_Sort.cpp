#include <iostream>
#include <vector>
using namespace std;

void sort(vector <int> &nums, int size){
    for(int i=size-1;i>0;i--){
        for(int j=0;j<=i-1;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
    }
}

int main(){
    cout<<"\nEnter Numbers:\n";
    vector <int> arr;
    int num;
    while(cin>>num){
        arr.push_back(num);
    }
    cout<<'\n';
    sort(arr,arr.size());
    cout<<"\nSorted:\n";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}

