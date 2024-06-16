#include <bits/stdc++.h>
using namespace std;


int termDiff(int x,int y){
  if(x-y >= 0){
    return (x-y);
  }else{
    return -1;
  }
}

int main() {
  int t1,t2;
  cin >> t1 >> t2;
  int sumac = 0;

  while(true){
    if(termDiff(t1,t2) >=0 ){
      sumac +=1;
      int tempDiff = termDiff(t1,t2);
      t1 = t2;
      t2 = tempDiff;
    }else{
      break;
    }
  }

  cout << sumac + 2 << endl;
  
  
}
