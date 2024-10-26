#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;


void solve(){
	int k,q;
	cin>>k>>q;
	int a[k];
	int n[q];
	for(int i=0;i<k;++i){
		cin>>a[i];
	}
	// cout<<a[7]<<endl;
	for(int i=0;i<q;++i){
		cin>>n[i];
	}
	// cout<<k<<endl;
	for (int i=0;i<q;++i){
		int b=n[i];
		int c=b;
		while (c>=a[0]){
			int w=c;
			// cout<<k<<endl;
			for (int j=0;j<k;++j){	
			for(int l=1;l<=c;++l){
				if (l==a[j]){
					--w;
					// cout<<j<<endl;
					// cout<<a[j]<<endl;
					break;
				}
			}
	}
	c=w;
	// cout<<c<<endl;
	}
	cout<<c<<" ";
	}
	cout<<endl;


}

	




int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}	
}