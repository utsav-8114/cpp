#include<iostream>
using namespace std;
int main(){
    int x=4;
    for(int i=0;i<=x;i++){
        for(int j=x-1;j>=0;j--){
            cout<<" ";
            
        
        }
        for(int k=0;k<=i;k++){
            cout<<"*"<<" ";
        }
        
        
        cout<< endl;
    }
    return 0;

}