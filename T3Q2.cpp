# include <iostream>
using namespace std;

void swap (int &num1, int &num2);

int main (){
    int x=3,y=4;
    cout <<"\n x= "<<x;
    cout <<"\n y= "<<y;
    swap(x,y);
    cout <<"\n After swapping ";
    cout <<"\n x= "<<x;
    cout <<"\n y= "<<y;
}
void swap(int &num1, int &num2){
    int t1;
    t1= num1;
    num1 =num2;
    num2=t1;
}
void swap2(int* num1, int* num2){
    int t2 = *num1;
    * num1 =* num2;
    *num2 = t2;
}
