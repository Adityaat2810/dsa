#include<bits/stdc++.h>
using namespace std;

int main(){

    pair<int,int> p={12,13};

    cout<<"first element of pair is : "<<p.first<<endl;
    cout<<"second element of pair is : "<<p.second<<endl;

    // nested pair 
    pair<pair<int,int>,int> q;
    q={{13,34},6};
    cout<<q.first.first<<" "<<q.first.second<<" "<<q.second<<endl;

    // pair aur array 
    int a[]={1,2,3,4,5};
    int b[]={6,7,8,9,10};

    pair<int,int> p_array[5];
    for(int i=0;i<5;i++){
        p_array[i]=make_pair(a[i],b[i]);
    }
    
    // printing the array 
    for(int i=0;i<5;i++){
       cout<<" "<<p_array[i].first<<","<<p_array[i].second;
    }
    cout<<endl;

    // vectors    ** vector<datatype>name;  //dynamic size 
    vector<int> vec;
    vec.push_back(1);   //adds elements at last
    vec.pop_back();      //removes last element
    int n ;
    cin>>n;

    cout<<"start entering elements of vector"<<endl;
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }

    for(int i = 0 ; i<n  ;i++){
        cout<<vec[i]<<" ";
    }

    //vector of pair
    vector<pair<int,int>> vect;



    return 0;
}