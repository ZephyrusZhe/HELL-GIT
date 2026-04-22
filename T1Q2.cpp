#include <iostream>
using namespace std;
int main(){
    float weight,height,bmi;
    cout <<"Get weight in KG :";
    cin  >> weight;

    cout <<"Get height in meter :";
    cin >> height;

    bmi=weight/(height*height);
    cout <<"\nYour BMI = " <<bmi<<endl;
    cout <<"\nYour weight category is: ";
    if (bmi<18.5){
        cout <<"Underweight";
    }
    else if (bmi>=18.5 &&bmi<25){
        cout <<"Normal weight";
    }
    else if (bmi>=25 && bmi <30){
        cout <<"Overweight";
    }
    else {
        cout <<"Obese";
    };
    
    return 0;
}