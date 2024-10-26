#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
using ll=long long int;




void solve(){
	int p1,p2,p3;
	cin>>p1>>p2>>p3;
	if((p1+p2+p3)%2!=0)cout<<-1<<endl;
	else{
		int c=0;
		while(p3!=p2 && p1!=0){
			p3--;
			p1--;
			c++;
		}
		if(p1==p2 && p2==p3)cout<<3*p1/2+c<<endl;
		else cout<<p1+(p2-p1/2)+c<<endl;
	}
}	
	



int main(){
	int t;
	cin>>t;
	while (t--){

		solve();
	}

}       