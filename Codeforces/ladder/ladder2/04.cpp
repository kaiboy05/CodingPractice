#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

using namespace std;

int main() {
	int p; cin >> p;
	vector< vector<int> > v(4, vector<int>(3, -1));
	for(int i = 0; i <4; i++) {
		int a, b, c, d; cin >> a >> b >> c >> d;
		v[i][0] = min(a, b);
		v[i][1] = min(c, d);
		v[i][2] = v[i][0] + v[i][1];
	}

	for(int i = 0; i < 4; i++) {
		if(v[i][2] <= p) {
			cout << i+1 << " ";
			cout << v[i][0] << " ";
			cout << p - v[i][0] << endl;
			return 0;
		}
	}

	cout << -1 << endl;

	return 0;
}
