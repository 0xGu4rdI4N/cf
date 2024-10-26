#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;


void solve(){
	int n,q;
	cin>>n>>q;
	int a[n];
	ll s[n];
	ll sum=0;
	for (int i=0;i<n;i++){
		cin>>a[i];
		sum=sum+a[i];
		s[i]=sum;
	}

	while (q--){
			int l,r,k;
			ll ans;
			cin>>l>>r>>k;

			ans=s[n-1]-(s[r-1]-s[l-1])-a[l-1]+(r-l+1)*k;
			// cout<<ans<<endl;
			if (ans%2==0){
				cout<<"NO"<<endl;
			}
			else{
				cout<<"YES"<<endl;
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