//
// Created by jal on 2019-05-04.
//

#include<bits/stdc++.h>
using namespace std;
const int N = 1000001;
int a[N];
int tree[4*N];
int n, m;

void build(int root, int l, int r){
    if(l == r){
        tree[root] = a[l];
        return;
    }
    int mid = (l+r)>>1;
    build(root<<1, l, mid);
    build(root<<1|1, mid+1, r);
    tree[root] = tree[root<<1] + tree[root<<1|1];
}
int query(int root, int l, int r, int ql, int qr){
    if(ql > r || qr < l)return 0;
    if(ql <= l && qr >= r){
        return tree[root];
    }
    int mid = (l + r) >> 1;
    return query(root<<1, l, mid, ql, qr) + query(root<<1|1, mid+1, r, ql, qr);
}
int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    build(1, 1, n);
    while(m--){
        int l, r;
        cin >> l >> r;
        cout << query(1, 1, n, l, r) << endl;
    }
}