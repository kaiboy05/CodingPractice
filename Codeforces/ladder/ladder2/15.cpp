#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <map>

#define ll long long

using namespace std;

int cost(int x, int t) {
    if(abs(x - t) <= 1) {
        return 0;
    }

    return min(abs(t+1 - x), abs(t-1 - x));
}

int totalCost(vector<int> &v, int t) {
    int result = 0;
    for(int x : v) {
        result += cost(x, t);
    }

    return result;
}

int main() {
    
    int n;
    cin >> n;
    
    int s = 0;
    vector<int> v(n, 0);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        s += v[i];
    }

    int t = s / n;
    int cost = totalCost(v, t);
   
    t = max(1, t);

    int tmp = totalCost(v, t+1);
    while(tmp <= cost) {
        cost = tmp;
        t++;
        tmp = totalCost(v, t+1);
    }
    
    tmp = totalCost(v, t-1);
    while(t-1 > 0 && tmp <= cost) {
        cost = tmp;
        t--;
        tmp = totalCost(v, t-1);
    }

    cout << t << " " << cost << endl;

	return 0;
}
