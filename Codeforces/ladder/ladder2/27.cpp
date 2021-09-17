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
	vector<int> v(n, 0);
	for(int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	
	int q; cin >> q;
	for(int i = 0; i < q; i++) {
		int m; cin >> m;
		auto up = upper_bound(v.begin(), v.end(), m);
		cout << up - v.begin() << endl;
	}

	return 0;
}
