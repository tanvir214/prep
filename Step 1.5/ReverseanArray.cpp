#include<bits/stdc++.h>
using namespace std;



vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.

    reverse(nums.begin(),nums.end());
    return nums;

}


int main(){
    int n,k;
    cin>>n;

    vector<int> arr;

    for(int i=0;i<n;i++){
        cin>>k;
        arr.push_back(k);
    }

    arr=reverseArray(n,arr);

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    return 0;
}