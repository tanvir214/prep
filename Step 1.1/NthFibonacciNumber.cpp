#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c,n=1,n1=1,next;

    cin>>c;
    
    if(c==1){
            cout<<c;
    }
    else if(c==2){
            cout<<c;
    }else {
        for(int i=2;i<c;i++){
        next=n+n1;
        n=n1;
        n1=next;
        }
        cout<<next;
    }
    
}