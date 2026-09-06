#include <iostream>
#include <iomanip>
using namespace std;

// extern "C" int printf(const char*, ...);
// int main(){
//     printf("Abhishek jha");
//     return 0;
// }

// Data Types
// int main(){
//     int age= 25;
//     int marks = -200;
//     char grade = 'A'; 
//     bool isadult = true;
//     float cgpa= 9.4;
//     double price = 98.983342424524; // it exacts print the decimal value 
//     float price2 = 98.983342424524; // it print the approxiamation
//     
//     cout<<setprecision(12)<<" price = "<<price<<endl;
//     cout<<setprecision(12)<<" price 2 "<<price2<<endl;
//     
//     cout<<"size of int = " <<sizeof(int)<<endl;
//     cout<<"size of char = " <<sizeof(char)<<endl;
//     cout<<"size of bool = " <<sizeof(bool)<<endl;
//     cout<<"size of float = " <<sizeof(float)<<endl;
//     return 0;
// }

// taking input 
// int main(){
//     int age;
//     cout<<" enter your age : ";
//     cin>>age;
//     
//     cout<<"your age is "<<age<<endl;
//     return 0;
// }

// sum of two number a and b
// int main(){
//     int a, b;
//     cout<<"enter a : ";
//     cin>>a;
//     
//     cout<<"enter b :";
//     cin>>b;
//     
//     int sum = a+b; // similarly we can do with other functions 
//     cout<<"sum = "<<sum<<endl; 
//     
//     return 0;
// }

// printing average marks 
// int main(){
//     int eng,math,science;
//     cout<<" enter eng marks: ";
//     cin>>eng;
//     
//     cout<<" enter math marks: ";
//     cin>>math;
//     
//     cout<<" enter science marks: ";
//     cin>>science;
//     
//     int avg=(eng+math+science)/3;
//     cout<<"avg marks of all subject is :"<<avg<<endl;
//     
//     return 0;
// }

// Operators 
// making constant
// #define X 25 // this is the macros , macros are generally used for making data type symbolic constants
// int main (){
//     const float pi = 3.14 ; // by using of const keyword we fix or reserve the value
//     const float g = 9.8; // we should initialize const while declaring it.
//     
//     long long x;
//     // ll x; // typedef long long ll;
//     return 0;
// }

// TypeCasting :- it is used to convert one data type to another 
// Hierarchy of Data Type conversion is :- bool>>char>>int>>float>>double
// Implicit Conversion
// int main(){
//     // cout << (10/3)<<endl; //3
//     // cout<< (10/3.0)<<endl; //3.333
//     
//     cout<<('A'+1)<<endl;
//     cout<<('A'-1)<<endl;
//     cout<<('a'-1)<<endl;
//     return 0;
// }

// Explicit Conversion
// int main(){
//     float pi=3.14;
//     cout<<(int)(pi)<<endl;
//     cout<<(int)('A')<<endl; // here we tell the what type we want 
//     cout<<((float)10/3)<<endl;
//     cout<<(char)('A'+1)<<endl;
//     return 0;
// }

// int main(){
//     cout<<(bool)3+2; // here bool 3 is true that mean it is 1 and ans is 3 and note that bool 0 is 0 
//     cout << ( 23.5 + 2 + 'A');
//     return 0;
// }

// Operators :- symbols that perform operations like (arithmetic :- addn,sub,mult,div,modulo)
// int main(){
//     int a=5;
//     int b=3;
//     cout<<"+"<<(a+b)<<endl; 
//     cout<<"-"<<(a-b)<<endl; 
//     cout<<"*"<<(a*b)<<endl; 
//     cout<<"/"<<(a/b)<<endl; 
//     cout<<"%"<<(a%b)<<endl; 
//     
//     return 0;
// }

// Unary Operator
// int main(){
//     int a=3;
//     int b = a++;//post increment (use previous value and then update it )
//     cout<<"a= "<<a<<endl;
//     cout<<"b = "<<b<<endl;
//     // ++a;//Pre increment //(update then use)
//     // cout<<"a= "<<a<<endl;
//     // a--;
//     // cout<<"a = "<<a<<endl;
//     
//     return 0;
// }

// Relational Operator >,<,>=,<=,!=
// int main(){
//     int a=3;
//     int b=7;
//     cout<<(a>b)<<endl;
//     cout<<(a<b)<<endl;
//     cout<<(a==b)<<endl;
//     
//     return 0;
// }

// Logical Operators &&,||,!
// int main(){
//     cout<<((3<5)&&(10>5))<<endl;
//     cout<<((3<5)||(10>5))<<endl;
//     return 0;
// }

// int main(){
//     int age=53;
//     
//     if(age>=18){
//         cout<<"can vote"<<endl;
//     }
//     else{
//         cout<<"cannot vote"<<endl;
//     }
//     
//     return 0;
// }

// int main(){
//     float marks;
//     cout<<"enter your marks: ";
//     cin>>marks;
//     
//     if (marks>=33){
//         cout<<"pass"<<endl;
//     }
//     else{
//         cout<<"fail"<<endl;
//     }
//     return 0;
// }

// int main(){
//     int a,b;
//     cout<<"enter a: ";
//     cin>>a;
//     cout<<"enter b: ";
//     cin>>b;
//     
//     if(a>b){
//         cout<<"a is greater than b"<<endl;
//     }
//     else{
//         cout<<"b is greater than a "<<endl;
//     }
//     return 0;
// }

// Else if statement :- in this we add 2 condition
// int main(){
//     int marks=85;
//     
//     if(marks>=85){
//         cout<<"A"<<endl;
//     }else if (marks>=80){ //here we use else if because it knows the previous condition
//         cout<<"B"<<endl;
//     }else{
//         cout<<"C"<<endl;
//     }
//     return 0;
// }

// Income tax calculator 
// int main(){
//     int income;
//     float tax;
//     cout<<"enter income (in lakhs)";
//     cin>>income;
//     
//     if (income<5){
//         tax=0;
//     }else if(income<= 10){
//         tax=0.2*income;
//     }else{
//         tax=0.3*income;
//     }
//     cout<<"Tax = "<<(tax * 100000)<<endl;
//     return 0;
// }

// Largest of 3 numbers
// int main(){
//     int a,b,c;
//     cout<<"enter number a : "<<endl;
//     cin>>a;
//     cout<<"enter number b : "<<endl;
//     cin>>b;
//     cout<<"enter number c : "<<endl;
//     cin>>c;
//     
//     if(a>=b&&a>=c){
//         cout<<"Largest is a = "<<a<<endl;
//     }else if (b>=c){
//         cout<<"Largest is b = "<<b<<endl;
//     }else{
//         cout<<"Largest is c = "<<c<<endl;
//     }
//     return 0;
// }

// Ternary OPERATOR :- it is the way to write if else statement in short form 
// Syntax:- variable = condition?statement1:statement 2
// For ex:- bool isAdult = (age>=18)?true:false;
// int main(){
//     bool isAdult;
//     int age;
//     cout<<"enter age: "<<endl;
//     cin>>age;
//     
//     if(age>=18){
//         isAdult=true;
//     }else{
//         isAdult=false;
//     }
//     isAdult = age>=18?true:false;
//     
//     // Largest of two numbers
//     int a= 10;
//     int b= 5;
//    
//     int largest = a>=b ? a:b;
//     cout<<"largest is "<<largest<<endl;
//    
//     return 0;
// }

// Switch Statement 
// int main(){
//     int day = 1;
//     cout<<"enter day : ";
//     cin>>day;
//     
//     switch(day){
//     case 1: cout<<"Monday"<<endl;
//             break;
//     case 2: cout<<"Tuesday"<<endl;
//             break;
//     case 3: cout<<"wednesday"<<endl;
//             break;
//     case 4: cout<<"Thursday"<<endl;
//             break;
//     case 5: cout<<"Friday"<<endl;
//             break;
//     case 6: cout<<"Saturday"<<endl;
//             break;
//     case 7: cout<<"sunday"<<endl;
//             break;
//     default : cout<<"Invalid day"<<endl;
//     }
//     return 0;
// }

// Building Calculator
// int main(){
//     int a,b;
//     char op;
//     
//     cout<<"enter a : ";
//     cin>>a;
//     cout<<"enter b : ";
//     cin>>b;
//     cout<<"enter operator: ";
//     cin>>op;
//     
//     if(op == '+'){
//         cout<<"a+b = "<<(a+b)<<endl;
//     }else if(op=='-'){
//         cout<<"a-b= "<<(a-b)<<endl;
//     }else if(op=='*'){
//         cout<<"a*b= "<<(a*b)<<endl;
//      }else if (op=='/'){
//          cout<<"a/b= "<<(a/b)<<endl;
//      } else {
//          cout<<"Invalid Operator";
//      }
//     return 0;
// }

// Nested Loop:- Loops inside loops 
// outer loop tell us number of rows and inner loop tell us number of columns
// int main() {
//     for(int i=1; i<=4; i++){
//         for(int j=1; j<=4;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Star pattern
// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Inverted star pattern
// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=(n-i+1);j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Half Pyramid Pattern
// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// character pyramid pattern
// int main(){
//     int n=4;
//     char ch='A';
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Hollow Rectangle 
// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         cout<<"*";
//         for(int j=1;j<=n-1;j++){
//             if(i==1||i==n){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<"*"<<endl;
//     }
//     return 0;
// }

// Inverted and rotated half pyramid
// int main(){
//     int n=4;
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<n-i;j++){
//             cout<<" ";
//         }
//         for (int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// floyds triangle
// int main(){
//     int n=4;
//     int num =1;
//     for (int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<num++<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Diamond Pattern
int main() {
    int n = 5;

    // Upper part
    for (int i = 1; i <= n; i++) {
        // Spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part
    for (int i = n - 1; i >= 1; i--) {
        // Spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
