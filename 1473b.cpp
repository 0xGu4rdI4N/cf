#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;



string check(string s, int k)
{
     string r="";
     while(k--)
     {
          r+=s;
     }
     
     return r;
}

void solve(){
	string s,t;
	cin>>s;
	cin>>t;
	ll g= __gcd(s.length(),t.length());
	if(check(s,t.length()/g)== check(t,s.length()/g))
	cout<<check(s,t.length()/g)<<endl;
	else
	cout<<-1<<endl;
	
}
	




int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}

}