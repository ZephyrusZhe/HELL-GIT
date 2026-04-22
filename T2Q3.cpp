#include <iostream>
using namespace std;
void drawBox (int w);
void drawfullline (int w);
void drawemptyline (int w);

int main(){
    int width;;
    cout <<"\n ENTER THE SIDE OF THE SQUARE BOX (1-16)";
    cin >> width;
    drawBox(width);
    return 0;
}
void drawBox (int w){
    if (w==1){
        cout<<"*"<<endl;
        return;
    }
    drawfullline(w);
    for(int i=0;i<w-2;i++){

     drawemptyline(w);    
    }
   
    drawfullline(w);
}

void drawfullline (int w){
    for (int i=0;i<w;i++){
        cout << "* ";
    }
    cout<< endl;
}
void drawemptyline(int w){
    cout<< "* ";
    for (int i=0;i<(w-2);i++){
        cout<< "  ";
    }
    cout << "* "<< endl;
}