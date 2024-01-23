 /*
 * Author: Mukhammadkhon Asrorov 
 * Date: 23/01/2024
 * Name: HW -11
 */

#include <iostream>
#include <vector>

using namespace std;

int findTargetSumWays(vector<int>& nums, int target) {
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }


    if ((sum + target) % 2 != 0) {
        return 0;
    }

    int subsetSum = (sum + target) / 2;
    int n = nums.size();
    vector<vector<int>> dp(n + 1, vector<int>(subsetSum + 1, 0));


    dp[0][0] = 1;
    for (int i = 1; i <= n; i++) {
        dp[i][0] = 1;
    }


    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= subsetSum; j++) {
            if (nums[i - 1] <= j) {

                dp[i][j] = dp[i - 1][j - nums[i - 1]] + dp[i - 1][j];
            } else {

                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[n][subsetSum];
}

int main() {
    vector<int> nums = {1, 1, 1, 1, 1};
    int target = 3;
    int ways = findTargetSumWays(nums, target);
    cout << "Number of ways: " << ways << endl;
    return 0;
}
