#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;


int main(){
    int n, opt, new_n, lowest, highest, sum;
    char cont;
    do{
        // print the menu of options
        cout << "\nSelect an option from [1-7] according to the menu:" << endl;
        cout << "[1]. Enter a number in the range between 1000 and 999999"<<endl;
        cout << "[2]. Print the digits of the number"<<endl;
        cout << "[3]. Count how many digits the number has"<<endl;
        cout << "[4]. Return the lowest and highest digits of the number"<<endl;
        cout << "[5]. Return the sum of the digits of the number"<<endl;
        cout << "[6]. Return the product of the odd digits"<<endl;
        cout << "[7]. Calculate the inverted version of the number"<<endl;
        cout << "---------------------------------------------------"<<endl;
        cout << "Enter option: ";
        cin >> opt;
        do{
            cout << "Please, enter the number: ";
            cin >> n;
        }while(1000 > n && n > 999999999);
        switch(opt){
            case 1: // OPTION 01: Enter the number
                do{
                    cout << "Please, enter the number: ";
                    cin >> n;
                }while(1000 > n && n > 999999999);
                break;
            case 2: // OPTION 02: Check if the number has repeated digits
                while(n != 0){
                    cout << n % 10 << ", ";
                    n /= 10;
                }
                break;
            case 3: // OPTION 03: Count how many digits the number has
                new_n = 0;
                while(n != 0){
                    new_n += 1;
                    n /= 10;
                }
                cout << "Here is the answer: " << new_n << endl;
                break;
            case 4: // OPTION 04: Return the lowest and highest digits of the number
                lowest = -1;
                highest = -1;
                while(n != 0){
                    if(n % 10 > highest){
                        highest = n % 10;
                    }else if(((n % 10) < lowest) || (lowest == -1)){
                        lowest = n % 10;
                    }
                    n /= 10;
                }
                cout << "Here is the answer: lowest: " << lowest << " highest: " << highest << endl;
                break;
            case 5:
                sum = 0;
                while(n != 0){
                    sum += n % 10;
                    n /= 10;
                }
                cout << "Here is the answer: " << sum << endl;
                break;
            case 6:
                sum = 1;
                while(n != 0){
                    if(n % 10 % 2 != 0){
                        sum *= n % 10;
                    }
                    n /= 10;
                }
                cout << "Here is the answer: " << sum << endl;
                break;
            case 7:
                new_n = 0;
                while(n != 0){
                    new_n = new_n * 10 + n % 10;
                    n /= 10;
                }
                cout << "Here is the answer: " << new_n << endl;
                break;
            default:
                cout << "Try another number" << endl;
        }
        // Request to user continue or not
        cout << "\nDo you want continue [Y|N]? "<< endl;
        cin>> cont;
    }while(cont == 'y' || cont == 'Y');
    cout << "\n The program is over!"<< endl;
    return 0;
}
