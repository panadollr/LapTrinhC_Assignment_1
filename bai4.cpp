#include <iostream>
using namespace std;

int* reverseArray(int arr[], int size) {
    int* revArr = new int[size];
    for (int i = 0; i < size; i++) {
        revArr[i] = arr[size - i - 1];
    }
    return revArr;
}

int main() 
{
     int n;
    while(true){
    cout << "\nNhap so luong phan tu cua mang : ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout << "Nhap phan tu "<< i << " :";
        cin >> arr[i];
    }

     int* revArr = reverseArray(arr, n);

    cout << "Ham da dao nguoc : " ;
    for (int i = 0; i < n; i++) {
        std::cout << revArr[i] << " ";
    }
    }
}