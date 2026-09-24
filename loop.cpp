#include<iostream>
using namespace std;


//Basic syntax of for loop
// int main(){
//     int num;
// //. Variable of loop is also accesible inside the loop we cant access it outside the loop if we want to use we have to declare before the loop
//     for (num = 1; num <=5 ; num++)
//     {
//         cout << num <<" ";
//     }

//     cout<<endl;
//     cout <<"last value of num is " << num << endl;
//     return 0;
// }

// Infinite loop - infinite loop are those loop which never ends 
// Iteration - running of loop is called iteration 


//Print numbers from 1 to n

int main (){
     
    int n;
    cout << "enter your n :";
    cin >> n;
    for (int i =1; i<=n; i++){
        cout << i << " ";
    }
    cout << endl ;

    return 0;

}

// Logic of sum of n natural number is 

// int main (){
// int sum =0;
// for (int i =1; i<=n; i++){
//     sum+=i;
// }
// cout << "sun is " << sum <<endl;
// return 0;
// }


// While loop

int main (){
    int i = 1;
    while (i < 3){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}

// Print Square pattern

int main(){
    for(int i =1;i<=4;i++){
        cout<<"****"<<endl;
    }

    return 0;
}


// Print the sum of digit of a number using while loop

int main(){
    int n = 1098;
    int digSum = 0;

    while (n >0)
    {
        int lastdig = n%10;
        digSum += lastdig;
        n =n/10;
    }
    cout << "sum = " << digSum <<endl;   
    return 0;
}


// do while loop 

int main(){
    int n;
    do
    {
        cout << "enter number : ";
        cin >> n;
        if (n%10 == 0){
            break;
        }
        cout<< "Your entered "<< n << endl;
    } while (true);
    
    return 0;

}

// Continue statement - to skip an iteration

int main(){
    for (int i =1; i<=10; i++){
        if ( i == 3){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;

}