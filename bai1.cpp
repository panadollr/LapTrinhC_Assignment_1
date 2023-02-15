#include <iostream>
using namespace std;

void distance_traveled(int speed,int hour_traveled){
    if(speed>1 && speed>0){
     for(int i=1;i<=hour_traveled;i++){
    cout << i << "    " << speed*i << "\n";
}   
    }
}
int main() 
{
    while(true){
       int speed,hour;
    cout << "\nNhap toc do: ";
    cin >> speed;
    cout << "Nhap gio di: ";
    cin >> hour;
   distance_traveled(speed,hour); 
    }
}