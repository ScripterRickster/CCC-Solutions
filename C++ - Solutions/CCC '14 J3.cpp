#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a=100,b=100,n;
	cin >> n;
	for(int i=0;i<n;i++){
		int d1,d2;
		cin >> d1 >> d2;
		if(d1 > d2){
			b -= d1;
		}else if(d1 < d2){
			a -= d2;
		}
	}

	cout << a << "\n" << b << "\n";
}
