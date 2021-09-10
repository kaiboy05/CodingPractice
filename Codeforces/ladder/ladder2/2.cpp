#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector< vector<bool> > cells(4, vector<bool>(4, false));
	string s;
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			char c; cin >> c;
			cells[i][j] = (c == '#');
		}
	}

	for(int i = 0; i < cells.size() - 1; i++) {
		for(int j = 0; j < cells[0].size() - 1; j++) {
			int sum = 0;
			sum += cells[i][j] ? 1 : 0;
			sum += cells[i+1][j] ? 1 : 0;
			sum += cells[i][j+1] ? 1 : 0;
			sum += cells[i+1][j+1] ? 1 : 0;

			if(sum != 2){
				cout << "YES" << endl;
				return 0;
			}
		}
	}

	cout << "NO" << endl;

	return 0;
}
