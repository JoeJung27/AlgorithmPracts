#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int> &nums, int front, int end){
    if(front<end){
        int pivot = nums[end];
        int i = front - 1;
        for(int j = front;j<end;j++){
            if(nums[j]<pivot){
                i++;
                int tmp = nums[i];
                nums[i] = nums[j];
                nums[j] = tmp;
            }
        }
        i++;
        int tmp = nums[i];
        nums[i] = nums[end];
        nums[end] = tmp;
        pivot = i;
        sort(nums,front,pivot-1);
        sort(nums,pivot+1,end);
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

