#include <iostream>
#include <cmath>

int main(){

    double a, b, hypotenuse;

    std::cout << "Enter the value of (a): ";
    std::cin >> a;

    std::cout << "Enter the value of (b): ";
    std::cin >> b;

    hypotenuse = sqrt(pow(a,2) + pow(b,2));

    std::cout << "hypotenuse = " << hypotenuse;
    

    
    return 0;

}