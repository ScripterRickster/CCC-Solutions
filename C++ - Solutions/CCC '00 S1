#include <bits/stdc++.h>

using namespace std;

int main() {
  int Jar , Acount , Bcount , Ccount;
  cin >> Jar;
  cin >> Acount;
  cin >> Bcount;
  cin >> Ccount;

  int PlayCount = 0;
  
  while (Jar > 0) {
    
    Jar -= 1;
    PlayCount += 1;
    Acount += 1;
    
    if (Acount > 34) {
      Jar += 30;
      Acount -= 35;
    }
    
    if (Jar == 0) {
      break;
    }
    
    
    Jar -= 1;
    PlayCount += 1;
    Bcount += 1;
    if (Bcount > 99) {
      Jar += 60;
      Bcount -= 100;
    }
    
    if (Jar == 0) {
      break;
    }

    
    Jar -= 1;
    PlayCount += 1;
    Ccount += 1;
    if (Ccount > 9) {
      Jar += 9;
      Ccount -= 10;
    }
    
    if (Jar == 0) {
      break;
    }
  }
  cout << "Martha plays " << PlayCount << " times before going broke.";
}
