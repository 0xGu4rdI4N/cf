#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;


void solve(){
	ll n,a,b;
	cin>>n>>a>>b;
	ll k=(2*b+1-2*a)/2;
	// cout<<k<<endl;
	ll c=min(n,b);
	// cout<<c<<endl;
	if (k<=0){
		k=0;
		ll p=b*k-(k*(k-1)/2)+(n-k)*a;
		cout<<p<<endl;
	}
	else{
	if (k>=c){
		k=c;
		ll p=b*k-(k*(k-1)/2)+(n-k)*a;
		cout<<p<<endl;
	}
	// cout<<k<<endl;
	else{
		ll p=b*k-(k*(k-1)/2)+(n-k)*a;
		k+=1;
		ll q=b*k-(k*(k-1)/2)+(n-k)*a;
		if (p>q)cout<<p<<endl;
		else cout<<q<<endl;
	}
}
	
}
	




int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}
}