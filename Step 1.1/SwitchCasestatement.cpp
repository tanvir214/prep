#include<iostream>
#include<bits/stdc++.h>
using namespace std;

double areaSwitchCase(int ch, vector<double> a) {
	// Write your code here
	double pi= 3.141592653589793238462;

	switch(ch){
		case 1:
			return pi*a[ch-1]*a[ch-1];	
		case 2:
			return a[ch-2]*a[ch-1];
	}
}


int main(){
	int ch;
	double n;
	vector<double> a;
	cin>>ch;

	for(int i=0; i<ch ; i++){
		cin>>n;
		a.push_back(n);
	}

	cout<<areaSwitchCase(ch,a);
}