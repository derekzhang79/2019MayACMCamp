//
// Created by jal on 2019-05-02.
//

void tarjan(int x) {
    dfn[x] = low[x] = ++num;
    s[++p] = x, v[x] = 1;
    for (int i = head[x]; i; i = next[i])
        if (!dfn[ver[i]]) {
            tarjan(ver[i]);
            low[x] = min(low[x], low[ver[i]]);
        } else if (v[ver[i]])
            low[x] = min(low[x], dfn[ver[i]]);
    if (low[x] == dfn[x]) {
        int y;
        ++t;
        do {
            y = s[p--], v[y] = 0;
            c[y] = t;
        }
        while (y != x);
    }
}