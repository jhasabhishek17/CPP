#include<iostream>
using namespace std;

// void sayHello(){
//     cout<<"Hello Mr. Billionare \n";
// }

// void assistant(){
//     sayHello();
//     cout<<"Work done";
// }
// int main(){
//     assistant();

//     return 0;
// }

// Parameters and Arguments

// int diff (int a, int b =2) in this we have set the default value of b is 2 in case b does not have any value it will take b as 2
// // int diff (int a =2 , int b =2) in this we have set the default value of a but we cannot set the first parameter as default value

// int diff (int a, int b){ // a and b are parameters
//     int diff = a-b;
//     return diff;
// }

// int main(){
//     int s = diff(6,4); // 6 and 4 are arguments
//     cout << "diff is "<< s <<endl;
// }

// product of two number

// int product(int a , int b){
//     return a*b;
// }

// int main(){
//     cout << product(3,4) << endl;
// }

//number is even or odd

// int isEven(int n){
//     if (n%2==0)
//     {
//        return true;
    
// }else {
//     return false;
// }
// }

// int main(){
//     cout << isEven(6) << endl;
// }


// Factorial of a number

// int factorial(int n){
//     int fact=1;
//     for(int i =1; i<=n; i++){
//         fact = fact*i;
//     }
//     cout << "fatorial of n is = "<<fact<<endl;
//     return fact;
// }

// int main(){
//     factorial(0);
//     factorial(2);
//     factorial(3);
//     factorial(4);
//     return 0;
// }


// Number is prime or not 

// bool isPrime(int n ){
//     if (n ==1)
//     {
//         return false;
//     }
//     for(int i=2; i<=n-1; i++){
//         if(n%i==0){//non prime 
//             return false;
//         }
//     }
//     return true;
    
// }

// int main(){
//     cout << isPrime(23) << endl;
//     return 0;
// }


// Binomial coefficient for given n and r

// int factorial(int n){
//     int fact =1;
//     for (int i = 1; i <=n; i++)
//     {
//         fact *= i;
//     }
//     return fact;
    
// }

// int binCoeficient(int n, int r){
//     int val1 = factorial(n);
//     int val2 = factorial(r);
//     int val3 = factorial(n-r);

//     int result = val1/ (val2 * val3);
//     return result;
// }

// int main(){
//    cout << binCoeficient(4,2)<<endl;
//    return 0;

// }

// Function Overloading 

// int sum ( int a , int b){
//     cout <<(a+b) << endl;
//     return a+b;
// }

// double sum(double a , double b){
//     cout << (a+b) << endl;
//     return a+b;
// }

// double sum(double a , double b, double c){
//     cout << (a+b+c) << endl;
//     return a+b;
// }

// int main (){
//     sum(2,3);
//     sum(23.4,23.3);
//     sum(23.4,23.3,38.34);
//     return 0;
// }


// ALL primes in a range of 2 to n

// bool isPrime(int n){
//     if ( n == 1){
//         return false;
//     }
//     for (int i =2; i*i<=n; i++){
//         if (n%i == 0){
//             return false;
//         }
//     }
//         return true;
// }

// void allPrimes(int n){
//     // all primes -> from 2 to n
//     for (int i=2; i<=n; i++){
//       if (isPrime(i)){
//         cout << i << " ";
//       }
//     }
//     cout << endl;
// }

// int main(){
//     allPrimes(50);
//     return 0;
// }
