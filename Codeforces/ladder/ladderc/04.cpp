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
	ll n; cin >> n;
	ll result = (1LL << (n+1)) - 2;
	cout << result << endl;

	return 0;
}
