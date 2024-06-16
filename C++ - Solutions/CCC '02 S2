#include <iostream>
using namespace std;

int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

int main() {
  int a,b;

  //a = numerator, b = denominator
  cin >> a >> b;

  if(a == 0){
    cout << "0" << endl;
  }else if(a%b == 0){
    cout << a/b << endl;
    
  }else if(a>b){
    int r = a%b;
    //r = remainder
    int c = a-r;
    // c = the number that is divisible by b

    int e = c/b;
    //e = the front value (if there is any even)

    int d = gcd(r,b);
    //common denominator

    r = r/d;
    b = b/d;
    
    cout << e << " " << r << "/" << b << endl;
    
  }else {
    int d = gcd(a,b);

    a = a/d;
    b = b/d;
    cout << a << "/" << b << endl;
  }
  
}
