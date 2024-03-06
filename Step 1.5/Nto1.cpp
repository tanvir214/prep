#include<bits/stdc++.h>
using namespace std;

void printNum(int n,vector<int>& ans){
    if(n==0){
        return;
    }
    ans.push_back(n);
    printNum(n-1,ans);
}


vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> ans;
    printNum(x,ans);
    return ans;

}

int main(){
    int n;

    vector<int> ans;

    cin>>n;

    ans=printNos(n);

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}