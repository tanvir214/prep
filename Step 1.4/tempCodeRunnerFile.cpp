#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int r,rev=0,n=x;
         while(x!=0){
            r=x%10;
            x=x/10;
            rev=rev*10+r;
         }

         cout<<rev;

         return n==rev?true:false;
    }
};

int main(){
    Solution a;
    int n;
    cin>>n;

    cout<<a.isPalindrome(n);
}