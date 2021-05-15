#include <iostream>
using namespace std;

int change(int n){
    int coin[4] = {1,5,10,50};
    int sum = 0;
    while(n!=0){
        if (coin[3]<=n){
            sum += 1;
            n -= coin[3];
        }
        else if(coin[2]<=n){
            sum += 1;
            n -= coin[2];
        }
        else if(coin[1]<=n){
            sum += 1;
            n -= coin[1];
        }
        else{
            sum += 1;
            n -= coin[0];
        }
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    cout<<change(n);
}

