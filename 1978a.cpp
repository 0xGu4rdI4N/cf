#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;


void solve(){
	int n;
	cin>>n;
	vector<ll> a(n);
	ll max=0;
	for(int i=0;i<n;++i){
		cin>>a[i];
		if(a[i]>max){max=i;}
	}
	int c=0;
	c+=a[n-1];
	ll b=a[n-1];
	sort(a.begin(),a.end());
	if (a[n-1]==b){
		c+=a[n-2];
	}
	else{
		c+=a[n-1];
	}
	cout<<c<<endl;
	// int count=0;
	// for(int i=0;i<n;++i){
	// 	if (a[i]==a[max]){count++;}
	// }
	// if (a[n-1]==a[max]){
	// 	if (count>1){c+=a[n-1];}
	// 	else{}
	// }




}
	




int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}
}