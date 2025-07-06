#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int x=0,y=0;
	int mx,my;
	cin >> mx >> my;
	int px=INT_MAX,py=INT_MAX;
	while(true){
		cin >> px >> py;
		if(px == 0 && py == 0){break;}
		x += px;
        y += py;
        if(x < 0){x = 0;}
        if(x > mx){x = mx;}
        if(y < 0){y = 0;}
        if(y > my){y = my;}
		cout << x << " " << y << "\n";
	}
}
