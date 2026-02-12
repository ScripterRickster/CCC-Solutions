#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 0;
    int q,n;
    cin >> q >> n;
    vector<ll> dmoj(n),peg(n);
    
    for(int i=0;i<n;i++){
        cin >> dmoj[i];
    }
    for(int i=0;i<n;i++){
        cin >> peg[i];
    }
    
    sort(dmoj.begin(),dmoj.end());
    
    if(q==1){
        sort(peg.begin(),peg.end());
    }else{
        sort(peg.begin(),peg.end(),greater<ll>());
    }
    
    for(int i=0;i<n;i++){
        t += max(dmoj[i],peg[i]);
    }
    
    cout << t << endl;
}
