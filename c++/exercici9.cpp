#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int gran(int a, int b){
    if (a>b){return a;}
    else if (a<b){return b;}
    else{return 0;}
}

int petit(int a, int b){
    if (a<b){return a;}
    else if (a>b){return b;}
    else{return 0;}
}

int main(){
    int a, b, c;
    cout<<"Introdueix tres nombres separats per espais: "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    int aux = gran(a, gran(b,c));
    int aux2 = petit(a, petit(b,c));
    cout<<"El major és "<<aux<<" i el més petit és " <<aux2<<endl;
}
