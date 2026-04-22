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
    return 0;
}