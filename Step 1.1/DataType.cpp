#include<iostream>
using namespace std;

int dataTypes(string type) {
    int i;
	if(type.compare("Integer")==0)
        i=4;
    else if(type.compare("Long")==0)
        i=8;
    else if (type.compare("Float")==0)
        i=4;
    else if(type.compare("Double")==0)
        i=8;
    else
        i=1;

    return i;
}


int main()
{
    string st;

    cin>>st;

    cout<<dataTypes(st);
    
    return 0;
}