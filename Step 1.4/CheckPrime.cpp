#include<iostream>
using namespace std;

bool isPrime(int n)
{
    if(n==0 || n==1)
        return true;
	else{
        for(int i=2;i<n/2;i++){
            if(n%i==0)
                return false;
        }
    }
}


int main(){
    int n;
    cin>>n;

    isPrime(n)?cout<<"YES":cout<<"NO";
}