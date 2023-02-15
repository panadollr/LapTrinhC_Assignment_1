#include <iostream>
using namespace std;

double findMedian(int *arr, int n) {
    int midIndex = n / 2;
    if (n % 2 == 0) {
        int midIndex1 = midIndex - 1;
        int midIndex2 = midIndex;
        return (arr[midIndex1] + arr[midIndex2]) / 2;
    } else {
        return arr[midIndex];
    }
}

void sort(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                std::swap(*(arr + j), *(arr + j + 1));
            }
        }
    }
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
sort(arr, n);
    double median = findMedian(arr, n);
    std::cout << "Median of the array is: " << median << std::endl;
    return 0;
    }
}