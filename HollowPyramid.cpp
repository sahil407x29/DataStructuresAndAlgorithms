// #include <iostream>
// using namespace std;
// int main(){
//   int n;
//   cout << "enter number of times";
//   cin >>n;

//   // for Upper Pyramid 
//   // for Outer loop
//   for(int row=0;row<n;row++){
//     // to print spaces 
//     for(int col=0;col<n-row-1;col++){
//       cout<<" ";
      
//     }
//     // to print characters 
//     for(int col=0;col<2*row+1;col++){
//       if(col==0){
//         cout << "*";
//       }
//       else if(col==2*row){
//         cout<< "*";
//       }
//       else {
//         cout << " ";
//       }
//     } cout << endl;
//   }
 

//   // for Lower Pyramid 
//   // for Outer loop
//   for(int row=0;row<n;row++){
//     // for inner loop
//     // for spaces 
  
//   for(int col=0;col<row;col++){
//       cout<<" ";
//     }
  
//   for(int col=0;col<2*n-2*row-1;col++){
//     if(col==0){
//       cout<< "*";
//     }
//     else if(col==2*n-2*row-2){
//       cout << "*";
//     }
//     else {
//       cout << " ";
//     }
//   }
//     cout<<endl;
//   }
// }