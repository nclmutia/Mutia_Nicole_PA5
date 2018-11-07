/*  NAME: Nicole Mutia
    DATE: Nov. 4, 2018
    PURPOSE: to function as an ATM machine.
    NOTE: As of now, this app could only take this userID: nclmutia and password: abcd1234 for the app to run
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

// Function prototypes
void printIntroMenu();
void printMainMenu();
void start();
void login();
void createAccount();

// Global variable (use this variable to store the user’s menu selection)
string userID, password, storedPassword, storedUserID;
bool didUserNotProvideAGoodUseridAndPassword = true;
bool doesTheUserWantToContinue = true;


// The main function
int main()
{
    // Greet User
    cout << "Hi! Welcome to Nicole Mutia's ATM Machine!\n\n";
    // Call the function start
    start();
    return 0;
}
void printIntroMenu()
{
    char introMenuChoice;
    do
    {
        cout << "Please select an option from the menu below: \n\n" << endl; // \n\n and endl produce two blank lines
        cout << "L -> Login" << endl;
        cout << "C -> Create New Account" << endl;
        cout << "Q -> Quit \n\n" << endl;
        cout << ">  ";
        cin >> introMenuChoice;

        switch (introMenuChoice) // This statement checks and runs what the user chose
        {
        case 'C':
        case 'c':
            createAccount();
            break;
        case 'L':
        case 'l':
            login();
            break;
        case 'Q':
        case 'q':
            exit(0);
        }
    }
    while(didUserNotProvideAGoodUseridAndPassword);
}
void printMainMenu()
{
    char mainMenuChoice;
    double depositAmount, balanceAmount, withdrawalAmount;
    balanceAmount = 0;
    do
    {
        cout << "\n\n" << "D -> Deposit Money" << endl;
        cout << "W -> Withdraw Money" << endl;
        cout << "R -> Request Balance" << endl;
        cout << "Q -> Quit" << endl;
        cout << ">  " << "\n\n";
        cin >> mainMenuChoice;
        switch (mainMenuChoice)
        {
        case 'D':
        case 'd':
            cout << "Amount of deposit: $";
            cin >> depositAmount;
            balanceAmount = balanceAmount + depositAmount;
            break;
        case 'W':
        case 'w':
            cout << "Amount of withdrawal: $";
            cin >> withdrawalAmount;
            balanceAmount = balanceAmount - withdrawalAmount;
            break;
        case 'R':
        case 'r':
            cout << "Your balance is: $" << balanceAmount << endl;
            break;
        case 'Q':
        case 'q':
            cout << "Thank you for stopping by!" << endl;
            exit(0);
        }
    }
    while (doesTheUserWantToContinue);
}
void start()
{
    printIntroMenu();
    printMainMenu();

}
void createAccount()
{ // Code to create userID and password goes here
    cout << "\n\n" << "Enter your user id: ";
    cin >> userID;
    cout << "Enter your password: ";
    cin >> password;
    cout << "\n\n" << "Thank you! Your account has been created!" << endl;
}
void login()
{ // Code for the user to login
    storedUserID = "nclmutia"; // As of now, this is the only user ID and password that will work
    storedPassword = "abcd1234";
    cout << "\n\n" << "Please enter your user id: ";
    cin >> userID;
    cout << "Please enter your password: ";
    cin >> password;
    if ((userID == storedUserID) && (password == storedPassword))
    {
        cout << "\n\n" << "Access Granted!" << endl;
        didUserNotProvideAGoodUseridAndPassword = false;
    }
    else // If the userID and password did not match to the stored userid and password this code runs
    {
        cout << " ******** LOGIN FAILED! ******** " << "\n\n" << endl;
    }
}

