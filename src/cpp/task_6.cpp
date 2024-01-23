/*

 * Author: Mukhammadkhon Asrorov 

 * Date: 23/01/2024

 * Name: HW -11

 */



#include <iostream>



using namespace std;



bool is_prime(int num) {

    if (num <= 1) {

        return false;

    }

    for (int i = 2; i * i <= num; i++) {

        if (num % i == 0) {

            return false;

        }

    }

    return true;

}



void generate_primes(int n) {

    int count = 0;

    int num = n + 1;

    while (count < 2) {

        if (is_prime(num)) {

            cout << num << " ";

            count++;

        }

        num++;

    }

    cout << endl;

}



int main() {

    int n = 10;

    generate_primes(n);

    return 0;

}

 
