#include <iostream>
#include <vector>
using namespace std;
int main() {
  int q,c=0,i,j=0;
  cin >> q;
  i = 2*q;
  string a;
  bool FIA = false;
  vector<string> answers;
  while(FIA == false){
    if(i>q){
      cin >> a;
      answers.push_back(a);
    }else{
      cin >> a;
      if(answers[j] == a){
        c +=1;
      }
      j+=1;
    }
    i-=1;
    if(i == 0){
      FIA = true;
    }
  }
  cout << c << endl;
}
