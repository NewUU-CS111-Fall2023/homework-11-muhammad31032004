/*

 * Author: Mukhammadkhon Asrorov 

 * Date: 23/01/2024

 * Name: HW -11

 */



#include <iostream>



int phi(int n) {

    if (n == 1) return 0;

    for (int i = 2; i * i <= n; ++i) {

        if (n % i == 0) return phi(n / i) * (i - 1);

    }

    return n - 1;

}



int main() {

    int a = 13;

    int b = 17;

    int n = a * b;

    int phi_n = phi(n);

    std::cout << "phi(" << n << ") = " << phi_n << std::endl;

    return 0;

}

 
