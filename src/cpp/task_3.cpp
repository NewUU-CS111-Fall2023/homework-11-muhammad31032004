/*

 * Author: Mukhammadkhon Asrorov 

 * Date: 23/01/2024

 * Name: HW -11

 */


#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
bool word_break(string s, unordered_set<string>& wordDict) {
    int n = s.length();
    vector<bool> dp(n + 1, false);
    dp[0] = true;  // Base case: empty string can be segmented
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            if (dp[j] && wordDict.count(s.substr(j, i - j))) {
                dp[i] = true;
                break;
            }
        }
    }
    return dp[n];
}
int main() {
    string s = "newuzbekistan";
    unordered_set<string> wordDict = {"new", "uzbekistan"};
    bool can_segment = word_break(s, wordDict);
    cout << "Can be segmented? " << can_segment << endl;
    return 0;

} 
