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
	int n;
	cin>>n;
	int m[n][n];
	for (int i = 0; i < n; ++i) {
    	for (int j = 0; j < n; ++j) {
      		cin >> m[i][j];
    }
  }
  int c=0;
  int a=0;
  int b[n];
for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (m[i][j]==1||m[i][j]==3){
      	a=0;
      	break;
      }
      else{
      	a=1;
      }

    }
    if (a==1){
    	b[c]=i+1;
    	c++;
    }
  }
cout<<c<<endl;
for (int i = 0; i < c; ++i) {
	cout<<b[i]<<" ";
}
}