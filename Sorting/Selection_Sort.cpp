#include <iostream>
#include <vector>
using namespace std;

void sort(vector <int> &nums, int size){
    int min = 0;
    for(int i=0;i<size;i++){
        min = i;
        for(int j=i+1;j<size;j++){
            if(nums[j]<nums[min]){
                min = j;                
            }
        }
        int tmp = nums[i];
        nums[i] = nums[min];
        nums[min] = tmp;
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

