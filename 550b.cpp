#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;




void solve(){
	int n,l,r,x;
	cin>>n>>l>>r>>x;
	vector<int>v(n);
	for(auto &x:v){
		cin>>x;
	}
	int c=0;
	for(int i=0;i<(1<<n);++i){
		int m=0;
		int a=1e7;
		int t=0;
		for (int j=0;j<n;++j){
			if(i & (1<<j)){
				m=max(m,v[j]);
				a=min(a,v[j]);
				t+=v[j];
			}
		}
		if(t>=l && t<=r && (m-a)>=x)c++;
	}
cout<<c<<endl;
}	
	



int main(){
	// int t;
	// cin>>t;
	// while (t--){
		solve();
	// }

}