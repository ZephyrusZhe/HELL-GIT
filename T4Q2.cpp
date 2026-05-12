#include <iostream>
using namespace std;

class TEMPERATURE
{
    private:
    double Ctemp;
    double Ftemp;

    public:
        TEMPERATURE(){
            Ctemp=0;
            Ftemp=32;
        }

        TEMPERATURE(char unit, double value) {
            if (unit == 'C' || unit == 'c') {
                Ctemp = value;
                Ftemp = (value * 9.0 / 5.0) + 32;
            }
            else if (unit == 'F' || unit == 'f') {
                Ftemp = value;
                Ctemp = (value - 32) * 5.0 / 9.0;
            }
            else {
                
                Ctemp = 0;
                Ftemp = 32;
            }
        } 

        double getC(){
            return Ctemp;
        }
        double getF(){
            return Ftemp;
        }
        void equal(TEMPERATURE other) {
            Ctemp = other.Ctemp;
            Ftemp = other.Ftemp;
        }
};

int main(){

    TEMPERATURE t1('C',100);
    TEMPERATURE t2('F',100);

    cout << "t1 = " << t1.getC() << " C\n";
    cout << "t1 = " << t1.getF() << " F\n";
    cout << "t2 = " << t2.getC() << " C\n";
    cout << "t2 = " << t2.getF() << " F\n";
    t1.equal(t2);
    cout << "After assigning t2 to t1" << endl;
    cout << "t1 = " << t1.getC() << " C\n";
    cout << "t1 = " << t1.getF() << " F\n";
    return 0;
}