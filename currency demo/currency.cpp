/*
PROMPT:
Write a C++ program called currency.cpp that prompts the user for the amount of
each foreign currency. Your prompts should look like:

Enter number of Colombian Pesos:
Enter number of Brazilian Reais:
Enter number of Peruvian Soles:

Your program should then convert the amount entered by the user and display the
total amount of USD. Your final output should look like:

US Dollars = $______
cmullins 5/18/25
*/
#include <iostream>
#include <string>

// Prompts the User with "Enter number of {Currency Type}:"
float promptUser(std::string currency_label)
{
    // Declare ingest variable and prompt user
    float n;
    std::cout << "Enter number of " << currency_label << ": ";
    std::cin >> n;

    // I don't know how to validate on Types yet, so, just return
    return n;
}

// Converts an amount of currency X to USD using a suppplied conversion factor
// NOTE conversion factor should be (1 USD)/(y units of currency)
float convertToDollars(float amount_of_currency, float conversion_factor)
{
    return amount_of_currency / conversion_factor;
}

// Runs the program specified by the prompt
int main()
{
    // Put it all together
    float usd = 0;

    usd += convertToDollars(promptUser("Columbian Pesos"), 4213.88);
    usd += convertToDollars(promptUser("Brazilian Reais"), 5.66);
    usd += convertToDollars(promptUser("Peruvian Soles"), 3.70);

    // Print
    std::cout << "US Dollars = " << usd << std::endl;
}