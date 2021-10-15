#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <map>
#include <queue>
#include <set>
 
#define ll long long
 
using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> choc(n, 0);
	for(int i = 0; i < n; i++) {
		cin >> choc[i];
	}

	vector<int> prizes(6, 0);
	for(int i = 1; i < 6; i++) {
		cin >> prizes[i];
	}
	
	int points = 0;
	vector<ll> result(5, 0);
	for(int i = 0; i < n; i++) {
		points += choc[i];
		auto toget = --upper_bound(prizes.begin(), prizes.end(), points);
		while(toget != prizes.begin()) {
			result[toget - prizes.begin() - 1] += points / *toget;
			points = points % *toget;

			toget = --upper_bound(prizes.begin(), prizes.end(), points);
		}
	}

	for(auto i : result) {
		cout << i << " ";
	}
	cout << endl;

	cout << points << endl;

}

int main() {
	int t; t=1;
	while(t > 0) {
		solve();
		t--;
	}

	return 0;
}
