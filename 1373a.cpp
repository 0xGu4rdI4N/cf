	#include <bits/stdc++.h>
	#include <iostream>
	#include <string>
	using namespace std;
	using ll=long long int;


	void solve(){
		ll a,b,c;
		cin>>a>>b>>c;
		if (c<=a){
			cout<<-1<<" "<<b<<endl;
		}
		else{
			if (c/b>=a){
				cout<<1<<" "<<-1<<endl;
			}
			else{
				cout<<1<<" "<<b<<endl;
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