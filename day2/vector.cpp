#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> a, b(10, 0);
    vector<int> c(b.begin(), b.begin() + 5);


    ///array
    for (int i = 0; i < b.size(); i++){
        cout << b[i] << " ";
    }
    cout << endl;


    ///traditional
    for (vector<int>::iterator it = c.begin(); it != c.end(); ++it) {
        ++*it;
        cout << *it << " ";
    }
    cout << endl;

    ///C++11 Style; Write /reference;
    for (auto &e:c)cin >> e;

    ///C++11 Style ReadOnly;
    for (auto e:c){
        cout << e << " ";
    }
    cout << endl;


    return 0;

}
