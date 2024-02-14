#include<bits/stdc++.h>
using namespace std ;

// sabse ghatiya tarika 
// sorting and returnning last elemnt 

// largest element in array 
// brute force
int largetElementBruteForce(int arr[], int n){
    int max =0 ;
    for(int i=0; i<n ; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    return max;

}

// second largest element in array 
//Brute force
int secondLargestElement(int arr[], int n ){
    sort(arr, arr + n, greater<int>());
    int secLar= 0 ;
    for(int i =1 ; i<n; i++){
        if(arr[i] != arr[0]){
            secLar = arr[i];
            break;
        }

    }
    return secLar;

}

// optimal 
int secLar(int arr[], int n ){
    int largest = arr[0];
    int slargest = -1;

    for(int i =0 ; i< n ; i++){
        if(arr[i]>largest ){
            slargest = largest;
            largest = arr[i];

        }else if(arr[i]<largest && arr[i]>slargest){
            slargest  =arr[i];

        }
    }
    return slargest ; 
}


// check if array is sorted 
bool isSorted(int arr[], int n ){
    for (int i =1; i<n ; i++){
      if(arr[i] >= arr[i-1]){


      }else{
        return false;
      }
      return true ;
    }
   
}

int main(){
    int arr[] ={12,34,4556,7800,679,97,4,3,12,79826728,79826728,66};
    int largest2 = secLar(arr,10);
    cout<<"The 2nd largest elemnt in array is "<<largest2<<endl;

  

}