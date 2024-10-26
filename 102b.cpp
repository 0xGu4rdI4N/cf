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
	string n;
	cin>>n;
	int c=0;
	// cout<<n.size()<<endl;
	// cout<<n<<endl;
	// int sum=0;
	// for(int i=0;i<n.size();++i){
	// 		cout<<stoi(n)<<endl;
	// 	} 
	// 	cout<<sum;
	while (n.size()!=1){
		int sum=0;
		for(int i=0;i<n.size();++i){
			string k(1,n[i]);
			sum+=stoi(k);
		}
		n=to_string(sum);
		c++;
	}
	cout<<c<<endl;
}