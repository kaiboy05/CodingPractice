#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <map>
#include <queue>
#include <set>
 
#define ll long long
 
using namespace std;

int main() {    

	int n; cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++) {
		cin >> v[i];
	}
	
	int maxE = -1;
	vector<int> r(n);
	for(int i = n-1; i >= 0; i--) {
		r[i] = max(0, maxE + 1 - v[i]);
		maxE = max(maxE, v[i]);
	}

	for(int x : r) {
		cout << x << " ";
	}
	cout << endl;

	return 0;
}
