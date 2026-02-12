#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    double a;
    cin >> n;
    vector<double> hs(n+1);
    vector<double> wds(n);
    for(int i=0;i<n+1;i++){
        cin >> hs[i];
    }
    for(int i=0;i<n;i++){
        cin >> wds[i];
    }

    for(int i=0;i<n;i++){
        a += (hs[i] + hs[i+1]) * wds[i]/2;
    }
    cout << fixed << a << endl;




}
