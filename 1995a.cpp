#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
using ll=long long int;




void solve(){
	int n,k;
	cin>>n>>k;
	int d=0;
	d++;
	if(k==0){
		cout<<0<<endl;
	return;
}
	k=k-n;
	if(k>0){
		for(int i=n-1;i>0;--i){
			k=k-i;
			d++;
			if(k>0){
			k=k-i;
			d++;
		}
			if(k<=0)break;
		}
	}
	cout<<d<<endl;
	}



int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}
	
}