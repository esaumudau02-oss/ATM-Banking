#include <iostream>

using namespace std;

int main()
{
    int choice;
    double balance = 10000;
    double amount;
    int Pin = 3241;
    int pin ;
    string Transactions[4] = {" View Balance " ," Deposit Money " , " Withdraw Money ", " Exit "};
    int num[4] = {1,2,3,4};

    cout << " ==== ATM BANKING SYSTEM ==== " << endl;
    cout << "CORRECT PIN : 3241 " << endl;

    cout << " " << endl;
     do{
        cout << " Enter Pin : ";
        cin >> pin;

        cout << " " << endl;

        if(pin==Pin){

    do{
        cout << " === TRANSACTIONS === " << endl;
       for(int i=0;i<4;i++){
        cout << num[i] << " . " << Transactions[i] << endl;
       }
       cout << " " << endl;

       cout << " Enter your choice : " ;
       cin >> choice;

       switch(choice){
          case 1:
              cout << " Your current Balance : " << balance << endl;
            break;

          case 2:
            cout << " Enter amount to deposite : ";
            cin >> amount;

            if( amount > 0){
                balance += amount;
                cout << " Amount deposited successfully ." << endl;
            }
            else{
                cout << " Invalid amount !" << endl;
            }
            break;

          case 3:
              cout << "Amount to Withdraw ." << endl;
              cin >> amount;
              if( amount > 0 && amount <= balance){
                balance-=amount;
                cout << "Please collect you cash ."<<endl;
              }
              else{
                cout << " Insufficient balance or invalid amount ." <<endl;
              }
              break;

          case 4:
            cout << " Thank you for using this ATM.Goodbye ." << endl;
            break;

          default :
            cout << " Invalid choice ! , Try again.. " <<endl;

       }
       cout << " " << endl;
    }while(choice!=4);

        }
        else{
            cout << " Invalid Pin , Try again ." << endl;
        }

        cout << " " << endl;

    } while(pin!=Pin);

    return 0;
}












