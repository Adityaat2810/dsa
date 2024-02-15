#include<bits/stdc++.h>
using namespace std ;

// not pass vector directly as it create copy and has comlexity O(n)
void printVec(vector<int> &v){
    cout<<"size : "<<v.size()<<endl;
    for(int i =0 ; i<v.size();++i){
        //v.size() -> O(1)
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v(10);  //default value of int is 0(prefill 10 values with 0)
    vector<int> v2(10,3); //prefill 10 values with 3

    vector<int> v3 =v2; // v3 is copy of v2 (change in v2 not effect v3 )
    // this copy method has complexity O

    printVec(v);
    printVec(v2);
    v2.push_back(78);
    printVec(v3);
    printVec(v2);


    return 0;
}