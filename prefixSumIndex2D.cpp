#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> prefix_sum(vector<vector<int>>& arr) {
    int m = arr.size();
    int n = arr[0].size();
    vector<vector<int>> prefix_sums(m, vector<int>(n));
    prefix_sums[0][0] = arr[0][0];
    for (int i = 1; i < m; i++) {
        prefix_sums[i][0] = prefix_sums[i - 1][0] + arr[i][0];
    }
    for (int j = 1; j < n; j++) {
        prefix_sums[0][j] = prefix_sums[0][j - 1] + arr[0][j];
    }
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            prefix_sums[i][j] = prefix_sums[i - 1][j] + prefix_sums[i][j - 1] - prefix_sums[i - 1][j - 1] + arr[i][j];
        }
    }
    return prefix_sums;
}

int main() {
    vector<vector<int>> arr = {{1, 2, 3, 4, 5, 6}, {7, 8, 9, 10, 11, 12}, {13, 14, 15, 16, 17, 18}, {19, 20, 21, 22, 23, 24}, {25, 26, 27, 28, 29, 30}, {31, 32, 33, 34, 35, 36}};
    vector<vector<int>> prefix_sums = prefix_sum(arr);

    int sum = prefix_sums[6][6];
    if (2 - 1 >= 0) {
        sum -= prefix_sums[2 - 1][6];
    }
    if (2 - 1 >= 0) {
        sum -= prefix_sums[6][2 - 1];
    }
    if (2 - 1 >= 0 && 2 - 1 >= 0) {
        sum += prefix_sums[2 - 1][2 - 1];
    }
    cout << sum << endl;
    return 0;
}

