#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
  string inputword;
  bool works = true;
  vector<char> letters;
  char letterarray[7] = {'I','O','S','Z','H','X','N'};
  cin >> inputword;
  for(int i=0;i<inputword.length();i++){
    bool yes = false;
    for(int j=0;j<sizeof(letterarray);j++){
      if(letterarray[j] == inputword[i]){
        yes = true;
        break;
      }
    };
    if(yes == false){
      works = false;
      break;
    };
  };
  if(works == true){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
}
