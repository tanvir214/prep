#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int r,rev=0;

        while(x!=0){
            r=x%10;
            x=x/10;
            if(rev> INT_MAX/10 || rev < INT_MIN/10){
                return 0;
            }
            rev=(rev*10)+r;
        }
        return rev;   
    }
};


int main(){
    Solution a;
    signed int n;
    cin>>n;
    cout<<a.reverse(n)<<endl;
}
