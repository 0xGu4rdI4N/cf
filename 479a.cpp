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
	int a,b,c;
	cin>>a;
	cin>>b;
	cin>>c;
	int k1=a+b+c;
	int k2=a+(b*c);
	int k3=a*b*c;
	int k4=(a+b)*c;
	int k5=a*(b+c);
	int k6=a*b+c;
	int m=max({k1,k2,k3,k4,k5,k6});
	cout<<m<<endl;
}