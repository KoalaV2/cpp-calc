#include <iostream>


int main() {
    float first_number;
    float second_number;
    char calc;
    std::cout << "Please enter your first number! \n :";
    std::cin >> first_number;
    std::cout << "Please enter your second number! \n :";
    std::cin >> second_number;
    std::cout << "Please enter how you want to calculate it! \n :";
    std::cin >> calc;
    std::cout << "\n";
    switch(calc){
        case '+':
            std::cout << '=' << first_number + second_number << "\n\n";
            break;
        case '-':
            std::cout << '=' << first_number - second_number << "\n\n";
            break;
        case '*':
            std::cout << '=' << first_number * second_number << "\n\n";
            break;
        case '/':
            std::cout << '=' << first_number / second_number << "\n\n";
	    break;
        default:
            std::cout << "Error, wrong input!";
    }
    return 0;
}
