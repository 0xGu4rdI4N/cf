#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
using ll=long long int;




void solve(){
	ll n;
	cin>>n;
	vector<ll>a(n);
	ll c=0;
	for(auto &x:a){
		cin>>x;
		if (x%2==0)c++;
	}
	if (c==n | c==0)cout<<0<<endl;
	else{
		ll m=0;
		ll b=0;
		ll e=0;
		ll me=0;
		sort(a.begin(),a.end());
		// reverse(a.begin(),a.end());
		for(auto &x:a){
			if(x%2!=0)m=max(m,x);
			else me=max(me,x);
		}
		// for(auto &x:a){
		// 	if(x==m)e++;
		// }
		// int f=m;
		// cout<<e<<endl;
		// cout<<m<<endl;
		// for(auto &x:a){
		// 	// cout<<x<<endl;
		// 	// cout<<m<<endl;
		// 	if(x%2!=0){
		// 		if(x==f){
		// 			if(e>1){
		// 				m+=x;
		// 				e--;
		// 			}
		// 		}
		// 		else m+=x;
		// 	}
		// }
		for(auto &x:a){
			if(x%2==0){
				// cout<<m<<endl;
				
				if(x<m){
					b++;
					m+=x;
				}
				else{
					b+=2;
					m+=me;
				}
			}
			
		}

		// cout<<m<<endl;
		cout<<b<<endl;
	}
	}



int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}
	
}