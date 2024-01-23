/*

 * Author: Mukhammadkhon Asrorov 

 * Date: 23/01/2024

 * Name: HW -11

 */





#include <iostream>

#include <vector>



using namespace std;



const int MOD = 1337;



int fast_pow(int a, int b, int mod) {

    int result = 1;

    while (b > 0) {

        if (b % 2 == 1) {

            result = (result * a) % mod;

        }

        a = (a * a) % mod;

        b /= 2;

    }

    return result;

}



int calculate_ab_mod(int a, vector<int>& b) {

    int result = 1;

    int current_power = 1;

    for (int digit : b) {

        current_power = (current_power * fast_pow(a, digit, MOD)) % MOD;

        result = (result * current_power) % MOD;

    }

    return result;

}



int main() {

    int a = 2;

    vector<int> b = {3};

    int result = calculate_ab_mod(a, b);

    cout << "a ^ b mod 1337: " << result << endl;

    return 0;

} 
