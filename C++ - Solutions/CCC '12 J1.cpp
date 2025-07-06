#include <iostream>
using namespace std;
int main() {
  int limit,vehspeed;
  cin >> limit >> vehspeed;

  if(vehspeed <= limit){
    cout << "Congratulations, you are within the speed limit!" << endl;
  }else if(vehspeed <= limit+20){
    cout << "You are speeding and your fine is $100." << endl;
  }else if(vehspeed <= limit+30 && vehspeed > limit+20){
     cout << "You are speeding and your fine is $270." << endl;
  }else if(vehspeed >= limit+31){
     cout << "You are speeding and your fine is $500." << endl;
  }
}
