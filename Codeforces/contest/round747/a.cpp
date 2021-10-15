#include <iostream>
#include <vector>
#include <set>
#include <map>

#define ll long long

using namespace std;

int main() {
	int t; cin >> t;
	while(t > 0) {
		
		int n; cin >> n;
		char c; cin >> c;
		string s; cin >> s;
		
		set<int> st;
		
		vector<int> notDiv;

		for(int i = 0; i < n; i++) {
			if(s[i] != c)
				st.insert(i+1);

			if(n % (i+1) > 0) {
				notDiv.push_back(i+1);
			}
		}

		if(st.size() == 0) {
			cout << 0 << endl;
		} else if(s[n - 1] == c) {
			cout << 1 << " " << n << endl;
		} else {
			bool found = true;
			int nD = -1;
			for(int i = notDiv.size() - 1; i >= 0; i--) {
				int d = notDiv[i];
				found = true;
				for(int x : st) {
					if(x % d == 0) {
						found = false;
						break;
					}
				}

				if(found) {
					nD = d;
					break;
				}
			}

			if(found) {
				cout << 1 << " " << nD << endl;
			} else {
				cout << 2 << " " << notDiv[0] << " " << n << endl;
			}
		}


		t--;
	}

	return 0;
}
