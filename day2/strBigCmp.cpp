#include<bits/stdc++.h>

using namespace std;

string int2str(int x) {
    string s;
    while (x > 0) {
        s.push_back('0' + x % 10);
        x /= 10;
    }
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    cout << int2str(12345) << endl;
    int x, y;
    cin >> x >> y;
    //xy yx
    string sx = int2str(x);
    string sy = int2str(y);
    if (sx + sy < sy + sx) {
        cout << sy + sx << endl;
    } else {
        cout << sx + sy << endl;
    }
    ///111111111111111111111
    ///999999999999999
    return 0;
}
