#include <iostream>
#include <vector>
#include <map>

using namespace std;

// tests: 
//	apple, ppale => true
//	banana, bbanana => false
//	easym, mesay => true
bool isPermutation(string a, string b) {
	
	if(a.size() != b.size())
		return false;

	map<char, int> charCount;
	for(int i = 0; i < a.size(); i++) {
		charCount[a[i]]++;
		charCount[b[i]]--;
	}

	for(auto charFreq : charCount) {
		if(charFreq.second != 0) {
			return false;
		}
	}

	return true;
}

int main() {
	cout << isPermutation("apple", "ppale") << endl;
	cout << isPermutation("banana", "bbanana") << endl;
	cout << isPermutation("easym", "mesay") << endl;

	return 0;
}
