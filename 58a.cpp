#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;

// int T[27];

void solve(){
	string s;
	cin>>s;
	int a[5]={0,-1,-1,-1,-1};
	string h="hello";
	int j=0;
	for (int i=0;i<5;++i){
		while (j<s.length()){
			if (s[j]==h[i]){a[i]=j;++j;break;}
			else {++j;}
		}
	}

	int t[5];

  for (int i = 0; i < 5; ++i) {
    t[i] = a[i];
  }

  sort(a,a+5);

int e=1;
for (int i=0;i<5;++i){
	if (t[i]==a[i]){
		e=1;
	}
	else {
		e=0;
		break;
	}
}
 if (e==1){
 	cout<<"YES"<<endl;
 }
 else{
 	cout<<"NO"<<endl;
 }
	
}

int main(){
	solve();

}