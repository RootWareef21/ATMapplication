#include <iostream>
using namespace std;

void menu(){

  cout << "*******Manu*********" <<endl;
  cout << "1. Check Balance" << endl;
  cout << "2. Deposite" << endl;
  cout << "3. Withdraw" << endl; 
  cout << "4. Exit" << endl;
  cout << "********************" <<endl;
}
void subMenu(){
  cout << "********************" <<endl;
  cout << "1. Go back to main menu" << endl;
  cout << "2. Exit" << endl;
  cout << "********************" <<endl;
}

int main(){
   int option;
   int option2;
   double balance = 500;



   do{
    system("cls");
     menu();
   cin >> option;
   system("cls");
    switch(option)
   {
    case 1:
    cout << "Balance is " << balance <<"$" << endl;
    subMenu();
    cin >> option2;
    break;

   case 2:
   cout << "Deposite amount: " << endl;
   double depositeAmount;
   cin >> depositeAmount;
   balance += depositeAmount;
   subMenu();
    cin >> option2;
   break;


   case 3:
   cout << "Withdraw anount: " << endl;
   double withdrawAmount;
   cin >> withdrawAmount;
   if(withdrawAmount > balance){
    cout << "Not enough money\n";
   }else{
    balance -= withdrawAmount;
    break;
   }
   subMenu();
    cin >> option2;
    break;
   }
   }while ((option != 4) && (option2 != 2));
   
   
   
 
return 0;
   }