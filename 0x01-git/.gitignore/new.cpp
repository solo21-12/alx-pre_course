~
#include <iostream>
using namespace std;
double add(double, double);
double sub(double, double); 
double mul(double, double); 
double div(double, double);
double result;
int main(){
    double num1,num2;
    char zx;
    cout<<"enter the number ";cin>>num1>>num2;
    cout<<"choose the operation ";cin>>zx;
    cout<<"the result of your operation is ";
    if(zx=='+'){
        add(num1,num2);
        
    }
    else if(zx=='-'){
        sub(num1,num2);
         
    }
    else if(zx=='*'){
        mul(num1,num2);
        
    }
    else 
    {
        div(num1,num2);
}
}
double add(double num1, double num2){
    result=num1+num2;
    cout<<result;
    return 0;
}
double sub(double num1, double num2){
    result=num1-num2;
    cout<<result;
    return 0;

}
double mul(double num1, double num2){
    result=num1*num2;
    cout<<result;
    return 0;
   
}
double div(double num1, double num2){