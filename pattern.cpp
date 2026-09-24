#include<iostream>
using namespace std;

// int main(){
//     // outer loop
//     for (int i = 1; i <= 4; i++){
//     //inner loop
//     for (int j = 1; j <= 4; j++){
//         //work
//         cout << i << " ";
//     }
//     cout << endl;     
//     }
    
//     return 0;
// }

// Print star patern

// int main(){
//     int n =4;
//     for (int i =1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Print inverted star pattern

// int main(){
//     int n = 5;
//     for (int i = 1; i <= n; i++){
//         for (int j =1; j <= (n-i+1); j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Print half pyramid pattern

// int main(){
//      int n = 5;
//      for (int i = 1; i <= n; i++ ){
//         for (int j=1; j <= i; j++){
//             cout << j<< " ";
//         }
//         cout << endl;
//      }

//     return 0;
// }


// Print character pyramid

// int main (){
//     int n = 5;
//     char ch = 'A';
//     for ( int i=1; i<=n; i++){
//         for ( int j=1; j<=i; j++){
//             cout << ch++ <<" ";//post increment :- first it prints the previous value then it return the increasing value
            
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Hollow Rectangle Pattern

// int main(){
//     int n=5;
//     for(int i =1; i<=n; i++){
//         cout <<"*";//first star
//         for(int j=1; j<=n-1; j++){
//             if (i == 1 || i == n){
//                 cout<<"*";
//             }else{
//                 cout <<" ";
//             }
//         }
//         cout << "* "<< endl;//last
//     }
//     return 0;
// }

// Inverted and Rotated Half-Pyramid

// int main(){
//     int n =5;
//     for (int i=1; i<=n; i++){
//         //spaces
//         for(int j=1; j<=n-i; j++){
//             cout << " ";
//         }
//         //stars
//         for(int j=1; j<=i; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;

// }


// Print Floyd's triangle

// int main(){
//     int n= 6;
//     int num =1;
    
//     for(int i =1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout << num++ << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// Diamond pattern

// int main (){
//     int n=6;
//     for(int i=1; i<=n; i++){
//         //spaces
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         //stars
//         for (int j=1; j<= 2*i-1; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     // 2nd pyramid
//     for(int i=n; i>=1; i--){
//         //spaces
//         for (int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         //stars
//         for (int j=1; j<=2*i-1; j++){
//             cout<<"*";
//         }
//         cout << endl;
//     }

//     return 0;
// }



// Butterfly pattern


int main(){
    int n=4;
    //upper half
    for (int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int j=1; j<=2*(n-i); j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<< "*";
        }
        cout<<endl;
    }
     for (int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int j=1; j<=2*(n-i); j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<< "*";
        }
        cout<<endl;
        
    }
       return 0;
}
    