#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;


void solve(){
	int n,k;
	cin>>n>>k;
	int a[n+1]={0};
	int c=0;
	string s;
	cin>>s;
	for(int i=1;i<=s.size();++i){
		
		
		if(s[i-1]=='B'){
			c++;
		}
		a[i]=c;
	}
	int m=0;
	for (int j=k;j<=n;++j)
	{
		int b=a[j]-a[j-k];
		if(b>m){m=b;}

	}
	// cout<<m<<endl;
	cout<<k-m<<endl;
}
	




int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}
}