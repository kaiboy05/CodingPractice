#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <map>

using namespace std;

int main() {

    map<int, int> mp;
    for(int i = 0; i < 6; i++) {
        int c; cin >> c;
        mp[c]++;
    }
    
    auto first = mp.begin();
    if(mp.size() == 1) {
        cout << "Elephant" << endl;
    } else if(mp.size() == 2) {
        auto second = next(first);
        if(first->second == 4 || second->second == 4) {
            cout << "Elephant" << endl;
        } else if(first->second == 5 || second->second == 5) {
            cout << "Bear" << endl;
        } else {
            cout << "Alien" << endl;
        }
    } else if(mp.size() == 3) {
        auto second = next(first);
        auto third = next(second);

        if(first->second == 4 || second->second == 4 || third->second == 4){
            cout << "Bear" << endl;
        } else {
            cout << "Alien" << endl;
        }
    } else {
        cout << "Alien" << endl;
    }

	return 0;
}
