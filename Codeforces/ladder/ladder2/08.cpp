#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <map>

#define ll long long

using namespace std;

int main() {
    
    int n, m; cin >> n >> m;
    vector<int> votes(n, 0);

    for(int i = 0; i < m; i++) {
        int maxj = -1;
        int maxjVote = -1;
        for(int j = 0; j < n; j++) {
            int x; cin >> x;
            if(x > maxjVote){
                maxj = j;
                maxjVote = x;
            }
        }

        votes[maxj]++;
    }

    cout << max_element(votes.begin(), votes.end()) - votes.begin() + 1 << endl;

	return 0;
}
