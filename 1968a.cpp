#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <numeric>
using namespace std;
using ll=long long int;




void solve(){
	int n;
	cin>>n;
	int a=0;
	int b;
	for (int i=1;i<n;++i){
		if(gcd(n,i)+i>a){
			a=gcd(n,i)+i;
			b=i;
		}
	}
	cout<<b<<endl;
}	
	



int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}

}