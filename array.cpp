#include<iostream>
using namespace std;

// int main(){
//      int marks[5] ={1,2,3,4,5}; // 0 to 4
//      int n = sizeof(marks) / sizeof(int); // here we print the length of the array 
//      cout<< sizeof(marks) / sizeof(int) << endl;
//     return 0;
// }


// Taking array as a input and output

// int main(){
//     int arr[25] = {3,2,3,5,2,4};
//     int n = sizeof(arr)/sizeof(int);

//     for(int i =0; i<n; i++){
//         cout << arr[i] << " ";

//     }
//     cout << endl;
//     return 0;
// }



//  Below we are taking the input of array and then print the array
// int main(){
//     int n;
//     cout << "enter length of an array : ";
//     cin>>n;
//     int arr[n];
//     // int n = sizeof(arr)/sizeof(int);

//     for(int i =0; i<n; i++){
//         cin >>arr[i];

//     }

//     for(int i =0; i<n; i++){
//         cout << arr[i] << ",";

//     }
//     cout << endl;
//     return 0;
// }

// largest of array

// int main(){
//     int arr[] = {5,2,12,7,2};
//     int n = sizeof(arr)/sizeof(int);

//     int max = arr[0];
//     for(int i=0; i<=n; i++){
//         if(arr[i] > max){
//             max = arr[i];
//             cout << "assigning val " << arr[i] << "to max \n";
//         }
//     }
//     cout << "max = " << max << endl;
//     return 0;
// }

// void printArr(int nums[],int n){
//     for(int i=0; i<n; i++){
//         cout << nums[i] << ",";
//     }
//     cout << endl;
    
// }

// int main(){
//     int arr[] = {5,2,12,7,2};
//     int n = sizeof(arr)/sizeof(int);
//     cout << "array size = " << sizeof(arr) << endl; //20
//     printArr(arr,n);
//     return 0;

// }


// Linear search 

// int linearSearch(int *arr, int n, int key){
//     for (int i=0; i<n; i++){
//         if(arr[i] == key){
//             return i;
//         }
//     }

//     return -1;
// }

// int main(){
//     int arr[] = {2,4,6,8,10,12,14,16};
//     int n = sizeof(arr)/sizeof(int);

//     cout << linearSearch(arr, n, 10) <<endl;
//     return 0;
// }


// Reverse an array
// with extra space

void printArr(int *arr, int n){
    for (int i=0; i<n; i++){
        cout<< arr[i] << ",";
    }
}


// int main(){
//     int arr[] = {5,4,3,9,2};
//     int n = sizeof(arr)/sizeof(int);


//     // it is requiring extra space
//     int copyArr[n];
//     for (int i=0; i<n; i++){
//         int j=n-i-1;
//         copyArr[i] = arr[j];
//     }
//     for(int i=0; i<n; i++){
//         arr[i] = copyArr[i];
//     }

//     printArr(arr,n);
//     return 0;
// }


// without extra space (2 pointer approach)

// int main(){
// int arr[] = {5,4,3,9,2};
// int n = sizeof(arr)/sizeof(int);


// int start =0, end =n-1;

// while(start < end){
//     // int temp = arr[start];
//     // arr[start] = arr[end];
//     // arr[end] = temp;
    
//     swap(arr[start],arr[end]); // this is the in built function of swaping

//     start++;
//     end--;
// }

//     printArr(arr,n);
//     return 0;

// }


// Binary search - it is only for sorted array

// int binSearch(int *arr, int n, int key){
//     int st = 0, end = n-1;

// while (st <= end){
//     int mid = (st + end)/2;
//     if(arr[mid] == key){
//         return mid; //key found
//     }else if (arr[mid] < key){ // 2nd half
//      st = mid+1;
//     }else {
//         //1st half
//         end = mid-1;
//     }
// }

//  return -1;
// }

// int main(){
//     int arr[] ={2,4,6,8,10,12,16};
//     int n = sizeof(arr)/sizeof(int);

//     cout << binSearch(arr,n,12) << endl;
//     return 0;
// }

// Print subarrays


// void printSubarrays(int *arr, int n){
//     for(int start =0; start<n; start++){
//         for (int end=start; end<n; end++){
//            // cout <<"(" <<start << "," <<end << ")";
//            for (int i =start; i<=end; i++){
//             cout << arr[i];
//            }
//            cout << ",";
//         }
//         cout << endl;
//     }
// }

// int main(){
//     int arr[5] ={1,2,3,4,5};
//     int n =5;

//     printSubarrays(arr,n);
//     return 0;
// }



// Max subarray sum
// Brute force approach


// void maxSubarraySum1( int *arr, int n){
//     int maxSum = INT_MIN;

//     for ( int start = 0; start<n; start++){
//         for (int end = start; end<n; end ++){
//             int curSum =0;
//             for (int i = start; i<=end; i++){
//                 curSum += arr[i];
//             }
//             cout << curSum << ",";
//             maxSum = max(maxSum,curSum);
//         }
//         cout<<endl;
//     }
//     cout << "maximum subarray sum = " << maxSum << endl;
// }


// int main(){
//       int arr[5] ={2,-3,6,-5,4};
//       int n = sizeof(arr) /sizeof(int);

//       maxSubarraySum1(arr, n);
//     return 0;
// }


// 2nd method better approach

//  void maxSubarraySum2( int *arr, int n){
//     int maxSum = INT_MIN;

//     for ( int start = 0; start<n; start++){ // start =2
//         int curSum =0;
//         for (int end = start; end<n; end ++){ // end = 2,3,4,5
//             curSum += arr[end];           
//             maxSum = max(maxSum,curSum);
//         }
//     }
//     cout << "maximum subarray sum = " << maxSum << endl;
// }


// int main(){
//       int arr[5] ={2,-3,6,-5,4};
//       int n = sizeof(arr) /sizeof(int);

//       maxSubarraySum2(arr, n);
//     return 0;
// }



// kadane's Algorithm

//  void maxSubarraySum3( int *arr, int n){
//     int maxSum = INT_MIN;
//     int curSum = 0;

//     for( int i =0; i<n; i++){
//         curSum += arr[i];
//         maxSum = max(curSum , maxSum);
//         if (curSum <0){
//             curSum=0;
//         }
//     }    
//          cout << "maximum subarray sum = " << maxSum << endl;


//     }

//     int main(){
//       int arr[5] ={2,-3,6,-5,4};
//       int n = sizeof(arr) /sizeof(int);

//       maxSubarraySum3(arr, n);
//     return 0;
// }


// Buy and Sell stocks





int main(){

    return 0;
}