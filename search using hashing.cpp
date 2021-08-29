#include <iostream>
#include <math.h>
using namespace std;
#define MAX 1000

bool hashTable[MAX+1][2];

bool search(int x){
    if(x>=0){
        if(hashTable[x][0] == 1 ){
            return true;
        }else{
            return false;
        }
    }else{
        x = abs(x);
        if(hashTable[x][1] == 1 ){
            return true;
        }else{
            return false;
        }
    }
}

void insert(int a[], int n){
    for(int i=0;i<n;i++ ){
        if(a[i]>=0){
            hashTable[a[i]][0] = 1;
        }
        else{
            hashTable[abs(a[i])][1] = 1;
        }
    }
}

int main(){
    int n=0,arr[100];
    cout<<"Enter the no. of elements";
    cin>>n;
     cout<<"Enter the value";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    insert(arr, n);
    
    int find;
    cout<<"Element to find??  ";
    cin>>find;
    if(search(find)){
        cout<<"Element is present"<<endl;
    }else{
        cout<<"Element is not present "<<endl;
    }
    
}
