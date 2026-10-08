#include <iostream>
using namespace std;
int main(){
    float eng;
    float sci;
    float math;
    cout<<"Enter your english marks : ";
    cin>>eng;
    cout<<"Enter your math marks :";
    cin>>sci;
    cout<<"Enter your maths marks: ";
    cin>>math;
    int avg =(eng +math+sci)/3;
    cout<<"avg marks = "<<avg<<endl;

    return 0 ;

}