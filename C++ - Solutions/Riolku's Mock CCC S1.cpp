#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main() {

  int chars,cLimit,vLimit;
  cin >> chars >> cLimit >> vLimit;
  
  int c,v;
  c = 0;
  v = 0;
  
  bool works = true;

  vector<string> vowels = {"a","e","i","o","u","y"};
  
  string word;
  cin >> word;

  for(int i=0;i<chars;i++){
    string newLetter(1,word[i]);
    if(find(vowels.begin(),vowels.end(),newLetter) != vowels.end()){
      if(newLetter == "y"){
        c += 1;
        v += 1;
        if(c > cLimit){
          works = false;
          break;
        }
        if (v > vLimit){
          works = false;
          break;
        }
      }else{
        v += 1;
        c = 0;
        if (v > vLimit){
          works = false;
          break;
        }
      }
    }else{
      c += 1;
      v = 0;
      if(c > cLimit){
        works = false;
        break;
      }
    }
  }

  if(works == true){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }

  
  
}

