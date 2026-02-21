#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, l, q;
    cin >> n >> l >> q;

    vector<ll> diff(n + 2, 0); 

    for (int i = 0; i < l; i++) {
        ll pi, si;
        cin >> pi >> si;

        ll li = max(0LL, pi - si);
        ll ri = min((ll)n, pi + si);

        diff[li]++;
        if (ri + 1 <= n) diff[ri + 1]--;
    }

    vector<ll> p(n + 1, 0);
    ll running = 0;
    for (int i = 0; i <= n; i++) {
        running += diff[i];
        p[i] = running;
    }

    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        cout << (p[x] > 0 ? 'Y' : 'N') << '\n';
    }
}
