/*  NAME: Nicole Mutia
    DATE: Nov. 4, 2018
    Purpose:
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

// function prototypes
void printIntroMenu();
void printMainMenu();
void start();
void login();
void createAccount();

// global variable (use this variable to store the user’s menu selection)
char menuInput;
char introMenuChoice, mainMenuChoice;
string userID, password, storedPassword, storedUserID, depositAmount;
bool didUserNotProvideAGoodUseridAndPassword = true;
bool doesTheUserWantToContinue = true;

// the main function
int main()
{
    // TO WRITE A WELCOME MESSAGE HERE
    cout << "Hi! Welcome to Nicole Mutia's ATM Machine!\n\n";
    // call the function start
    start();
    return 0;
}
void printIntroMenu()
{
    // WRITE CODE HERE
    cout << "Please select an option from the menu below: \n\n" << endl; // \n\n and endl produce two blank lines
    cout << "L -> Login" << endl;
    cout << "C -> Create New Account" << endl;
    cout << "Q -> Quit \n\n" << endl;
    cout << ">  ";
    cin >> introMenuChoice;
    do
    {
        if ((introMenuChoice == 'L') || (introMenuChoice == 'l'))
        {
            storedUserID = "nclmutia";
            storedPassword = "120679";
            cout << "\n\n" << "Please enter your user id: ";
            cin >> userID;
            cout << "Please enter your password: ";
            cin >> password;
            if ((userID == storedUserID) && (password == storedPassword))
            {
                cout << "\n\n" << "Access Granted!" << endl;
                didUserNotProvideAGoodUseridAndPassword = false;
            }
            else
            {
                cout << " ******** LOGIN FAILED! ******** " << endl;
            }
        }
        else
        {
            if ((introMenuChoice == 'C') || (introMenuChoice == 'c'))
            {
                cout << "\n\n" << "Enter your user id: ";
                cin >> userID;
                cout << "Enter your password: ";
                cin >> password;
                cout << "\n\n" << "Thank you! Your account has been created!" << endl;
            }

            /*switch (hash(introMenuChoice)) {
                case  hash("L"):   cout << "Login"; break;
                case hash("C"):   cout << "Create New Account "; break;
                case hash("Q"):   cout << "Quit"; break;
                } */
        }
    } while(didUserNotProvideAGoodUseridAndPassword);
}
void printMainMenu()
{
    // WRITE CODE HERE
    do
    {
        cout << "\n\n" << "D -> Deposit Money" << endl;
        cout << "W -> Withdraw Money" << endl;
        cout << "R -> Request Balance" << endl;
        cout << "Q -> Quit" << endl;
        cout << ">  ";
        cin >> mainMenuChoice;

        if ((mainMenuChoice == 'D') || (mainMenuChoice == 'd'))
        {
            cout << "Amount of deposit: " << endl;
            cin >> depositAmount;

        }
    }
    while (doesTheUserWantToContinue);
}
void start()
{
    // EXPLANATION OF CODE THAT GOES HERE IS BELOW
    printIntroMenu();
    printMainMenu();

}
void createAccount()
{
    // PHASE 2
}
void login()
{
    // PHASE 2
}
