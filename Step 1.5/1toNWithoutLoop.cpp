#include<bits/stdc++.h>
using namespace std;


void rec(int x, vector<int>& ans) {
    if(x == 0) {
        return;
    }
    rec(x-1, ans);
    ans.push_back(x);
}

vector<int> printNos(int x) {
    vector<int> ans;
    rec(x, ans);
    return ans;
}

int main(){

    int n;

    vector<int> ans;
    cin>>n;
    ans=printNos(n);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }

    return 0;
}