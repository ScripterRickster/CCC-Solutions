#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    vector<ll> x(N),w(N),d(N);
    ll min_x = LLONG_MAX,max_x = LLONG_MIN;

    for(int i=0;i<N;i++){
        cin >> x[i] >> w[i] >> d[i];
        min_x = min(min_x, x[i]);
        max_x = max(max_x, x[i]);
    }

    ll lo = min_x,hi = max_x;

    while(hi-lo>2){
        ll mid1 = lo+(hi-lo)/3;
        ll mid2 = hi-(hi-lo)/3;

        ll cost1 = 0,cost2 = 0;

        for(int i=0;i<N;i++){
            cost1 += max((ll)0,abs(mid1-x[i])-d[i])*w[i];
            cost2 += max((ll)0,abs(mid2 - x[i]) -d[i])*w[i];
        }

        if(cost1 < cost2){
            hi = mid2;
        }else{
            lo = mid1;
        }
    }

    ll b_cost = LLONG_MAX;
    for(ll X=lo;X<=hi;X++){
        ll cost = 0;
        for(int i=0;i<N;i++){
            cost += max((ll)0,abs(X - x[i])-d[i])*w[i];
        }
        b_cost = min(b_cost, cost);
    }

    cout << b_cost << "\n";
}
