#include <iostream>
#include <cmath>
using namespace std;

void quadraticEquation(int a,int b,int c){
float delta=pow(b,2)-4*a*c;
float x1,x2;
if(delta <0){
    cout << "Phuong trinh vo nghiem";
}else if(delta==0){
    cout << "Phuong trinh co 1 nghiem kep x1 = x2 = " << -b/(2*a);
}else{
    x1=((-b)+sqrt(delta))/(2*a);
    x2=((-b)-sqrt(delta))/(2*a);
    cout << "Phuong trinh co 2 nghiem phan biet x1 = " << x1 << ", x2 = " << x2;
}
}
int main() 
{
    while(true){
       int a,b,c;
    cout << "\nNhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
     cout << "Nhap c: ";
    cin >> c;
   quadraticEquation(a,b,c); 
    }
}