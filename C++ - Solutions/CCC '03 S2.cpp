#include <bits/stdc++.h>
using namespace std;


string toLower(const string &s){
    string t = "";
    for(char c:s){
        t += tolower(c);
    }
    return t;
}

string lastSyllable(const string &s) {
    string vowels = "aeiou";
    string lw = s.substr(s.find_last_of(' ')+1);

    
    int lv = -1;
    for(int i=lw.length()-1;i>=0;i--){
        if(vowels.find(lw[i]) != string::npos){
            lv = i;
            break;
        }
    }

    if(lv == -1){
        return lw;
    }
    return lw.substr(lv);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cin.ignore();

    for(int i=0;i<n;i++){
        string a, b, c, d;
        getline(cin, a);
        getline(cin, b);
        getline(cin, c);
        getline(cin, d);

        a = lastSyllable(toLower(a));
        b = lastSyllable(toLower(b));
        c = lastSyllable(toLower(c));
        d = lastSyllable(toLower(d));

        if(a == b && b == c && c == d){
            cout << "perfect" << endl;
        }else if(a == b && c == d){
            cout << "even" << endl;
        }else if(a == c && b == d){
            cout << "cross" << endl;
        }else if(a == d && b == c){
            cout << "shell" << endl;
        }else{
            cout << "free" << endl;
        }
    }
}
