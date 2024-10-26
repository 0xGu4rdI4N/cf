#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;


void solve(){
	int n;
	cin>>n;
	int v;
	for(int i=0;i<1e5;++i){
		if (i*i<=n && pow((i+1),2)>n) {
			v=i;
			break;
		}
	}
	if (pow(v,2)==n) cout<<2*v<<endl;
	else if (n<=pow(v,2)+v)cout<<2*v+1<<endl;
	else cout<<2*v+2<<endl;


}	
	



int main(){
	// int t;
	// cin>>t;
	// while (t--){
		solve();
	// }

}