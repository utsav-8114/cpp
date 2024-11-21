#include<bits/stdc++.h>
using namespace std;
// You are using GCC
void heapify(int arr[], int n, int i) {
    //Type your code here
    int smallest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n and arr[smallest]>arr[left]){
        smallest=left;
    }
    if(right<n and arr[smallest]>arr[right]){
        smallest=right;
    }
    if(smallest!=i){
        swap(arr[i],arr[smallest]);
        heapify(arr,n,smallest);
    }
    
    
}

void buildMinHeap(int arr[], int n) {
    //Type your code here
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
    
}

void heapsort(int arr[],int n){
    buildMinHeap(arr,n);
    int size=n;
    while(size>0){
        swap(arr[0],arr[size-1]);
        size--;
        heapify(arr,size,0);
    }
}

void displayHeap(int arr[], int n) {
    //Type your code here
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    buildMinHeap(arr, n);
    
    displayHeap(arr, n);
    cout<<"sorted array: ";
    heapsort(arr,n);
    displayHeap(arr,n);
    
    return 0;
}
