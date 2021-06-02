//ATM management system

#include <iostream>
#include <iomanip>

class Accounts
{
public:
    std::string Name;
    long AccNo;
    std::string MobNo;

    Accounts(std::string name, long accno, std::string mobno)
    {
        Name = name;
        AccNo = accno;
        MobNo = mobno;
    }
    void PrintAccountDetails()
    {
        std::cout << "Name : " << Name << std::endl;
        std::cout << "Account Number : " << AccNo << std::endl;
        std::cout << "Mobile Number : " << MobNo << std::endl;
    }
};

void Menu()
{
    std::cout << "**********MENU**********" << std::endl;
    std::cout << "1. Check Balance" << std::endl;
    std::cout << "2. Withdrawal" << std::endl;
    std::cout << "3. Deposit" << std::endl;
    std::cout << "4. Display Account Details" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "************************" << std::endl;
}
int main()
{
    Accounts Personaccount = Accounts("Rohith", 80765432, "7997558356");

    int option;
    double balance = 70000.23;
    double withdraw;
    double deposit;
    bool done = true;

    while (done)
    {
        Menu();
        std::cout << "Please choose an Option : ";
        std::cin >> option;
        system("cls"); // Clears the screen after taking input

        switch (option)
        {
        case 1:
            std::cout << std::setprecision(7) << "Available Balance : " << balance << std::endl;
            break;
        case 2:
            std::cout << "Enter an amount you want to withdraw : ";
            std::cin >> withdraw;
            balance = balance - withdraw;
            break;
        case 3:
            std::cout << "Enter an amount you want to deposit : ";
            std::cin >> deposit;
            balance = balance + deposit;
            break;
        case 4:
            Personaccount.PrintAccountDetails();
            break;
        case 5:
            std::cout << "Thank You For Choosing Us" << std::endl;
            done = false;

            // default:
            //     break;
        }
    }
    return 0;
}
