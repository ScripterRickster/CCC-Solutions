#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    string s1,s2;
    cin >> s1 >> s2;
    vector<int> ls(26,0);
    vector<int> ls2(26,0);
    int ast = 0;
    for(int i=0;i<s1.length();i++){
        ls[(int) s1[i] - 'a']++;
    }
    for(int i=0;i<s2.length();i++){
        if(s2[i] == '*'){
            ast++;
        }else{
            ls2[(int)s2[i]-'a']++;
        }
    }

    for(int i=0;i<26;i++){
        if(ls[i] == ls2[i]) continue;

        if(ls[i] > ls2[i]){
            if(ast - (ls[i]-ls2[i]) < 0){cout << "N" << endl; return 0;}
            ast -= (ls[i]-ls2[i]); 
        }
    }
    cout << "A" << endl;
}
