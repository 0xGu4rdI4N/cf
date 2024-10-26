#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;


void solve(){
	int a1,a2,k1,k2,n;
	cin>>a1>>a2>>k1>>k2>>n;
	int min,max=0;
	if (k1<=k2){
		if(n/k1>=a1){
			max+=a1;
			int b=n-a1*k1;
			if(b/k2>=a2)max+=a2;
			else max+=b/k2;
			}
		if (n/a2<k2) min=0;
		if (n/k1<a1)max= n/k1;
		if (n/a2>=k2){
			int c=a1*(k1-1)+a2*(k2-1);
			int d = n-c;
			if (d<=0)min =0;
			else{
				if(d>a1+a2)min=a1+a2;
				else min=d;
		
		}
		}
		cout<<min<<" "<<max<<endl;
	}
	else{
		int t1=a1;
		int t2=k1;
		a1=a2;
		k1=k2;
		a2=t1;
		k2=t2;
		if(n/k1>=a1){
			max+=a1;
			int b=n-a1*k1;
			if(b/k2>=a2)max+=a2;
			else max+=b/k2;
			}
		if (n/a2<k2) min=0;
		if (n/k1<a1)max= n/k1;
		if (n/a2>=k2){
			int c=a1*(k1-1)+a2*(k2-1);
			int d = n-c;
			if (d<=0)min =0;
			else{
				if(d>a1+a2)min=a1+a2;
				else min=d;
		
		}
		}
		cout<<min<<" "<<max<<endl;
	}

}	
	




int main(){
	// int t;
	// cin>>t;
	// while (t--){
		solve();
	// }

}