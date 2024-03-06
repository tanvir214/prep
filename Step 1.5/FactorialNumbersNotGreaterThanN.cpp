#include<bits/stdc++.h>
using namespace std;

long long factorial(long long n){
    if(n==0){
        return 1;
    }
    else return n*factorial(n-1);
    
}


vector<long long> factorialNumbers(long long n) {
    // Write Your Code Here
    long long i=1;
    vector<long long> ans;
    while(i<n){
        long long x=factorial(i);
        if(x<n){
            ans.push_back(x);
        }
        i++;
    }

    return ans;
}

int main(){
    long long n,sum;
    cin>>n;

    vector<long long> ans;

    ans=factorialNumbers(n);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}