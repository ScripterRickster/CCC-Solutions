#include <bits/stdc++.h>
using namespace std;

int main(){
    int s,days;
    cin >> s >> days;

    cout << "Sun Mon Tue Wed Thr Fri Sat" << endl;

    for (int i=0; i<s-1; i++) {
        cout << "    ";
    }

    for (int i=0; i<days; i++) {
        if (i + 1 < 10) {
            cout << "  " << i + 1; 
        } else {
            cout << " " << i + 1;
        }

        if ((i+s) % 7 == 0) {
            cout << endl;
        } else {
            if (i != days-1) {
                cout << " ";
            } else {
                cout << endl;
            }
        }
    }
}
