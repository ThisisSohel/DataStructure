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
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> prefix_sums = prefix_sum(arr);
    int sum = prefix_sums[6] - prefix_sums[1];
    cout << "Sum of elements from index 2 to 6: " << sum << endl;
    return 0;
}
