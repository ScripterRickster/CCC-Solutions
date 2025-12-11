#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll cTotal(string l){
    ll total = 0;
    string num = "";

    for(ll i=1;i<l.length();i++){
        if(isdigit(l[i])){
            num = num+l[i];
        }else{
            total += stoll(num);
            num = "";
        }
    }
    total += stoll(num);
    return total;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string l;
    ll c;

    cin >> l >> c;

    ll tl = cTotal(l);
    ll idx = (c%tl)+1;
    if (idx>tl) idx=1;

    char lastLetter = l[0]; 
    string num = ""; 
    
    for(ll i=1; i<l.size(); i++){ 
        if(isdigit(l[i])){ 
            num += l[i]; 
        }else{ 
            ll cnt = stoll(num);
            if(idx <= cnt){
                cout << lastLetter << "\n"; 
                return 0;
            }
            idx -= cnt; 
            lastLetter = l[i];
            num = ""; 
        } 
    } 
    
    ll cnt = stoll(num);
    cout << lastLetter << "\n";

    return 0;
}
