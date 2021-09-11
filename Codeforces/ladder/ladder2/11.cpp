#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <map>

#define ll long long

using namespace std;

int main() {

    int n; cin >> n;
    if(n == 1){
        int a; cin >> a;
        if(a == 15)
            cout << "DOWN" << endl;
        else if(a == 0)
            cout << "UP" << endl;
        else
            cout << -1 << endl;
        return 0;
    }

    for(int i = 0; i < n-2; i++) {
        int x;
        cin >> x;
    }

    int a, b;
    cin >> a >> b;

    if(a < b) {
        if(b == 15) {
            cout << "DOWN" << endl;
        } else {
            cout << "UP" << endl;
        }
    } else {
        if(b == 0) {
            cout << "UP" << endl;
        } else {
            cout << "DOWN" << endl;
        }
    }

	return 0;
}
