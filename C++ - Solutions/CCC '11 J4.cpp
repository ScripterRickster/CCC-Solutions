#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x = -1, y = -5;
    vector<pair<int, int>> visited = {
         {-1,-5},{-1,-6},{-1,-7},{0,-7},{1,-7},{2,-7},{3,-7},{4,-7},
         {5,-7},{6,-7},{7,-7},{7,-6},{7,-5},{7,-4},{7,-3},{6,-3},{5,-3},
         {5,-4},{5,-5},{4,-5},{3,-5},{3,-4},{3,-3},{2,-3},{1,-3},{0,-3},
         {0,-2},{0,-1}
    };
    string d;
    
    while (true) {
        int n;
        cin >> d;
        if (d == "q") break;
        cin >> n;
        bool danger = false;
        
        for (int i=0;i<n;i++) {
            if (d == "r") {
                x++;
            } else if (d == "l") {
                x--;
            } else if (d == "u") {
                y++;
            } else if (d == "d") {
                y--;
            }
            
            pair<int, int> nCords = {x, y};
            if (find(visited.begin(), visited.end(), nCords) != visited.end()) {
                danger = true;
                
            }
            visited.push_back(nCords);
        }
        
        if (danger) {
            cout << x << " " << y << " DANGER\n";
            break;
        } else {
            cout << x << " " << y << " safe\n";
        }
    }

}
