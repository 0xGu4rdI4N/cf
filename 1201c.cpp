#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;


const ll N = 1'000'000'000'000L;

void solve(){
ll n, k;
cin >> n >> k;
vector<ll> a(n);
for (ll i = 0; i < n; i++) {
    cin >> a[i];
}
sort(a.begin(), a.end());
ll l = 1, r = 2e9 + 1; 
while (r - l > 1) {
    ll mid = (l + r) / 2;
    ll cnt = 0; 
    for (ll i = n / 2; i < n; i++) { 
        if (a[i] < mid) {
            cnt += mid - a[i];
        }
    }
    if (cnt <= k) {
        l = mid;
    } else {
        r = mid;
    }
}
cout << l << endl;
}	
	



int main(){
	// int t;
	// cin>>t;
	// while (t--){
		solve();
	// }

}