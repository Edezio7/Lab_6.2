#include<iostream>
using namespace std;
int main(){
    int numberOfElements=0;
    int*dynamicArray=nullptr;
    cout<<"How many number would you like to type? "<<endl;
    cin>>numberOfElements;
    dynamicArray =new int[numberOfElements];
    if(dynamicArray==nullptr){
        cout<<"Error:memory could be allocated"<<endl;
    }
    else 
    for(int i =0;i<numberOfElements;i++){
        cout<<"Enter number:"<<endl;
        cin>>dynamicArray[i];}
        cout<<"You have entered: "<<endl;
        for(int j=0;j<numberOfElements;j++){
            cout<<dynamicArray[j]<<" ";
        }
    return 0;
}