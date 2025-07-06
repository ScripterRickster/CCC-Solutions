#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;

  int sum = 0;
  vector<int> nums;
  for(int i=0;i<n;i++){
    int k;
    cin >> k;
    if(k!=0){
      nums.push_back(k);
      sum += k;
    }else{
      sum -= nums[nums.size()-1];
      nums.pop_back();
    }
  };

  cout << sum << endl;

}
