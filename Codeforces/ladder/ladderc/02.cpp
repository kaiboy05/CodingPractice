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

    int n, m;
    cin >> n >> m;

    vector<ll> prefixSum(n+1, 0);
    for(int i = 1; i <= n; i++) {
        ll a; cin >> a;
        prefixSum[i] = prefixSum[i-1] + a;
    }
    
    int start = 0;
    for(int i = 0; i < m; i++) {
        ll b; cin >> b;
        while(prefixSum[start+1] < b) {
            start++;
        }

        cout << start+1 << " " << b - prefixSum[start] << endl;
    }

	return 0;
}
