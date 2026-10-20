#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>=18){
        cout << "You can vote"<< endl;
    }else{
        cout << "You can't vote"<< endl;
    }
    return 0;
}
// else can be written only one time not it will return a error of expected output