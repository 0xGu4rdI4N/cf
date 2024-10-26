#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;


void solve(){
	int x,y;
	cin>>x>>y;
	int s;
	int a;
	if (y%2==0){
		a=y/2;
	}
	else{
		a=y/2+1;
	}
	int b=15*a-4*y ;
	if (b>=x){
		s=a;
	}
	else {
		if ((x-b)%15==0){
			s=a+(x-b)/15;
		}
		else{
			s=a+(x-b)/15+1;

		}
	}
	cout<<s<<endl;
}


	




int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}	
}