//-------------------------------------- square-------------------------------------------------  (1)
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<n;col++){
//             cout<<"*";
//         } 
//         cout<<endl; 
//         }
// }
// ------------------------------------------hollow square--------------------------------------  (2)
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<n;col++){
//               if(row==0||row==n-1||col==0||col==n-1){
//             cout<<"* ";
//         } 
//              else{
//                cout<<"  ";
//            }
//         }
//         cout<<endl; 
//         }
// }
// -------------------------------------rectangle-------------------------------------------------  (3)
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n;
//     cin>>m;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<m;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }


// }

// --------------------------------------hollow rectangle-------------------------------------------  (4)
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<m;col++){
//             if(row==0||row==n-1||col==0||col==m-1){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;

//     }
// }
// ----------------------------------------half pyramid----------------------------------------------   (5)
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<row+1;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// ---------------------------------------inverted half pyramid--------------------------------------  (6)
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<n-row;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// -----------------------------------------hollow half pyramid---------------------------------------  (7)
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         int totalColumns=row+1;
//         for(int col=0;col<row+1;col++){
//             if(row==0||row==n-1||col==0||col==totalColumns-1){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
// }
// -------------------------------------------hollow inverted half pyramid-------------------------------  (8)
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<n-row;col++){
//             if(row==0||row==n-1||row==3||col==0||col==n-row-1){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
            
//         }
//         cout<<endl;
//     }
// }
// ----------------------------------------------numeric half pyramid---------------------------------------- (9)
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<row+1;col++){
//             cout<<col+1<<" ";
            
//         }
//         cout<<endl;
//     }
// }
// ---------------------------------------numeric hollow half pyramid----------------------------------------- (10)
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<row+1;col++){
//             if(row==0||row==1||row==n-1||col==0||col==row+1-1){
//             cout<<col+1<<" ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//             cout<<endl;
//         }
// }
// --------------------------------------------------numeric inverted pyramid----------------------------------   (11)
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<n-row;col++){
//             cout<<col+1<<" ";
//         }
//         cout<<endl;
//     }
// }
//---------------------------------------numeric hollow inverted half pyramid-----------------------------------    (12)
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<n-row;col++){
//             if(row==0||row==3||row==n-1||col==0||col==n-row-1){
//             cout<<col+1<<" ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//             cout<<endl;
//         }
// }
// ---------------------------------------------------full pyramid------------------------------------------------   (13)
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(i/ nt row=0;row<n;row++){
//         for(int col=0;col<n-row-1;col++){
//             cout<<" ";
//         }
//         for(int col=0;col<row+1;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// --------------------------------------------------------inverted full pyramid------------------------------------   (14)
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<row;col++){
//             cout<<" ";
//         }
//         for(int col=0;col<n-row ;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// ----------------------------------------------------------------------diamond-------------------------------------- (15)

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<n-row-1;col++){
//             cout<<" ";
//         }
//         for(int col=0;col<row+1;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }


//     for(int row=0;row<n;row++){
//         for(int col=0;col<row;col++){
//             cout<<" ";
//         }
//         for(int col=0;col<n-row ;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// ------------------------------------------------------hollow pyramid--------------------------------------------------------   (16)
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<n-row-1;col++){
//             cout<<" ";
//          }
//          for(int col=0;col<row+1;col++){
//             if(row==0||row==1||row==n-1||col==0||col==row+1-1){
//             cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//          }
//          cout<<endl;
//     }
// 
// ---------------------------------------------------hollow inverted pyramid------------------------------------------------------  (17)
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<row;col++){
//             cout<<" ";
//         }
//         for(int col=0;col<n-row ;col++){
//             if(row==0||row==n-1||col==0||col==n-row-1){
//             cout<<"* ";
//         }
//         else{
//             cout<<"  ";
//         }
//     }
//     cout<<endl;
// }
// }
// ------------------------------------------------------------mix pyramid------------------------------------------------------ (18)
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
        
//         for(int col=0;col<n-row;col++){
//             cout<<"* ";
//         }
//         for(int col=0;col<row*2+1;col++){
//             cout<<"  ";
//         }
//          for(int col=0;col<n-row;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(int row=0;row<n;row++){
//         for(int col=0;col<row+1;col++){
//             cout<<"* ";
//         }
//         for(int col=0;col<2*(n-row)-1;col++){
//             cout<<"  ";
//         }
//         for(int col=0;col<row+1;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// ---------------------------------------------------------------fancy latter--------------------------------------------- (19)
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<2*row+1;col++){
//             if(col%2==0){
//             cout<<row+1<<" ";
//         }
//         else{
//             cout<<"* ";
//         }
        
//     }
//     cout<<endl;
// }
// }
// -------------------------------------------------------------------full fancy 1 2 pattern-------------------------------  (20)
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<2*row+1;col++){
//             if(col%2==0){
//               cout<<row+1;
//             }
//             else{
//                 cout<<"* ";
//             }
//         }
//         cout<<endl;
//     }
//   for(int row=0;row<n;row++){                               -----------------------error in this pattern 
//     for(int col=0;col<2(n-row)-1;col++){
//         if(col%2==0){
//             cout<<n-1;
//         }
//         else{
//             cout<<"* ";
//         }
//     }
//     cout<<endl;
//   }
// }
// -------------------------------------numeric palindrome equilater------------------------------------------ (21)
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<n-row-1;col++){
//             cout<<"  ";
//         }
// //        // Print the first half of the palindrome
//         for (int col = 0; col <= row; col++) {
//             cout << col + 1 << " ";
//         }
        
//         // Print the second half of the palindrome
//         for (int col = row - 1; col >= 0; col--) {
//             cout << col + 1 << " ";
//         }
        
//         // Move to the next line after each row
//         cout << endl;
//     }
//     return 0;
// }
// --------------------------------------------solid half diamond--------------------------------------------(22)
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<row+1;col++){
//             cout<<"* ";
//         }cout<<endl;
//     }
//     n--;
//         for(int row=0;row<n;row++){
//         for(int col=0;col<n-row;col++){
//             cout<<"* ";
            
//         }
//         cout<<endl;

//     }
// }
// ------------------------------------------------fancy pattern #1----------------------------------------------------(23)
//  #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<n+3-row;col++){
//             cout<<"* ";
//         }
//         for(int col=0;col<(row*2)+1;col++){
//             if(col%2==0){
//                cout<<row+1<<" "; 
//             }
//             else{
//                cout<<"* ";
//             }
//         }
//         for(int col=0;col<n+3-row;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//         }
        
        
    
// }
// ---------------------------------------------------fancy pattern #2-----------------------------------------------------------(24)
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int c=1;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<2*row+1;col++){
//            if(col%2==0){
//             cout<<c;
//             c++;
//            }
//            else{
//             cout<<"* ";      
//            }
//         }
//          cout<<endl;
//         }
//     for(int row=0;row<n;row++){
//         for(int col=0;col<2*(n-row)-1;col++){
//            if(col%2==0){
//             cout<<c;
//             c++;
//            }
//            else{
//             cout<<"* ";
//            }
//         }
//         cout<<endl;
    
//         }
    
// }
