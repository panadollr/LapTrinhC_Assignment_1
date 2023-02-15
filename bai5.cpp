#include <iostream>
using namespace std;

void sortScores(double* scores, int numScores) {
  for (int i = 0; i < numScores; i++) {
    for (int j = i+1; j < numScores; j++) {
      if (*(scores+i) > *(scores+j)) {
        double temp = *(scores+i);
        *(scores+i) = *(scores+j);
        *(scores+j) = temp;
      }
    }
  }
}

double calcAverage(double* scores, int numScores) {
  double total = 0.0;
  for (int i = 0; i < numScores; i++) {
    total += *(scores+i);
  }
  return total / numScores;
}

int main() {
  int numScores;
  double* scores;
  double average;
  
  cout << "Nhap so luong diem: ";
  cin >> numScores;
  scores = new double[numScores];

  for (int i = 0; i < numScores; i++) {
    do {
      cout << "Nhap diem #" << (i+1) << ": ";
      cin >> *(scores+i);
    } while (*(scores+i) < 0);
  }

  // Sap sep diem theo thu tu tang dan
  sortScores(scores, numScores);

  // Tinh trung binh diem 
  average = calcAverage(scores, numScores);

  cout << "Diem da sap xep:" << endl;
  for (int i = 0; i < numScores; i++) {
    cout << *(scores+i) << " ";
  }
  cout << endl;
  cout << "Diem trung binh: " << average << endl;

  return 0;
}

