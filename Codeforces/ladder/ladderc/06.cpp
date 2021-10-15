#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <map>
#include <queue>
#include <set>
 
#define ll long long
 
using namespace std;

int pow10(int a) {
	if(a == 0)
		return 1;
	else if(a & 1)
		return pow10(a-1) * 10;
	else
		return pow10(a/2) * pow10(a/2);
}

int toDec(int x) {
	int result = 0;
	for(int i = 0; i < 10; i++)	{
		if(x & (1 << i)) {
			result += pow10(i);
		}
	}

	return result;
}

void solve() {
	int n; cin >> n;
	int i = 1;
	int result = 0;
	while(toDec(i++) <= n)
		result++;

	cout << result << endl;
}

int main() {
	int t; t=1;
	while(t > 0) {
		solve();
		t--;
	}

	return 0;
}
