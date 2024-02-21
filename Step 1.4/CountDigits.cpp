#include<iostream>
using namespace std;

int countDigits(int n){
    int r,i=0,num=n;

    while(n>0){
        r=n%10;
        if(r>0&&n%num==0)
            i++;
        n=n/10;
    }

    return i;
}


int main(){
    int n;
    cin>>n;

    cout<<countDigits(n);
}