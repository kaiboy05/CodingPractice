#include <iostream>
#include <vector>

using namespace std;

// tests: 
//	abcdegh => true
//	aanwqqhwejqwh => false
//	ABCDE => true
bool isUnique(string s) {
	vector<bool> used(1 << (sizeof(char) * 8), false);
	for(int i = 0; i < s.size(); i++) {
		if(used[s[i]]) {
			return false;
		} else {
			used[s[i]] = true;
		}
	}

	return true;
}

int main() {
	cout << isUnique("abcdefgh") << endl;
	cout << isUnique("asdnasndlasnkd") << endl;
	cout << isUnique("ABCDEF") << endl;

	return 0;
}
