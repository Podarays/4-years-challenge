//============================================================================
// File: momo_prototype.cpp
// Purpose: A simple program built as a prototype of the momo ussd interface
// Author: Edwin
// Date: June 25, 2026
//============================================================================
#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

// Function prototypes
const string CORRECTPIN = "2526";
double amount;
double balance = 174.50;
int attempts = 3;
string enteredPin;
string phoneNumber;
void displayMainMenu();
void handleTransferMoney();
void handleMomopay();
void handleAirtime();
void handleAllowCashout();
void handleMyWallet();
void handlemomoUser();
void handlebankAccount();
void handlefavourites();
void buyairtime();
void buydatabundle();
void checkBalance();
void myApprovals();
bool isValidPhoneNumber(string str);

int main () {
    displayMainMenu();
    return 0;
}
// Function declaration
void displayMainMenu() {
    cout << "=====================================================" << endl;
    cout << "  Welcome To Momo Prototype: Select an option (1-5)" << endl;
    cout << "=====================================================" << endl;
    cout <<"\n1. Transfer Money\n2. MomoPay & Pay Bill\n3. Airtime & Bundles\n4. Allow Cashout\n5. My Wallet"<< endl;
    int choice; 
    cin >> choice;
    
    // Getting the user's choice input
    switch(choice) {
        case 1:
           handleTransferMoney();
           break;
        case 2:
           handleMomopay();
           break;
        case 3:
           handleAirtime();
           break;
        case 4:
           handleAllowCashout();
           break;
        case 5:
           handleMyWallet();
           break;
        default:
           cout << "Invalid choice! Please select a number from 1-6" << endl;
           break;
    }
}
//Structuring a function for option 1 which is under main menu
void handleTransferMoney(){
    int choice;
    cout << "\n1. MoMo User\n2. Bank Account\n3. Favourites\n0. Back" << endl;
    cin >> choice;

    switch(choice){
        case 1:
           handlemomoUser();
           break;
        case 2:
           handlebankAccount();
           break;
        case 3:
           handlefavourites();
           break;
        case 0:
           displayMainMenu();
           break;
        default:
           cout << "Enter a valid option" << endl;
           break;
    }
}

void handlemomoUser(){
   string phoneNumber;
   string enteredPin;
   double amount;
   int attempts = 3;

   while (true) {
      cout << "\nEnter the mobile of recepient: " << endl;
      cin >> phoneNumber;

      // Implementing the function for validating phone numbers here
      if (isValidPhoneNumber(phoneNumber)) {
         break; // The loop exits at this point if the fuction returns true
      }
      else {
         cout << "\nInvalid phone number. Try again.\n" << endl;
         cin.clear();
         cin.ignore(10000, '\n');
      }
   }

   // Structuring input validation loop for amount
   while (true) {
      cout << "\nEnter amount to transfer" << endl;
      cin >> amount;
      if (cin.fail()) { // check 1: Checks for non numbers (letters or symbols)
         cout << "\nInvalid amount. Please enter a valid amount" << endl;
         cin.clear();
         cin.ignore(10000, '\n');
      }
      else if (amount <= 0) { // check 2: checks if the user entered an amount less than or equal to zero
         cout << "\nEnter an amount more than GHS0.00" << endl;
      }
      else {
         break;
      }
   }


   // Structuring a loop to authorize transaction
   while (attempts > 0){
      cout << "\nEnter your pin" << endl;
   cin >> enteredPin;
   if (enteredPin == CORRECTPIN) {
      cout << "\nYou have successfully transferred GHS" << amount << " to " << phoneNumber << endl;
      return;
   }
   else {
      attempts--; 
      if (attempts > 0) {
         cout << "\nIncorrect Pin! You have " << attempts << " attempts left" << endl;
      }
      else {
      cout << "\nToo many attempts. Your account has been temporarily locked. Contact us for assistance" << endl;
      }
     }
   }
}

void handleMomopay(){
   string merchantID;

   while (true) {
      cout << "\nEnter Merchant ID: " << endl;
      cin >> merchantID;

      // since merchant ID and phone numbers use the same principle in this context, we use the same function to validate both
      if (isValidPhoneNumber(merchantID)){
         break;
      }
      else {
         cout << "\nInvalid Merchant ID. Try again.\n" << endl;
         cin.clear();
         cin.ignore(10000, '\n');
      }
   }

   // Structuring input validation loop for amount
   while (true) {
      cout << "\nEnter amount to transfer" << endl;
      cin >> amount;
      if (cin.fail()) { // check 1: Checks for non numbers (letters or symbols)
         cout << "\nInvalid amount. Please enter a valid amount" << endl;
         cin.clear();
         cin.ignore(10000, '\n');
      }
      else if (amount <= 0) { // check 2: checks if the user entered an amount less than or equal to zero
         cout << "\nEnter an amount more than GHS0.00" << endl;
      }
      else {
         break;
      }
   }


   while (attempts > 0){
      cout << "\nEnter your pin" << endl;
   cin >> enteredPin;
   if (enteredPin == CORRECTPIN) {
      cout << "\nYou have successfully paid GHS" << amount << " to merchant " << merchantID << endl;
      return;
   }
   else {
      attempts--; 
      if (attempts > 0) {
         cout << "\nIncorrect Pin! You have " << attempts << " attempts left" << endl;
      }
      else {
      cout << "\nToo many attempts. Your account has been temporarily locked. Contact us for assistance" << endl;
      }
     }
   }
}

void handlebankAccount() {
   string accountNumber;

   while (true) {
      cout << "\nEnter the account number of recipient: " << endl;
      cin >> accountNumber;

      // since Account number and phone numbers use the same principle in this context, we use the same function to validate both
      if (isValidPhoneNumber(accountNumber)){
         break;
      }
      else {
         cout << "\nInvalid account number. Try again" << endl;
         cin.clear();
         cin.ignore(10000, '\n');
      }
   }
   
   // Structuring input validation loop for amount
   while (true) {
      cout << "\nPlease enter amount to transfer" << endl;
      cin >> amount;
      if (cin.fail()) { // check 1: Checks for non numbers (letters or symbols)
         cout << "\nInvalid amount. Please enter a valid amount" << endl;
         cin.clear();
         cin.ignore(10000, '\n');
      }
      else if (amount <= 0) { // check 2: checks if the user entered an amount less than or equal to zero
         cout << "\nEnter an amount more than GHS0.00" << endl;
      }
      else {
         break;
      }
   }

   while (attempts > 0){
      cout << "\nEnter your pin" << endl;
   cin >> enteredPin;
   if (enteredPin == CORRECTPIN) {
      cout << "You have successfully transferred GHS" << amount << " to account " << accountNumber << endl;
      return;
   }
   else {
      attempts--; 
      if (attempts > 0) {
         cout << "\nIncorrect Pin! You have " << attempts << " attempts left" << endl;
      }
      else {
      cout << "\nToo many attempts. Your account has been temporarily locked. Contact us for assistance" << endl;
      }
     }
   }
}

void handlefavourites() {
   cout << "\nYou do not have any contact in your favourite list. Kindly add a contact to use this feature" << endl;
}

void handleAirtime(){
   int choice;
   cout << "\n1. Buy airtime\n2. Buy databundle\n0. Back" << endl;
   cin >> choice;

   switch (choice) {
      case 1:
         buyairtime();
         break;
      case 2:
         buydatabundle();
         break;
      case 0:
         displayMainMenu();
         break;
      default:
         cout << "\nEnter a valid option" << endl;
         break;
   }
}

void buyairtime() {
   while (true) {
      cout << "\nEnter the number of the recipient" << endl;
      cin >> phoneNumber;

      //Implementing the function for validating phone numbers
      if (isValidPhoneNumber(phoneNumber)) {
         break;
      }
      else {
         cout << "\nInvalid phone number. Try again\n" << endl;
         cin.clear();
         cin.ignore(10000, '\n');
      }
      }
   
   // Structuring input validation loop for amount
   while (true) {
      cout << "\nEnter the amount of airtime you want to purchase" << endl;
      cin >> amount;
      if (cin.fail()) { // check 1: Checks for non numbers (letters or symbols)
         cout << "\nInvalid amount. Please enter a valid amount" << endl;
         cin.clear();
         cin.ignore(10000, '\n');
      }
      else if (amount <= 0) { // check 2: checks if the user entered an amount less than or equal to zero
         cout << "\nEnter an amount more than GHS0.00" << endl;
      }
      else {
         break;
      }
   }

   
   while (attempts > 0) {
      cout << "\nEnter your pin" << endl;
      cin >> enteredPin;
      if (enteredPin == CORRECTPIN) {
         cout << "\nYou have successfully purchased GHS" << amount << " worth of airtime for " << phoneNumber << endl;
         return;
      }
      else {
         attempts --;
         if (attempts > 0){
            cout << "\nIncorrect pin! You have " << attempts << " attempts left" << endl;
         }
         else {
            cout << "\nToo many attempts! Your account has been temporarily locked. Contact us for assistance" << endl;
         }
      }
   }
}

void buydatabundle(){
   while (true) {
      cout << "\nEnter the number of the recipient" << endl;
      cin >> phoneNumber;
      if (isValidPhoneNumber(phoneNumber)) {
         break;
      }
      else {
         cout << "\nInavlid phone number. Try again\n" << endl;
         cin.clear();
         cin.ignore(); 
      }
   }
   
   // Structuring input validation loop for amount
   while (true) {
      cout << "\nEnter the amount of data bundle you want to purchase" << endl;
      cin >> amount;
      if (cin.fail()) { // check 1: Checks for non numbers (letters or symbols)
         cout << "\nInvalid amount. Please enter a valid amount" << endl;
         cin.clear();
         cin.ignore(10000, '\n');
      }
      else if (amount <= 0) { // check 2: checks if the user entered an amount less than or equal to zero
         cout << "\nEnter an amount more than GHS0.00" << endl;
      }
      else {
         break;
      }
   }

   
   while (attempts > 0) {
      cout << "\nEnter your pin" << endl;
      cin >> enteredPin;
      if (enteredPin == CORRECTPIN) {
         cout << "\nYou have successfully purchased GHS" << amount << " worth of data bundle for " << phoneNumber << endl;
         return;
      }
      else {
         attempts --;
         if (attempts > 0){
            cout << "\nIncorrect pin! You have " << attempts << " attempts left" << endl;
         }
         else {
            cout << "\nToo many attempts! Your account has been temporarily locked. Contact us for assistance" << endl;
         }
      }
   }
}

void handleAllowCashout(){
   int choice;
   cout << "\nAre you sure you want to allow cashout?" << endl;
   cout << "\n1. Yes\n2. No\n0. Back" << endl;
   cin >> choice;

   switch (choice) {
      case 1:
      cout << "\nCashout has been allowed" << endl;
      break;
      case 2:
      cout << "\nCashout is not allowed" << endl;
      break;
      case 0:
      displayMainMenu();
      break;
      default:
      cout << "\nEnter a valid option" << endl;
      break;
   }
}

void handleMyWallet() {
   int choice;
   cout << "\n1. Check balance\n2. My approvals\n0. Back" << endl;
   cin >> choice;

   switch (choice) {
      case 1:
      checkBalance();
      break;
      case 2:
      myApprovals();
      break;
      case 0:
      displayMainMenu();
      break;
      default:
      cout << "\nEnter a valid option" << endl;
      break;
   }
}

void checkBalance() {
   cout << "\nEnter your pin to display your balance" << endl;
   cin >> enteredPin;

   while (attempts > 0) {
      if (enteredPin == CORRECTPIN) {
         cout << "\nYou have GHS" << balance << " in your momo wallet" << endl;
         return;
      }
      else {
         attempts--;
         if (attempts > 0) {
            cout << "\nIncorrect pin! You have " << attempts << " attempts left" << endl;
         }
         else {
            cout << "\nToo many attempts! Your account has been temporarily locked. Contact us for assistance" << endl;
         }
      
      }
   }
}

void myApprovals() {
   cout << "\nEnter your pin to display your pending approvals" << endl;
   cin >> enteredPin;

   while (attempts > 0) {
      if (enteredPin == CORRECTPIN){
      cout << "\nYou have no pending approvals" << endl;
      return;
      }
      else {
         attempts--;
         if (attempts > 0) {
            cout << "\nIncorrect pin! You have " << attempts << " attempts left" << endl;
         }
         else {
            cout << "\nToo many attempts! Your account has been temporarily locked. Contact us for assistance" << endl;
         }
      }
   }
}
// Structuring an input validation function for phone numbers
bool isValidPhoneNumber(string str) {
   if (str.length() != 10) {
      return false;
   }
   for (char c: str) {
      if (!isdigit(c)) {
         return false;
      }
   }
   return true;
}