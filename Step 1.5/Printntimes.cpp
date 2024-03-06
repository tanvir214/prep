#include<bits/stdc++.h>
using namespace std;

void printStr(int n,vector<string>& ans){
    if(n==0){
        return;
    }
    printStr(n-1,ans);
    ans.push_back("Coding Ninjas");
}

vector<string> printNTimes(int n) {
	// Write your code here.
    vector<string> ans;
    printStr(n,ans);
    return ans;
}


int main(){
    int n;
    vector<string> ans;

    cin>>n;

    ans=printNTimes(n);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}