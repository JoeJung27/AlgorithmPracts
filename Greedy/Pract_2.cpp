#include<iostream>
using namespace std;

void quick_sort(int *nums, int front, int end){
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
        quick_sort(nums,front,pivot-1);
        quick_sort(nums,pivot+1,end);
    }
}

int profit(int num,int *pro,int *time){
    quick_sort(pro,0,num-1);
    //continue from here
}

int main(){
    int num;
    cin>>num;
    int pro[num] , time[num];
    for(int i=0;i<num;i++){
        cout<<i<<" Profit: ";
        cin>>pro[i];
        cout<<i<<" Time: ";
        cin>>time[i];
    }
    cout<<profit(num,pro,time);
}