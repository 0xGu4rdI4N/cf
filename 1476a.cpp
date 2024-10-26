#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;


void solve(){
	ll n,k;
	cin>>n>>k;	
	ll m=n;
	if (n<k){
		if(k%n==0){
			cout<<k/n<<endl;
		}
		else{
		cout<<k/n+1<<endl;
	}
	}
	else{
		if (n%k==0){
			cout<<1<<endl;
		}
		else{
			cout<<2<<endl;
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