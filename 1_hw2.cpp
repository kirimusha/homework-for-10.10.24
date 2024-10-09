#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int a, b, sum_a = 0, sum_b = 0, kol_a = 0, kol_b = 0, composition_a = 1, sum_even_b = 0, c;

    cout<<"Enter A from 10 to 1000: \t";
    cin>>a;
    cout<<"Enter B from 10 to 1000: \t";
    cin>>b;

    do{
        cout<<"Enter again A from 10 to 1000: \t";
        cin>>a;
        cout<<"Enter again B from 10 to 1000: \t";
        cin>>b;
    }while(a < 10 | b < 10 | a > 1000 | b > 1000);

    for (int i=1; i < (a + 1); i++){
        if ((a % i) == 0){
            sum_a += i;
            kol_a ++;
            if ((i % 2) != 0){
                composition_a = composition_a * i;
            }
        }
    }

    for (int i=1; i < (b + 1); i++){
        if ((b % i) == 0){
            sum_b += i;
            kol_b ++;
            if ((i % 2) == 0){
                sum_even_b += i;
            }
        }
    }

    if (a > b){
        while (b){
            c  = a % b;
            a = b;
            b = c;
        }
        c = a;
    }else{
        while (a){
            c  = b % a;
            b = a;
            a = c;
        }
        c = b;
    }
    cout <<"The sum of the divisors A and B: " << (sum_a + sum_b) << endl;
    cout <<"The product of the number of divisors A and B: " << (kol_a * kol_b) << endl;
    cout <<"The sum of the product of odd divisors A and the sum of even divisors B: " << (composition_a + sum_even_b) << endl;
    if (c== 1){
        cout<<"The numbers are simple together"<<endl;
        return 0;
    }
    cout <<"The largest common divisor of A and B: " << c << endl;
    return 0;

}