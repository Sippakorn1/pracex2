#include <iostream>
#include <cmath>

using namespace std;

//Write prototype of  sg() here.
double sg(double x,double y);

int main(){
    cout << sg(-2.5,1.1) << "\n";
    cout << sg(1,10000) << "\n";
    cout << sg(8.5,2.4) << "\n";
    cout << sg(0.1,0.0001) << "\n";
    cout << sg(10,0.007) << "\n";
    cout << sg(1,-2) << "\n";
    cout << sg(15,100) << "\n";
    cout << sg(123,5432) << "\n";
}

//Write function definition of  sg() here.
double sg(double x,double y){
    double a,d,max,min;
    if(x<=0 || y<=0){
        a=0;
        return a;
    }   
    else if(x>y){
        max=x,min=y;
        d=max/min;
        }   
        else{
        max=y,min=x;
        d=max/min;
        }
    if(d<=10){
        a=x*y;
        double e= sqrt(a);
        return e;
    }
    else{
        double b=sqrt(x*y),c=sg(x,b)+sg(y,b);
        return c;
    }
}   