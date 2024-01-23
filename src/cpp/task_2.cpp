/*

 * Author: Mukhammadkhon Asrorov 

 * Date: 23/01/2024

 * Name: HW -11

 */



#include <iostream>
#include <vector>

using namespace std;

bool can_partition(vector<int>& nums) {
    int total_sum = 0;
    for (int num : nums) {
        total_sum += num;
    }
    if (total_sum % 2 != 0) {
        return false;
    }

    int target_sum = total_sum / 2;
    vector<bool> dp(target_sum + 1, false);
    dp[0] = true;
    for (int num : nums) {
        for (int j = target_sum; j >= num; j--) {
            dp[j] = dp[j] || dp[j - num];
        }
    }
    return dp[target_sum];
}

int main() {
    vector<int> nums = {1, 5, 11, 5};
    bool can_partition = can_partition(nums);
    cout << "Can partition? " << can_partition << endl;
    return 0;
} 
