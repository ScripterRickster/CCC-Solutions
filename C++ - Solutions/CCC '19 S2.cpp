#include <bits/stdc++.h>
using namespace std;

bool checkIfPrime(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0){return false;}
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int t;
		cin >> t;
		for(int j=0;j<t;j++){
			if(checkIfPrime(t-j)){
				if(checkIfPrime(t+j)){
					if(((t+j)+(t-j))/2 == t){
						cout << t+j << " " << t-j << "\n";
						break;
					}
				}
			}
		}
	}
}
