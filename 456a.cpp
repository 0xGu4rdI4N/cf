#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;


void solve(){
	int n;
	cin>>n;
	map<int,int>m;
	for(int i=0;i<n;++i){
		int a,b;
		cin>>a>>b;
		m[a]=b;
	}
	// cout<<"ok"<<endl;
	
	auto it = m.begin();
    auto next_it = it;
    ++next_it; // Move next_it to the second element

    while (next_it != m.end()) {
        if (next_it->second < it->second) {
            cout << "Happy Alex" << endl;
            return;
        }
        ++it;
        ++next_it;
    }

	cout<<"Poor Alex"<<endl;
}	
	




int main(){
	// int t;
	// cin>>t;
	// while (t--){
		solve();
	// }

}