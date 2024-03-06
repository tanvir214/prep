#include<bits/stdc++.h>
using namespace std;

/*
int sumDivisors(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }

    return sum;	
}

int sumOfAllDivisors(int n){
	// Write your code here.
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+sumDivisors(i);
    }

    return sum;
}
*/

int sumOfAllDivisors(int n){
	// Write your code here.
    int sum=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0)
                sum=sum+j;
        }
    }

    return sum;
}


int main(){
    int n;
    cin>>n;
    cout<<sumOfAllDivisors(n);
}