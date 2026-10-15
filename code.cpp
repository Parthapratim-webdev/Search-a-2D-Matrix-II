#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m = mat.size(), n = mat[0].size();

        int r = 0, c = n - 1;

        while (r < m && c >= 0) {
            if (target == mat[r][c]) {
                return true;
            } else if (target < mat[r][c]) {
                c--;
            } else {
                r++;
            }
        }

        return false;
    }
};

int main() {
    int m, n, target;

    cout << "Enter number of rows and columns: ";
    cin >> m >> n;

    vector<vector<int>> mat(m, vector<int>(n));

    cout << "Enter matrix elements in sorted order:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    cout << "Enter target: ";
    cin >> target;

    Solution obj;

    if (obj.searchMatrix(mat, target)) {
        cout << "Target found!" << endl;
    } else {
        cout << "Target not found!" << endl;
    }

    return 0;
}