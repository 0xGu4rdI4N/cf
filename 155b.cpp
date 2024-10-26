#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;

const ll N = 1'000'000'000'000L;

void solve(){
	int n;
	cin>>n;
	vector<pair<int,int>>v(n);
	for(auto &[x,y]:v){
		cin>>x>>y;
	}
	int ct=1;
	int s=0;
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	// for(auto)
	unordered_set<int>a;
	while (ct!=0 || a.size()!=n){
		int z=0;
		int m=0;
		for (int i=0;i<n;++i){
			int x=v[i].first;
			int y=v[i].second;
			
			if (a.count(i)==0){

				if (ct+y-1>0 ){
				s+=x;
				ct+=y-1;
				a.insert(i);
				// z--;
				break;
				}
				else{
					m=max(m,x);
					z++;
					if(a.size()+z==n){
						s+=m;
						cout<<s<<endl;
						return;
					}
				}
			}
			
		}
	}
	cout<<s<<endl;
}	
	



int main(){
	// int t;
	// cin>>t;
	// while (t--){
		solve();
	// }

}