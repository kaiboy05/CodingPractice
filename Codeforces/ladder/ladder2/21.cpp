#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <map>
#include <queue>
 
#define ll long long
 
using namespace std;
 
int main() {    
    
    int n; cin >> n;

    int result = 0;
    int sum = 0;
    int last = 0;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        sum += last - x;
        
        if(sum < 0) {
            result -= sum;
            sum = 0;
        }

        last = x;
    }

    cout << result << endl;

	return 0;
}
