#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main() {
	int n; cin >> n;
	vector<int> notes(n, -1);
	for(int i = 0; i < n; i++) {
		cin >> notes[i];
	}

	array<int, 3> hand = {0, 0, 0};
	for(int i = 0; i < n; i++) {
		if(notes[i] == 25){
			hand[0]++;
		} else if(notes[i] == 50) {
			if(hand[0] <= 0){
				cout << "NO" << endl;
				return 0;
			} else {
				hand[0]--;
			}
			hand[1]++;
		} else if(notes[i] == 100) {
			if(hand[0] <= 0) {
				cout << "NO" << endl;
				return 0;
			} else if(hand[1] <= 0) {
				if(hand[0] < 3) {
					cout << "NO" << endl;
					return 0;
				} else {
					hand[0] -= 3;
				}
			} else {
				hand[1]--;
				hand[0]--;
			}
			hand[2]++;
		}
	}

	cout << "YES" << endl;

	return 0;
}
