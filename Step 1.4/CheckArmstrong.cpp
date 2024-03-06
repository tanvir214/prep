#include<bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n){
	//Write your code here
    int i=0,r,num=n,sum=0;

    while(num>0){
        r=num%10;
        i++;
        num=num/10;
    }
    num=n;

    while (num>0)
    {
        r=num%10;
        sum=sum+pow(r,i);
        num=num/10;
    }
    return sum==n;
}


int main(){
    int n;
    cin>>n;
    checkArmstrong(n)?cout<<"true":cout<<"false";
}