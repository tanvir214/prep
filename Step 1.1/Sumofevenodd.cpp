#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n,r,even=0,odd=0;

    cin>>n;

    while(n>0){
        r=n%10;
        n=n/10;
        if(r%2==0)
            even=even+r;
        else
            odd=odd+r;
    }
    cout<<even<<" "<<odd;
    return 0;
}