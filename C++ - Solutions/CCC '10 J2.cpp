#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b, c, d, s;
    cin >> a >> b >> c >> d >> s;

    int db = 0, dn = 0;
    int tb = 0, tn = 0; 
    bool bs = true, ns = true; 

    while(tb < s || tn < s){
        if(tb < s){
            if(bs){
                int move = min(a, s - tb);
                db += move;
                tb += move;
            }else{
                int move = min(b, s - tb);
                db -= move;
                tb += move;
            }
            bs = !bs;
        }

        if(tn < s){
            if(ns){
                int move = min(c, s - tn);
                dn += move;
                tn += move;
            }else{
                int move = min(d, s - tn);
                dn -= move;
                tn += move;
            }
            ns = !ns;
        }
    }

    if(dn > db){
        cout << "Byron" << endl;
    }else if(db > dn){
        cout << "Nikky" << endl;
    }else{
        cout << "Tied" << endl;
    }

}
