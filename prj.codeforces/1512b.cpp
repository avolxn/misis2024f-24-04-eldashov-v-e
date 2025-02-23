#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<string> grid(n);
    vector<pair<int, int>> stars;
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == '*') {
                stars.push_back({ i, j });
            }
        }
    }
    int x1 = stars[0].first, y1 = stars[0].second;
    int x2 = stars[1].first, y2 = stars[1].second;

    if (x1 == x2) {
        int newX = (x1 + 1) % n; 
        grid[newX][y1] = '*';
        grid[newX][y2] = '*';
    }
    else if (y1 == y2) {
        int newY = (y1 + 1) % n;
        grid[x1][newY] = '*';
        grid[x2][newY] = '*';
    }
    else {
        grid[x1][y2] = '*';
        grid[x2][y1] = '*';
    }
    for (int i = 0; i < n; i++) {
        cout << grid[i] << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
