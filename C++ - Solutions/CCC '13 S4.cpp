#include <bits/stdc++.h>
using namespace std;

const int MAXN = 10000005;
vector<int> adj[MAXN];

bool dfs(int current, int target, vector<bool>& visited) {
    if (current == target) return true;
    visited[current] = true;
    for (int neighbor : adj[current]) {
        if (!visited[neighbor]) {
            if (dfs(neighbor, target, visited)) return true;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;

    for (int i=0; i<m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }

    int q1, q2;
    cin >> q1 >> q2;

    vector<bool> visited1(n+1, false);
    if (dfs(q1, q2, visited1)) {
        cout << "yes" << endl;
    } else {
        vector<bool> visited2(n+1, false);
        if (dfs(q2, q1, visited2)) {
            cout << "no" << endl;
        } else {
            cout << "unknown" << endl;
        }
    }

}
