#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter the number of elements for 1st array: ";
    cin >> n1;

    vector<int> nums1(n1);
    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < n1; i++) {
        cin >> nums1[i];
    }

    cout << "Enter the number of elements for 2nd array: ";
    cin >> n2;

    vector<int> nums2(n2);
    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < n2; i++) {
        cin >> nums2[i];
    }

    cout << "1st array: ";
    for (int i = 0; i < n1; i++) {
        cout << nums1[i] << ",";
    }
    cout << endl;
    cout << "2nd array: ";
    for (int i = 0; i < n2; i++) {
        cout << nums2[i] << ",";
    }
    cout << endl;

    vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1, 0));
    int maxLength = 0;

    for (int i = 1; i <= n1; i++) {
        for (int j = 1; j <= n2; j++) {
            if (nums1[i - 1] == nums2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                maxLength = max(maxLength, dp[i][j]);
            }
        }
    }

    cout << "Max length of repeated subarray: " << maxLength << endl;
}
