#include<iostream>
using namespace std;

int main() {
	char a;

    cin>>a;

    if(a>=65&&a<=90)
        cout<<"1";
    else if(a>=98&&a<=122)
        cout<<"0";
    else
        cout<<"-1";

    return 0;

}
