#include<bits/stdc++.h>
using namespace std;

void sumN(int n,long long &sum){
    if(n==0){
        return;
    }
    sumN(n-1,sum);
    sum=sum+n;
}

long long sumFirstN(long long n) {
    // Write your code here.
    long long sum=0;
    sumN(n,sum);

    return sum;
}

int main(){
    int n;
    cin>>n;

    cout<<sumFirstN(n);
}