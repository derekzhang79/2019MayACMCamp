//
// Created by jal on 2019-05-03.
//

bool dfs(int x) {
    int i, y;
    for (i = head[x]; i; i = next[i])
        if (!v[y = ver[i]]) {
            v[y] = 1;
            if (!fa[y] || dfs(fa[y])) {
                fa[y] = x;
                return 1;
            }
        }
    return 0;
}

int main() {
    for (int i = 1; i <= n; i++) {
        memset(v, 0, sizeof(v));
        if (dfs(i)) ans++;
    }
}