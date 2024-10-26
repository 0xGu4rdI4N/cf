#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll=long long int;

bool is_prime(int num) {
  if (num <= 1) {
    return false; // 0 and 1 are not prime
  }
  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) {
      return false; // Not prime if divisible by another number
    }
  }
  return true; // Prime if not divisible by any number from 2 to its square root
}

void solve(){
	int d;
	cin>>d;
	int a =d;
	while (!is_prime(1+a)){
		a++;
	}
	int b=1+a;
	int e=b+d;
	while (!is_prime(e)){
		e++;
	}
	// int c=1+2*a;
	cout<<b*e<<endl;
}
	




int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}
}