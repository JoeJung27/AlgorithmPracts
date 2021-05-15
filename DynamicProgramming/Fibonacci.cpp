#include <iostream>
using namespace std;

int main(){
    long long int Fib[50];
    int n;
    Fib[0]=1;
    Fib[1]=1;  
    for(int i=2;i<50;i++){ 
        Fib[i]=Fib[i-1]+Fib[i-2];
    }
    while(cin>>n){
        cout<<Fib[n-1]<<endl;
    }
}

