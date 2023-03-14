#include <iostream>
#include <vector>

using namespace std;

vector<int> prefix_sum(vector<int>& arr) {
    int n = arr.size();
    vector<int> prefix_sums(n);
    prefix_sums[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefix_sums[i] = prefix_sums[i - 1] + arr[i];
    }
    return prefix_sums;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> prefix_sums = prefix_sum(arr);
    for (int i = 0; i < prefix_sums.size(); i++) {
        cout << prefix_sums[i] << " ";
    }
    cout << endl;
    return 0;
}

