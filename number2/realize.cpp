#include <iostream>
#include "realize.h"
using namespace std;

void FillArray(int arr[], const int N){
    for (int i = 0; i < N; i++){
        arr[i] = rand()%20;
    }
}

void HoldArray(int arr[], int mas[], const int N){
    for (int i = 0; i < N; i++){
        mas[i] = arr[i];
    } 
}

void ShowArray(int arr[], const int N){
    cout << "Array = ";
    for (int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void MinMax(int arr[], const int N){
    int Min = 0;
    int Max = 0;
    for (int i = 0; i < N; i++){
        if (arr[Min] > arr[i]){
           Min = i;     
        }
    }
    cout << "MinIndex = " << Min << "   ";
    for (int i = 0; i < N; i++){
        if (arr[Max] < arr[i]){
           Max = i;     
        }
    }
    cout << "MaxIndex = " << Max << endl;
}

void EvenNumbers(int arr[], const int N){
    cout << "EvenNumbers = ";
    for (int i = 0; i < N; i++){
        if (!(arr[i]&1)){
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

void TwoDimensionalArray(int arr[], const int N){
    int COL = 5;
    int ROW = N / COL;
    int ar[ROW][COL];
    int temp = 0;
    cout << "TwoDimensionalArray = " << endl;
    for (int i = 0; i < ROW; i++){
        for (int z = 0; z < COL; z++){
	        ar[i][z] = arr[temp];
	        temp++;
	        cout << ar[i][z] << "\t";
	    }
        cout << endl;
    }
}

void AverageValue(int arr[], const int N){
    int temp = 0;
    for (int i = 0; i < N; i++){
        temp += arr[i];
    }
    cout << "AverageValu = " << (double)temp / N << endl;
}

void ArrayWithoutRepeats(int arr[], int N){
    cout << "ArrayWithoutRepeats = ";
    for (int i = 0; i < N; i++){
        for (int z = i+1; z < N; z++){
            if (arr[i] == arr[z]){
                N--;
                for (int j = z+1; j <= N; j++){
                arr[j-1]=arr[j];
                
                }
            }
        }
    }
  for (int w = 0; w < N; w++)
    {
      cout << arr[w] << " ";
    }
    cout << endl;
}

void IdenticalElements(int arr[], int N){
    bool index = false;
    for (int i = 0; i < N; i++){
        for (int z = i+1; z < N; z++){
            if (arr[i] == arr[z]){
                index = true;
            }
        }
    }
    if (index){
        cout << "IdenticalElements = true" << endl;
    }
    else{
        cout << "IdenticalElements = false" << endl;
    }
}

void Sort(int mas[], int N){
    int COL = 5;
    int ROW = N / COL;
    int ar[ROW][COL];
    int temp = 0;
    cout << "SortTwoDimensionalArray = " << endl;
    for (int i = 0; i < ROW; i++){
        for (int z = 0; z < COL; z++){
	        ar[i][z] = mas[temp];
	        temp++;
	    }
    }
for (int k = 0; k < ROW; k++){
  for (int l = 0; l < COL; l++){  
    for (int i = 0; i < ROW; i++){
      for (int j = 0; j < COL; j++){
        if (i+1 == ROW && j+1 == COL){
          continue;
        }
        else{
          if(j+1 == COL && ar[i][j] > ar[i+1][0]){
            swap(ar[i][j], ar[i+1][0]);
        }
          else{
            if(ar[i][j] > ar[i][j+1]){
              swap(ar[i][j], ar[i][j+1]);
            }
          }
          }
        }
      }
    }
  }
  for (int i = 0; i < ROW; i++){
        for (int z = 0; z < COL; z++){
            cout << ar[i][z] << "\t";
	    }
	    cout << endl;
    }
}
