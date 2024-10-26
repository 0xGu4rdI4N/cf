#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;


void solve(){
    ll n , i , j , k,v ;
    cin>>n>>k;
    for(i=2; i<=n; i++){
        if(n%i==0){
            v=i;
            break;
        }
    }
    k--;
    n+=v;
    n+=(2*k);
    cout<<n<<endl;
          
}
int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}	
}