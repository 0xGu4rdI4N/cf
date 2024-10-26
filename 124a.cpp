#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;


void solve(){

}
	




int main(){
	// int t;
	// cin>>t;
	// while (t--){
	// 	solve();
	// }
	int n,a,b;
	cin>>n>>a>>b;
	// int min_pos=n-a;
	int c=0;
	int d=b+1;
	for(int i=b;i>=0;--i){
		// cout<<i<<endl;
		if(n-i-1>=a){
			c++;
		}
	}
	cout<<c<<endl;
}