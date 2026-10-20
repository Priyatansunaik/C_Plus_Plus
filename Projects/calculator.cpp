#include <iostream>
using namespace std;
int main(){
    int a, b;
    char op;
    cout<< "Enter A :";
    cin >> a ;
    cout << "Enter B :" ;
    cin >> b;
    cout << "Enter operator : ";
    cin >> op;
    // Calculator logic here .
    if(op == '+'){
        cout << "A + B = " << (a+b)<< endl;
    }else if(op =='-'){
        cout<< "A - B = "<< (a-b) << endl;
    }else if(op=='*'){
        cout << "A * B = "<< (a*b) << endl;
    }else if(op == '/'){
        cout << "A / B = "<< (a/b) << endl;
    }else {
        cout << "Invalid operator";
    }

    return 0;
}