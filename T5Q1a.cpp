#include <iostream>

using namespace std;

class Fraction
{
    private:
        int numerator;
        int denominator;

    public:
            // Default constructor
        Fraction() {
        numerator = 0;
        denominator = 1;
        }

        Fraction(int a_name, int a_denom){
            numerator= a_name;
            denominator= a_denom;

        
        }

        void display() {
            cout << numerator << "/" << denominator << endl;

        }
    
        Fraction add(Fraction f){
            int n,d;
            n= (this -> numerator*f.denominator) +(f.numerator* this-> denominator);
            d= this -> denominator* f.denominator;
            return Fraction (n,d);
        }

        Fraction multiply(Fraction f){
            int n,d;
            n= (this -> numerator*f.numerator) ;
            d= this -> denominator* f.denominator;
            return Fraction (n,d);
        }
         
};

int main(){


    Fraction f1(3, 4);
    Fraction f2(1, 2);
    Fraction result ;
    
    cout << "f1: ";
    f1.display();
    
    cout << "f2: ";
    f2.display();
    
    cout << "f1 + f2: ";
    result = f1.add(f2);
    result.display();
    
    cout << "f1 * f2: ";
    result = f1.multiply(f2);
    result.display();

    return 0;
}