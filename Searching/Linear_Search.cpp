#include<iostream>
using namespace std;

int search(int *nums,int size,int n){
    for(int i=0;i<size;i++){
        if(n==nums[i]){
            cout<<"\nAt:\n";
            return i;
        }
    }
}

int main(){
    int arr[10] = {1,6,7,9,4,2,8,5,3,10};
    int n;
    cout<<"\nEnter Number:\n";
    cin>>n;
    cout<<search(arr,10,n);
}

