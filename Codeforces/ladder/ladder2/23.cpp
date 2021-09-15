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
	
	string s; cin >> s;
	int result = (1 << s.size()) - 2;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == '7'){
			result += (1 << (s.size() - i - 1));
		}
	}
	result++;

	cout << result << endl;

	return 0;
}
