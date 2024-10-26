#include <bits/stdc++.h>
using namespace std;

void solve(){
	int c=0;
	int n;
	cin>>n;
	string s;
	cin>>s;
	int l=s.length();
	for (int i=l-1;i>=0;i--){
		if (s[i]==')'){
			c=c+1 ;
		}
		else{
			break;
		}
	}
	int b=l-c;
	if (c>b){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}

int main(){
	int t;
	cin>>t;	
	// cout<<t<<endl;
	while (t--){
	solve();	
	}
}