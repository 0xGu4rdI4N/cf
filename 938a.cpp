#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;

// int T[27];

void solve(){
	int n,a,b;
	cin>>n>>a>>b;
	int c,d;
	if (b>2*a){
		cout<<n*a<<endl;
	}
	else{
		c=n/2;
		d=n%2;
		cout<<c*b+d*a<<endl;
	}
}

int main(){
	int t;
	cin>>t;	
	while (t--){
		solve();	
	}

}