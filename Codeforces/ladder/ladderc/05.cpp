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
	string s; cin >> s;
	vector<int> v(1, 0);
	for(int i = 1; i <= s.size(); i++) {
		if(s[i-1] == 'R')
			v.push_back(i);
	}
	v.push_back(s.size()+1);

	int result = 0;
	for(int i = 1; i < v.size(); i++) {
		result = max(result, v[i] - v[i-1]);
	}

	cout << result << endl;
}

int main() {
	int t; cin >> t;
	while(t > 0) {
		solve();
		t--;
	}

	return 0;
}
