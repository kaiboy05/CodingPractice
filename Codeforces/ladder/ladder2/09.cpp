#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <map>

#define ll long long

using namespace std;

void maxSwp(int &a, int &b) {
    if(a < b) {
        int tmp = b;
        b = a;
        a = tmp;
    }
}

int main() {
    
    int a, b; cin >> a >> b;
    maxSwp(a, b);

    int result = 0;
    while(a > 1 && b > 0) {
        if(a & 1) {
            result += a / 2;
            b += a / 2;
            a = 1;

            maxSwp(a, b);
        } else {
            if(a == 2) {
                result++;
                a = 0;
                b++;
            } else {
                result += a / 2 - 1;
                b += a / 2 - 1;
                a = 2;

                maxSwp(a, b);
            }
        }
    }

    cout << result << endl;
    


	return 0;
}
