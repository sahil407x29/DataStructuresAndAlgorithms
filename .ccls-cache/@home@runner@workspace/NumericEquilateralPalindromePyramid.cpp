#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter no of times";
  cin>>n;

  for(int row=0;row<n;row++){
    for(int col=0;col<n-1-row;col++){
      // to print spaces
      cout<<" ";
    }
    for(int col=0;col<row+1;col++){
      // to print forward printing
      cout<<col+1;
      
      
    }
    for(int col=row;col>=1;col--){
      cout<<col;
    }
      
    

    for(int col=0;col>=1;col--){
      cout<<col+1;
    }
    
   cout<<endl; }
}