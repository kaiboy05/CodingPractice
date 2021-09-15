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
    
    int n; cin >> n;
    
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        mp[x]++;
    }

    map<int, int> mp1 = mp;
    for(int i = 0; i < n-1; i++) {
        int x; cin >> x;
        mp1[x]--;
        if(!mp1[x])
            mp1.erase(mp1.find(x));
    }
    int e = mp1.begin()->first;
    cout << e << endl;

    mp[e]--;
    if(!mp[e])
        mp.erase(mp.find(e));

    for(int i = 0; i < n-2; i++) {
        int x; cin >> x;
        mp[x]--;
        if(!mp[x])
            mp.erase(mp.find(x));
    }

    cout << mp.begin()->first << endl;
    

	return 0;
}
