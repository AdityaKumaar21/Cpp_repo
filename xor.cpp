#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the numbers of elements here"<<"\t";
    int n,i,num,ans=0;
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Element "<<i+1<<endl;
        cin>>num;
        ans=ans^num;
    }
    cout<<"Unique element was "<<ans;
    return 0;
}