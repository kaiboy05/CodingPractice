#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <map>

#define ll long long

using namespace std;

int main() {

    int n,t,k,d; cin >> n >> t >> k >> d;
    if(n <= k) {
        cout << "NO" << endl;
    } else {
        int t1 = n / k * t + (n % k ? t : 0);
        if(t1 - t <= d) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
       
    }


	return 0;
}
