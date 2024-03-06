#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int l= s.size(),j=0;

        vector<char> arr;
        

        for(int i=0;i<l;i++){
            if((s[i]>=48&&s[i]<=57)||(s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122)){
                cout<<s[i];
                arr.push_back(tolower(s[i]));
            }
        }

    

        j=arr.size();

       for(int i=0;i<j;i++){
        j--;
        if(arr[i]!=arr[j]){
            return false;
        }
       }

       return true;

    }
};

int main(){
    Solution a;
    string s;

    getline(cin,s);
    
    cout<<a.isPalindrome(s);
}