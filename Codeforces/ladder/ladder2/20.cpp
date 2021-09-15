#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <map>
#include <queue>
 
#define ll long long
 
using namespace std;
 
int main() {    
 
    int n, k; cin >> n >> k;
    queue<int> q;
    int sum = 0;
 
    int i = 0;
    while(i < k) {
        int x; cin >> x;
        q.push(x);
        sum += x;
        i++;
    }
    
    int result = i-k+1;
    int minS = sum;
    while(i < n) {
        int x; cin >> x;
        sum = sum - q.front() + x;
        q.pop(); q.push(x);
        i++;
        if(sum < minS) {
            result = i-k+1;
            minS = sum;
        }
    }
 
    cout << result << endl;
 
	return 0;
}
