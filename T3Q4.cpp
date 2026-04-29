#include <iostream>
#include <ctime>
using namespace std;

void displayVector(float *a_array, int numElem);
void getInputIntoVector(float *a_array, int numElem);

int main()
{
    int size;
    //float store[]
    cout<< "Enter how many number to enter >>";
    cin >> size;
    float *store = new float[size];
    
    getInputIntoVector(store, size);

    cout << "\nNumber of elements in array = " << size << endl;
    cout << "\nDisplay data in array" << endl;
    displayVector(store,size);
    return 1;
}

void getInputIntoVector(float *a_array, int numElem){
    for(int i=0; i<numElem; i++){
        cout<<"ENter element A["<<i<<"]";
        cin>> a_array[i];
    }
}
void displayVector(float *a_array, int numElem){
    for (int i=0; i< numElem;i++){
        cout << a_array[i]<<" ";
    }
    cout <<endl;
}