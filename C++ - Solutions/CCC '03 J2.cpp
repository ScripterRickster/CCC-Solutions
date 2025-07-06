#include <bits/stdc++.h>
using namespace std;
int main() {
    while(true){
      int area;
      cin >> area;
      if(area == 0){
        break;
      }else{
         int length = sqrt(area);  
        while (area % length != 0) {
          length--; 
        }

        int width = area / length;

        cout << "Minimum perimeter is " << 2 * (length + width) << " with dimensions " << length << " x " << width << endl;
      };
    };
    
}
