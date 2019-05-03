#include<bits/stdc++.h>

using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int> > Q;
    int a[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    for (int i = 0; i < 10; i++) {
        Q.push(i);
    }

    while (not Q.empty()) {
        cout << Q.top() << endl;
        Q.pop();
    }

    return 0;
}
