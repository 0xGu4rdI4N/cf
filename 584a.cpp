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
	long int x,y,n,i,t;
    while(cin>>n>>t){
        if(n==1&&t==10)
            cout<<"-1\n";
        else if(n>=2&&t==10)
        {
            for(i=1;i<n;i++){
                cout<<"1";
            }
            cout<<"0\n";
        }
        else
        {
            for(i=1;i<=n;i++){
                cout<<t;
            }
            cout<<endl;
        }
    }

}