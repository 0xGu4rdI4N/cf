#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;


void solve(){
	int n,m;
	cin>>n;
	vector<int>r(n);
	
	vector<int>c(n);

	int sum=0;
	for (int i=0;i<n;++i){
		cin>>r[i];
		sum+=r[i];
		c[i]=sum;
	}
	int s=0;
	cin>>m;
	vector<int>b(m);
	vector<int>d(m);
	for (int i=0;i<m;++i){
		cin>>b[i];
		s+=b[i];
		d[i]=s;
	}
	auto ic=max_element(c.begin(),c.end());
	auto id=max_element(d.begin(),d.end());
	// cout<<*ic<<endl;
	// cout<<*id<<endl;
	if (*ic>0 && *id>0){
		cout<<*ic+*id<<endl;
	}
	else{
		cout<<max(0,max(*ic,*id))<<endl;
	}

}
	




int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}

}