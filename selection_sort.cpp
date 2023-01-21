#include<bits/stdc++.h>
using namespace std;

int main(){
    //Optimized Bubble Sort
    vector<int> v{2,1,4,5,8,7,9,100,500,700,30,67,909,340};

    for(int i=0;i<v.size()-1;i++){
        bool swapped = false;
        for(int j=0;j<v.size()-1-i;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                swapped = true;
            }
        }
        if(swapped == true){
            break;
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}