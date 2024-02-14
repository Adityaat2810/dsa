#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int n){
    if(n>-10 && n<10){
        return n;
    }
    int sum = 0;
    while(n!=0){
        int lastDigit = n%10;
        sum = sum*10+lastDigit;
        n=n/10;

    }
    return sum;
}

bool checkPalindrome(int n ){
    int rev = reverseNumber(n);
    if(rev == n){
        return true;
    }else{
        return false;
    }
}

bool armStrong(int n){
    int orignal =n;
    int sum =0;
    while(n!=0){
        int lastDigit = n%10;
        sum = sum +(lastDigit*lastDigit*lastDigit);
        n = n/10;

    }
    if(sum ==orignal){
        return true;
    }else{
        return false;
    }

}

int countNumberOfDigit(int n ){
    
    int counter=0;

    while (n != 0){
        int lastDigit = n % 10;
        counter++;
        n = n / 10; 
    }

    return counter;

}

int main(){
    // counting number of digits
   
    int n;
    cout<<"enter the number: "; 
    cin>>n;

    bool check =armStrong(n);

    cout<<check<<endl;
    
    return 0; 
}  
