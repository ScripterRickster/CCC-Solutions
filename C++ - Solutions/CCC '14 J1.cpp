#include <iostream>
using namespace std;


int main() {
  int a,b,c;

  cin>>a;
  cin>>b;
  cin>>c;

  int d = a+b+c;

  if(d==180){
    if((a==b) && (b==c) && (c==a)){
      cout << "Equilateral";
    }else if((a==b) || (b==c) || (c==a)){
      cout << "Isosceles";
    }else{
      cout << "Scalene";
    }
  }else{
    cout << "Error";
  }

  
  
}
