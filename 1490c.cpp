#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;

const ll N = 1'000'000'000'000L;

unordered_set<ll> cubes;

void precalc() {
  for (ll i = 1; i * i * i <= N; i++) {
    cubes.insert(i * i * i);
  }
}
void solve(){
	ll x;
	cin>>x;
	for (ll i = 1; i * i * i <= x; i++) {
    if (cubes.count(x - i * i * i)) {
      cout << "YES\n";
      return;
    }
  }
  cout << "NO\n";
}	
	



int main(){
	int t;
	cin>>t;
	precalc();
	while (t--){
		solve();
	}

}