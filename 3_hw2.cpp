#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float exponential_function = 0, x, factorial = 1, natural_logarithm = 0, sinn = 0, out = 0;
    int n, opt;
    char cont;
    do{
    // print the menu of options
        cout << "\nSelect an option from [1-6] according to the menu:" <<endl;
        cout << "[1]. Enter the value of the ariable X and the number of members N (from 2 to 20)"<<endl;
        cout << "[2]. Calculate the Maclaurin series for the exponential function"<<endl;
        cout << "[3]. Calculate the Maclaurin series for the natural logarithm function"<<endl;
        cout << "[4]. Calculate the Maclaurin series for the sinusoidal function"<<endl;
        cout << "[5]. Calculate the Maclaurin series for the cosine function"<<endl;
        cout << "[6]. Calculate the Maclaurin series for a rational function"<<endl;
        cout << "---------------------------------------------------"<<endl;
        cout << "Enter option: ";
        cin>> opt;

        switch(opt){
            case 1: 
                cout << "Enter X: ";
                cin>>x;
                cout << "Enter N: ";
                cin>>n;
                while (n < 2 | n > 20){
                    cout << "Enter X: ";
                    cin>>x;
                    cout << "Enter N: ";
                    cin>>n;
                }
                break;
            case 2:
                factorial = 1;
                exponential_function = 0;
                for (int i=0; i <=n; i++){
                    for (int j=1; j <= i; j++){
                        factorial  *= j;
                    }
                    exponential_function = exponential_function + pow(x, i) / factorial;
                }
                cout <<"Result: "<<exponential_function<<endl;
                break;
            case 3: 
                natural_logarithm = 0;
                for (int i=0; i<=n; i++){
                    natural_logarithm = natural_logarithm + (pow(-1, i+1) * pow(x, i)) / i;
                }
                cout <<"Result: "<<natural_logarithm<<endl;
                break;
            case 4:
                out = 0;
                factorial = 1;
                for(int i = 0; i <= n; i++){
                    for(int j = 1; j <= 2 * i + 1; j++){
                        factorial *= j;
                    }
                    out += (pow(-1, i) * pow(x, (2 * i + 1))) / factorial;
                }
                cout << "Answer: " << out << endl;    
                break;
            case 5: 
                out = 0;
                factorial = 1;
                for(int i = 0; i <= n; i++){
                    for(int j = 1; j <= 2 * i; j++){
                        factorial *= j;
                    }
                    out += (pow(-1, i) * pow(x, (2 * i))) / factorial;
                }
                cout << "Answer: " << out << endl;    
                break;
            case 6:
                out = 1;
                if(abs(x) < 1){
                    int coof = 2, poww = 1;
                    for(int i = 0; i <= n; i++){
                        out += coof * pow(x, poww);
                        coof += 1;
                        poww += 1;
                    }    
                }
                cout << "Answer: " << out << endl;
                break;
            default:
                cout << "Try another number" << endl;
                break;
        }
        // Request to user continue or not
        cout << "\nDo you want continue [Y|N]? "<< endl;
        cin>> cont;
    }while(cont == 'y' || cont == 'Y');

    cout << "\n The program is over!"<< endl;
    return 0;
}