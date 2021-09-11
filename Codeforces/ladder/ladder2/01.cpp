#include <iostream>

using namespace std;

int main() {
	string s; cin >> s;
	bool found = false;
	for(int i = 0; i < s.size() - 1; i++) {
		if(!found && s[i] == '0')
			found = true;
		else
			cout << s[i];
	}

	if(found)
		cout << s[s.size() - 1];
	cout << endl;

	return 0;
}
