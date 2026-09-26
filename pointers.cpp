#include<iostream>
using namespace std;
// int main(){
//     int a = 10;
//     int *ptr = &a;

//     float pi =3.14;
//     float *ptr2 = &pi;


//     //Pointer of pointer
//     int **pptr =&ptr;
//     cout << &ptr << " = " << pptr << "\n";

//     cout << sizeof(ptr)<< "\n";
//     cout<< sizeof(ptr2)<< &pi;

//     // cout << &pi << "=" << ptr2 << "\n";
//     // cout << &a <<" = "<< ptr << "\n";
//     return 0;
// }

//Dereferencing operator  - we can get and update the value

// int main(){

//     int a= 10;
//     int *ptr = &a;

//     cout << ptr << "\n";
//     cout << *ptr << "\n";

//     // below we update the value
//     *ptr = 200;
//     cout << *ptr << "\n";
//     return 0;

// }

// null pointer

// int main(){
//     int *ptr = NULL;
//     cout << ptr <<"\n";

//     cout << *ptr << "\n"; //segmentation fault

//     cout << "bye";

//     return 0;
// }


// example of pass by value 
// in  this it change the value first but dont update it 


// void changeA(int param){
//     param = 20;
//     cout << param <<"\n";
// }

// int main (){
//     int a = 10;
//     changeA(a);

//     cout<< a << "\n";
//     return 0;

// }

// example of pass bu reference using pointer

// void changeA(int *ptr){
//     *ptr =20;
//     cout << *ptr <<"\n";

// }

// int main(){
//     int a = 10;
//     changeA(&a);

//     cout << a <<"\n";
//     return 0;
// }



// by reference variable - alternate name of already existing variable

void changeA(int &param){
    param =20;
    cout << param <<"\n";

}

int main(){
    int a = 10;
    changeA(a);

    cout << a <<"\n";
    return 0;
}

