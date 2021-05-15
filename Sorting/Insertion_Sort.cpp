#include <iostream>
#include <vector>
using namespace std;

void sort(vector <int> &nums, int size){
    for(int i=1;i<size;i++){
        for(int j=0;j<i;j++){
            if(nums[i]<nums[j]){
                nums[j] = nums[j] + nums[i];
                nums[i] = nums[j] - nums[i];
                nums[j] = nums[j] - nums[i];
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
    sort(arr,arr.size());
    cout<<"\nSorted:\n";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<' ';
    }
}

