#include <iostream>
#include <vector>
#include <set>
#include <map>

#define ll long long
#define MOD 1000000007

using namespace std;

ll pow(ll a, ll b) {
	if(b == 0)
		return 1;
	else if(b % 2 == 0) {
		return pow(a, b/2) * pow(a, b/2) % MOD;
	} else {
		return a * pow(a, b-1) % MOD;
	}
}

int main() {
	int t; cin >> t;
	while(t > 0) {
		ll n, k; cin >> n >> k;
		
		ll result = 0;
		for(int i = 0; i < 31; i++) {
			if(k & (1 << i)) {
				result = result + pow(n, i);
				result %= MOD;
			}
		}

		cout << result << endl;
	
		t--;
	}

	return 0;
}
