// FUNCTIONS
#include<iostream>
using namespace std;

//    void sayHello(){
//        cout<<"hello world"<<endl;
//    }
//     int main(){
//         sayHello();
    
//     return 0;
// }

// int sum(int a, int b){      
//     return a+b;
// }

// int main (){
//     int c = sum(2,4);
//     cout<<"sum is : "<<c<<endl;
//     return 0;
// }

// Product of function
// int prod(int a, int b){      
//     return a*b;
// }


// int main (){
//     int c = prod(2,4);
//     cout<<"prod is : "<<c<<endl;
//     return 0;
// }

//  check even or odd
// bool isEven(int a){
//     if(a%2==0){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// int main(){
//     int a;
//     cout<<"enter number : "<<endl;
//     cin>>a;
    
//     if(isEven(a)){
//         cout<<"number is even"<<endl;
//     }else{
//         cout<<"number is odd"<<endl;
//     }
    
//     return 0;
// }

// factorial of number
// int factorial(int n){
//  int fact=1;
//     for(int i =1;i<=n;i++){
//         fact=fact*i;
//     }
//     cout<<"factorial of "<<n<<" is : "<<fact<<endl;
//     return fact;
// }
// int main(){
//     int n;
//     cout<<"enter number : "<<endl;
//     cin>>n;
//     factorial(n);
//     return 0;
// }


// Scope 
// int num=25;

//  void sum(int a , int b){
//     cout<<num<<endl;
//     int s =a+b;
//     cout << s << endl;
//  }

//  int main (){
//     sum(5,4);
//     int s = 10 ;
//     cout <<num<< endl;
//     return 0;
//  }

// WAF to print if a number is prime or not 

// bool isPrime(int n){
//     if(n==1){
//         return false;
//     }
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     int n;
//     cout<<"enter number : "<<endl;
//     cin>>n;
    
//     if(isPrime(n)){
//         cout<<"number is prime"<<endl;
//     }else{
//         cout<<"number is not prime"<<endl;
//     }
    
//     return 0;
// }



// WAF to find the binomial coefficient for given n&r

// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact*=i;
//     }
//     return fact;
// }

// int binomialCoefficient(int n,int r){
//     int num = factorial(n);
//     int den = factorial(r)*factorial(n-r);
//     return num/den;
// }

// int main(){
//     int n,r;
//     cout<<"enter n : "<<endl;
//     cin>>n;
//     cout<<"enter r : "<<endl;
//     cin>>r;
    
//     int result = binomialCoefficient(n,r);
//     cout<<"binomial coefficient is : "<<result<<endl;
    
//     return 0;
// }

// function overloading

int sum(int a,int b){
    return a+b;
}
double sum(double a,double b){
    return a+b;
}
int main(){
    int a=2,b=3;
    double c=2.5,d=3.5;
    
    cout<<"sum of int is : "<<sum(a,b)<<endl;
    cout<<"sum of double is : "<<sum(c,d)<<endl;
    
    return 0;
}