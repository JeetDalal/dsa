#include<bits/stdc++.h>
using namespace std;

int main(){
    //Optimized Insertion Sort
    vector<int> v{2,1,4,5,8,7,9,100,500,700,30,67,909,340};
    for(int i=1;i<v.size();i++){
        int key = v[i];
        int j=i-1;
        while(j>=0 && key<v[j]){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
    for(auto &val : v){
        cout<<val<<" ";
    }

}