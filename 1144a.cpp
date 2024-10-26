#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	string s;
	cin>>s;
	sort(s.begin(),s.end());
	for(int i=1;i<s.length();++i){
	if (s[i]-s[i-1]!=1){
		n=0;
		break;
		}
	else{
		n=1;
	}

	}
	if (n){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}

int main(){
	int t;
	cin>>t;	
	while (t--){
	solve();	
	}
}