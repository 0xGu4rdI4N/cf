#include <bits/stdc++.h>
using namespace std;

void solve(){
	int s=0;
	int n,k ;
	int c=1 ;
	cin>>n>>k;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for (int i=1;i<n;i++){
		if (a[i]-a[i-1]<=k){
			c++;
			s=max(s,c);
		}
		else{
			c=1;
			s=max(s,c);
		}
	
	}
	if (n==1){
		cout<<0<<endl;
	}
	else{
		cout<<n-s<<endl;
	}
}

int main(){
	int t;
	cin>>t;	
	while (t--){
	solve();	
	}
}