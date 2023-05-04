// C++ Variables and data types
#include <iostream>

int main(){
    // Calcualte simple interest
    int tanure_in_months = 48; // 4 years
    int loan_amount = 100000; // 1 lakh
    double interest_rate = 7.5; // 7.5%
    float amount = 0.0F; // 0.0F is a float literal
    char loan_category = 'A'; // Some sort of Loan Category for demo sake
    std::string interest_type = "Simple Interest";
    bool isActive = true;

    // Calculate the loan amount...
    // Amount = Loan Amount + ( Loan Amount * Interest Rate * Tanure in years) / 100
    amount = loan_amount + ( loan_amount * interest_rate * ( tanure_in_months / 12 )) / 100;
    
    std::cout << "Loan Type    : " << loan_category << std::endl;
    std::cout << "Interest Type: " << interest_type << std::endl;
    std::cout << "Amount after " << tanure_in_months << " months: " << amount << std::endl;

    return 0;
}