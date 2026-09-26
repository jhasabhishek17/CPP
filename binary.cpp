#include<iostream>
using namespace std;


// Binary to Decimal

void binToDec(int binNum){
    int n = binNum;
    int decNum = 0;
    int pow =1; // 2^0 2^1 2^2 ..

    while(n>0){
        int lastDig = n%10;
        decNum += lastDig * pow;
        pow = pow*2;
        n = n/10;
    }
    cout<< decNum << endl;
}

// int main(){
//   binToDec(101);
//   return 0;
// }


// Decimal to Binary

void decToBin(int decNum){
    int n = decNum;
    int pow =1; // 10^0 10^1 10^2..
    int binNum = 0;


    while(n>0){
        int rem = n%2;
        binNum += rem*pow;
        n = n/2;
        pow = pow *10;

    }
    cout <<"binary of " << decNum << " = " << binNum <<endl;
}

int main(){
    binToDec(101);
    decToBin(6);
    return 0;
}