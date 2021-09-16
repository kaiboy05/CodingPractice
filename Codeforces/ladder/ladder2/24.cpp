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
	
	string s; cin >> s;
	string t; cin >> t;
	int dist = 0;
	vector<int> d;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] != t[i])
			d.push_back(i);	
	}

	if(d.size() & 1) {
		cout << "impossible" << endl;
	} else {
		string r(s);
		for(int i = 0; i < d.size() / 2; i++) {
			r[d[i]] = r[d[i]] == '0' ? '1' : '0';
		}
		cout << r << endl;
	}

	return 0;
}
