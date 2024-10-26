#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;

const ll N = 1'000'000'000'000L;

void solve(){
	int a,b;
	cin>>a>>b;
	cout<<min(a,min(b,(a+b)/3))<<endl;
}	
	



int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}

}