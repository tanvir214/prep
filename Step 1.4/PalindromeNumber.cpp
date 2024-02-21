#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int r,rev=0,n=x;
         while(x!=0){
            r=x%10;
            x=x/10;
            if(rev > INT_MAX/10 || rev < INT_MIN/10)
                return false;
            rev=rev*10+r;
         }
         return n==rev?true:false;
    }
};

int main(){
    Solution a;
    signed int n;
    cin>>n;

    a.isPalindrome(n)==1?cout<<"true":cout<<"false";
}