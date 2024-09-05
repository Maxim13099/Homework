#include <iostream>
#include <cmath>
//#define DEBUG
using namespace std;
int main(){
    double start = 1;
    double end = 2;
    double half = 0;
    int step = 1;
    while((end - start) > 0.0001){
        half = start + (end - start)/2;
        ((0.1*half*half - half*log(half)) > 0) ? (start = half) : (end = half);
#ifdef DEBUG
        cout << step << ": " << half << endl;
        step++;
#endif
    }cout << "answer: " << half << endl;
}
