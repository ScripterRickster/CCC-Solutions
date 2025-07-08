// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <iterator>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n;
    cin >> n;
    string dump;
    getline(cin,dump);
    for(int i=0;i<n;i++){
        string l;
        getline(cin,l);
        int i1 = 0;
        string w = "";
        for(int j=0;j<l.length();j++){
            if(l[j] == ' '){
                if(w.length() == 4){
                    l.replace(i1,4,"****");
                }
                w = "";
                i1 = j+1;
                continue;
            }else if((int)tolower(l[j]) >= 97 && (int)tolower(l[j]) <= 123){
                w = w+l[j];
            }

            if(j == l.length()-1){
                 if(w.length() == 4){
                    l.replace(i1,4,"****");
                }
            }
        }



        cout << l << "\n";
    }
}
