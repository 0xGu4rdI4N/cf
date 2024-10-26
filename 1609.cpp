#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;

// int T[27];

void solve(){
	int n;
	cin>>n;
	ll a[n];
	for (int i=0;i<n;++i){
		cin>>a[i];
	}
	sort(a,a+n);
	ll max;
	max=a[n-1];
	for (int i=0;i<n-1;++i){
		bool c=true;
		while (c){
			if (a[i]%2==0){
			a[i]=a[i]/2;
			a[n-1]=a[n-1]*2;
			}
			else {
			c=false;
			}
		}
		
	}
// for (int i=0;i<n;++i){
// 	cout<<a[i]<<" ";
// }
sort(a,a+n);

ll sum=0;
for (int j=0;j<n;++j){
	sum=sum+a[j];
}
if (n>1){
while (true){
	if (a[n-1]%2==0){
	a[n-1]=a[n-1]/2;
	a[n-2]=a[n-2]*2;
}
else{break;}
}
}
ll sum_=0;
for (int j=0;j<n;++j){
	sum_=sum_+a[j];
}

if (sum>sum_){cout<<sum<<endl;}
else{cout<<sum_<<endl;}
}

int main(){
	int t;
	cin>>t;
	while (t--){
		solve();

	}

}