#include <bits/stdc++.h>
using namespace std;
int main() {
  int j,a,s=0;
  cin >> j >> a;
  vector<int> allJerseys(j+1);
  for (int i=0;i<j;i++){
    char c;
    cin >> c;
    if (c == 'S'){
      allJerseys[i] = 1;
    }else if(c == 'M'){
      allJerseys[i] = 2;
    }else if(c == 'L'){
      allJerseys[i] = 3;
    }
  }
  for(int i=0;i<a;i++){
    char c;
    int aNum;
    cin >> c >> aNum;
    int size = 0;
    if(c == 'S'){
      size = 1;
    }else if(c == 'M'){
      size = 2;
    }else{
      size = 3;
    }
    if(allJerseys[aNum-1] >= size){
      s += 1;
      allJerseys[aNum-1] = 0;
    }
  }
  cout << s << endl;
}
