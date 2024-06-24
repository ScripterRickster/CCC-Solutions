#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    int x,sum=1;
    cin >> x;
    for(int j=2;j<x;j++){
      if(x%j == 0){
        sum += j;
      }
    }
    if(sum<x){
      cout << x << " is a deficient number." << endl;
    }else if(sum>x){
      cout << x << " is an abundant number." << endl;
    }else{
      cout << x << " is a perfect number." << endl;
    }
  }
}
