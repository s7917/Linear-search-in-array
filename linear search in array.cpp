//--------------------linear search in array-------------------------
#include<iostream>
using namespace std;

int main(){
    int A[10] , n=10;
    cout<<"enter the numbers"<<endl;

    for(int i=0 ; i<n ; i++){
        cin>>A[i];
    }

    int key;

    cout<<"enter the key"<<endl;
    cin>>key;

    for(int i=0 ; i<n ; i++){
        if(A[i]==key){
            cout<<"found at index "<<i<<endl;
            return 0;
        }    
    }
    cout<<"not found";
    


    return 0;
}
