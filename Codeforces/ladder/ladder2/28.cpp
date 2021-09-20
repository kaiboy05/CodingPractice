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
	int n, k; cin >> n >> k;
	vector<int> v(101, 0);
	for(int i = 0; i < n; i++) {
		string s; cin >> s;
		v[s.size()]++;
	}
	string pwd; cin >> pwd;
	
	int result = 0;
	int tried = 0;
	for(int i = 1; i < pwd.size(); i++) {
		if(tried + v[i] < k) {
			result += v[i];
			tried += v[i];
			v[i] = 0;
		} else {
			result += k - tried;
			v[i] -= k - tried;
			result += 5;
			result += v[i] / k * (k + 5);
			v[i] %= k;
			tried = v[i];
			result += v[i];
			v[i] = 0;
		}
	}
	cout << result + 1 << " ";
	int i = pwd.size();
	if(tried + v[i] < k) {
		result += v[i];
		tried += v[i];
		v[i] = 0;
	} else {
		result += k - tried;
		v[i] -= k - tried;
		result += 5;
		result += v[i] / k * (k + 5);
		if(v[i] % k == 0){
			result -= 5;
		} else {
			v[i] %= k;
			tried = v[i];
			result += v[i];
			v[i] = 0;
		}
	}
	cout << result << endl;

	return 0;
}
