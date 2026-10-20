#include <iostream>
using namespace std;
int main(){
    // bool isAdult;
    // int age;
    // cout << "enter age: ";
    // cin >> age;
    // if(age >= 18){
    //     isAdult = true;
    // }  else{
    //     isAdult = false;
    // }

    //isAdult = age >= 18? true:false;
    // Larger of two numbers 
    int a = 10;
    int b = 30;
    int largest = a >= b ? a: b;
    cout<<"largest value is " << largest << endl;
    return 0;
}
// variable = condition? statement 1: statement2;