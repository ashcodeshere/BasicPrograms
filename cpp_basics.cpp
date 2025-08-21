#include<bits/stdc++.h>
using namespace std;


// Day 1(23/12/24)
////First Program
// #include <iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cout<<"x : ";
//     cin>>x;
//     cout<<"y : ";
//     cin>>y;
//     cout<<x<<endl;
//     cout<<y<<endl;
//     cout<<"Ram Ram C++ World"<<" k haal se laagdaar";
//     return 0;
// }
// ____________________________________________________________________________________________________
// //Program to swap 2 numbers
// #include <iostream>
// using namespace std;
// int main(){
//     int x,y,z;
//     cout<<"x : ";
//     cin>>x;
//     cout<<"y : ";
//     cin>>y;
//     z=x;
//     x=y;
//     y=z;
//     cout<<"x : "<<x<<endl;
//     cout<<"y : "<<y<<endl;
//     return 0;
// }
// ________________________________________________________________________________________________
// //Sum of two Numbers
// #include<iostream>
// using namespace std;
// int main(){
//     int num1,num2;
//     cout<<"num1:";
//     cin>>num1;
//     cout<<"num2:";
//     cin>>num2;
//     cout<<"Sum of the numbers is : "<<num1+num2<<endl;
// }
// __________________________________________________________________________________________________
// //W.A.P. to take input from user for C.P. and S.P. and Calculate Loss and profit
// #include<iostream>
// using namespace std;
// int main(){
//     int cp,sp;
//     cout<<"Cost Price of Product : ";
//     cin>>cp;
//     cout<<"Selling Price of product : ";
//     cin>>sp;
//     if (cp>sp){
//         cout<<"There is a Loss of : "<<cp-sp<<endl;    
//     } else if (sp>cp){
//         cout<<"There is a Profit of : "<<sp-cp<<endl;
//     } else {
//         cout<<"Neither Loss nor Profit";
//     }
// }
// _________________________________________________________________________________________________
// //Find maximum of three numbers (using nested loops)
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"a : ";
//     cin>>a;
//     cout<<"b : ";
//     cin>>b;
//     cout<<"c : ";
//     cin>>c;
//     if (a>b){
//         if (a>c){
//             cout<<a<<" is greatest";    
//         }else if (c>a){
//             cout<<c<<" is greatest";
//         }else{
//             cout<<a<<" is greatest";
//         }
//     }else if (b>a){
//         if (b>c){
//             cout<<b<<" is greatest";    
//         }else if (c>b){
//             cout<<c<<" is greatest";
//         }else{
//             cout<<"Both "<<b<<" and "<<c<<" are equal";
//         }
//     }else if (a==b && b==c){
//         cout<<"All inputs are equal";
//     }else if (a==b && b>c){
//         cout<<b<<" is greatest";
//     }else if (a==b && b<c){
//         cout<<c<<" is greatest";
//     }else if (a>b && b==c){
//         cout<<a<<" is greatest";
//     }else if (a<b && b==c){
//         cout<<b<<" is greatest";
//     }
//     else{
//         cout<<"Error";
//     } 
// }
// ____________________________________________________________________________________________________________________________________________
// //Find maximum of three numbers (using if-else stmts)
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"a : ";
//     cin>>a;
//     cout<<"b : ";
//     cin>>b;
//     cout<<"c : ";
//     cin>>c;    
//     if (b>a && b>c){
//         cout<<b<<" is greatest";
//     }else if (a>b && a>c){
//         cout<<a<<" is greatest";
//     }else if (c>a && c>b){
//         cout<<c<<" is greatest";
//     }else if (a==b && b==c){
//         cout<<"All inputs are equal";
//     }else if (a==b && b>c){
//         cout<<b<<" is greatest";
//     }else if (a==b && b<c){
//         cout<<c<<" is greatest";
//     }else if (a>b && b==c){
//         cout<<a<<" is greatest";
//     }else if (a<b && b==c){
//         cout<<b<<" is greatest";
//     }else if (a==c && b>c){
//         cout<<b<<" is greatest";
//     }else if (a==c && b<c){
//         cout<<c<<" is greatest";
//     }
//     else{
//         cout<<"Error";
//     }
// }
// __________________________________________________________________________________________________________________________________________
// //Design a calculator to perform basic arithmetic operations (+,-,/,*,%) ----> Using switch case
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     char c;
//     cout<<"Operand1 : ";
//     cin>>a;
//     cout<<"Operand2 : ";
//     cin>>b;
//     cout<<"Enter an Operator(+,-,/,*,%) : ";
//     cin>>c;
//     switch (c)
//     {
//     case '+':
//         cout<<a+b<<endl;
//         break;
//     case '-':
//         cout<<a-b<<endl;
//         break;
//     case '*':
//         cout<<a*b<<endl;
//         break;
//     case '/':
//         cout<<a/b<<endl;
//         break;
//     case '%':
//         cout<<a%b<<endl;
//         break;
//     default:
//         cout<<"Error";
//     }
// }
// __________________________________________________________________________________________________________________________________________
// //W.A.P. to print the value if it is even and divisible by 3 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number : ";
//     cin>>n;
//     if (n%6==0){
//         cout<<n<<" is divisible by both 2 & 3";
//     }else{
//         cout<<"not divisible";
//     }
// }
//___________________________________________________________________________________________________________________________________________
// //W.A.P. to print the day based on the day number (using switch)
// #include<iostream>
// using namespace std;
// int main(){
//     char day_number;
//     cout<<"Enter day number(1-7): ";
//     cin>>day_number;
//     switch (day_number)
//     {
//     case '1':
//         cout<<"Monday";
//         break;
//     case '2':
//         cout<<"Tuesday";
//         break;
//     case '3':
//         cout<<"Wednesday";
//         break;
//     case '4':
//         cout<<"Thursday";
//         break;
//     case '5':
//         cout<<"Friday";
//         break;
//     case '6':
//         cout<<"Saturday";
//         break;
//     case '7':
//         cout<<"Sunday";
//         break;                                            
//     default:
//         break;
//     }
// }
// __________________________________________________________________________________________________________________________________________
// //Print first 5 multiples of 5 which are also multiples of 7
// #include<iostream>
// using namespace std;
// int main(){
//     int c=0;
//     int num=1;
//     while(c<5){
//         if(num%5==0 && num%7==0){
//             cout<<num<<" ";
//             c++;   
//         }
//         num++;
//     }
//     cout<<endl;
// }
// _________________________________________________________________________________________________
// //Print the sum of the stream of N integers in the input (using do-while loop)
// #include<iostream>
// using namespace std;
// int main(){
//     int n,sum=0,count=0;
//     cout<<"Enter Number of integers: ";
//     cin>>n;
//     cout<<"Enter "<<n<<" integers: "<<endl;
//     do{
//         int num;
//         cin>>num;
//         sum+=num;
//         count++;
//     }while(count<n);
//     cout<<"The sum of the entered integers is : "<<sum<<endl;
//     return 0;
// }
// ________________________________________________________________________________________________
// //Print all the values b/w 1 to 50 except for the multiples of 3
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=50;i++){
//         if(i%3==0){
//             continue;
//         }else{
//             cout<<i<<" ";
//         }
//     }
// }
// --------------------------------------------------------------------------------------------------
// Day 2(24/12/24)
//Problems on loops-1
//Pattern printing 
// //(1) Rectangle Pattern Printing
// #include<iostream>
// using namespace std;
// int main(){
//     int l,w;
//     cout<<"Enter length(Rows) : ";
//     cin>>l;
//     cout<<"Enter width(Columns) : ";
//     cin>>w;
//     for (int i=0; i<l;i++){
//         for (int j=0; j<w; j++){
//             cout<<"*";
//         }
//     cout<<endl;
//     }
// }
// ___________________________________________________________________________________________________
// //(2) Hollow Rectangle
// #include<iostream>
// using namespace std;
// int main(){
//     int l,w;
//     cout<<"Enter length(Rows) : ";
//     cin>>l;
//     cout<<"Enter width(Columns) : ";
//     cin>>w;
//     for(int i=1; i<=l;i++){
//         for(int j=1;j<=w;j++){
//             if ((j==1 || j==w || i==1 || i==l)){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
// __________________________________________________________________________________________________
// //(3)(i) Triangular Pattern
// #include<iostream>
// using namespace std;
// int main(){
//     int l;
//     cout<<"Enter length(Rows) : " ;
//     cin>>l;
//     for (int i=1;i<l;i++){
//         for (int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }    
// //(3)(ii) Triangular Pattern(Mirror triangle)
// #include<iostream>
// using namespace std;
// int main(){
//     int r;
//     cout<<"Enter rows:";
//     cin>>r;
//     for (int i=r;i>=1;i--){
//         for (int j=1;j<=i;j++){
//             cout<<"*";
//         }
//     cout<<endl;
//     }
// }
// //(3)(iii) Triangular Pattern(Pyramid)
// #include<iostream>
// using namespace std;
// int main(){
//     int r;
//     cout<<"Enter rows:";
//     cin>>r;
//     for (int i=1;i<=r;i++){
//         for (int j=1;j<=r-i;j++){
//             cout<<" ";
//         }
//         for (int k=1;k<=i;k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
//Practice more----------------------------------------------------------------------------
//Problems on loop-2
// //Count the no. of digits for a give number n
// #include<iostream>
// using namespace std;
// int main(){
//     int n,c=0;
//     cout<<"Enter Digits : ";
//     cin>>n;
//     while(n>0){
//         c++;
//         n/=10;
//     }
//     cout<<c<<endl;
// }
// //Reverse the digits of a number 
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter Digits : ";
//     cin>>x;
//     cout<<"Reverse of "<<x;
//     int lastdigit,rev=0;
//     while(x!=0){
//         lastdigit=x%10;       // gives last digit
//         rev=(rev*10)+lastdigit; // reversing digit
//         x/=10;              // removes last digit
//     }cout<<" is "<<rev<<endl;
// }
//More to practice--------------------------------------------------------------------------------
//Functions
// //Method - 1
// #include<iostream>
// using namespace std;
// void welcome();
// int main(){
//     welcome();
//     cout<<"Program Executed"<<endl;
// }
// void welcome() {
//     cout<<"Ram Ram Laagdaar"<<endl;
// }
// //Method - 2
// #include<iostream>
// using namespace std;
// void welcome(){
//     cout<<"Ram Ram laagdar"<<endl;
// }
// int main(){
//     welcome();
//     cout<<"Program executed successfully"<<endl;
// }
// __________________________________________________________________________________________________
// Arrays - 1
// //Printing all the elements of an array(using for loop)
// #include<iostream>
// using namespace std;
// int main(){
//     int arr_int[]={1,2,3,4,5};
//     int y=sizeof(arr_int[0]),x=sizeof(arr_int);
//     int len=x/y;
//     for(int idx=0;idx<len;idx++){
//         cout<<arr_int[idx]<<"\t";
//     }
//     cout<<"Size of array is : "<<x;
// }
// //Printing all the elements of an array(using for each loop)
// #include<iostream>
// using namespace std;
// int main(){
//     int arr_int[]={1,2,3,4,5,6,};  //Prints Emojis(Smiling and cards)
//     for(char ele: arr_int){
//         cout<<ele<<"\t";
//     }
// }
// //Printing all the elements of an array(using while loop)
// #include<iostream>
// using namespace std;
// int main(){
//     int arr_int[]={1,2,3,4,5};
//     int y=sizeof(arr_int[0]),x=sizeof(arr_int);
//     int idx=0,len=x/y;
//     while(idx<len){
//         cout<<arr_int[idx]<<"\t";
//         idx++;
//     }
// }
// //Taking input for an array(using for loop)
// #include<iostream>
// using namespace std;
// int main(){
//     int n_ele;
//     cout<<"Enter the number of elements : ";
//     cin>>n_ele;
//     cout<<"Enter "<<n_ele<<" elements : ";
//     int arr_int[n_ele];
//     for(int idx=0;idx<n_ele;idx++){
//         cin>>arr_int[idx];                        //Taking Input
//     }
//     int y=sizeof(arr_int[0]),x=sizeof(arr_int);
//     int idx1=0,len=x/y;
//     for(idx1;idx1<len;idx1++){
//         cout<<arr_int[idx1]<<"\t";                     //Taking Output
//     }
// }
// //Calculate the sum of all the elements in an array
// #include<iostream>
// using namespace std;
// int main(){
//     int n_ele,idx=0,sum=0;
//     cout<<"Enter number of elements : ";
//     cin>>n_ele;
//     int arr_int[n_ele];
//     cout<<"Enter "<<n_ele<<" elements : ";
//     for(idx;idx<n_ele;idx++){
//         cin>>arr_int[idx];
//         sum+=arr_int[idx];
//     }
//     cout<<"Given Array : ";
//     for(int idx1;idx1<n_ele;idx1++){
//         cout<<arr_int[idx1]<<"\t";                   
//     }
//     cout<<"Sum of given array : "<<sum;
// }
// //Find the maximum value from the array
// #include<iostream>
// using namespace std;
// int main(){
//     int n_ele;
//     cout<<"Enter the number of elements : ";
//     cin>>n_ele;
//     cout<<"Enter "<<n_ele<<" elements : ";
//     int arr_int[n_ele];
//     int max_ele=-1;
//     for(int idx=0;idx<n_ele;idx++){
//         cin>>arr_int[idx];                        //Taking Input
//         if(arr_int[idx]>max_ele){
//             max_ele=arr_int[idx];
//         }else{
//             continue;
//         }
//     }cout<<"Maximum Element is : "<<max_ele;
// }
// //Find the element in the array(Using Linear Search)
// #include<iostream>
// using namespace std;
// int findTarget(int arr[] ,int len,int target){
//     for (int idx1=0;idx1<len;idx1++){ 
//         if(arr[idx1]==target){
//             return idx1;
//             break;
//         }else{
//             return -1;
//         }
//     }    
// }
// //Target Value Question
// int main(){
//     int n_ele;
//     cout<<"Enter the number of elements : ";
//     cin>>n_ele;
//     cout<<"Enter "<<n_ele<<" elements : ";
//     int arr_int[n_ele];
//     for(int idx=0;idx<n_ele;idx++){
//         cin>>arr_int[idx];                                //Taking Input
//     }
//     int target_val=0; 
//     cout<<"Enter Target Value :";
//     cin>>target_val;
//     int res=0;
//     res=findTarget(arr_int,n_ele,target_val);
//     if (res!=-1){
//         cout<<target_val<<" is present at : "<<res;
//     }else{
//         cout<<target_val<<" is not present in the array";
//     }
// }
//---------------------------------------------------------------------------------------------------
// Day 3 (25/12/24)
// //Creating a vector and printing its elements
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number of elements : ";
//     cin>>n;
//     vector<int>vec_name(n);
//     cout<<"Enter "<<n<<" elements : ";
//     int idx=0,idx1=0;
//     for (idx;idx<n;idx++){
//         int ele;
//         cin>>ele;
//         vec_name.push_back(ele);
//     }cout<<"Elements in vector : ";
//     while(idx1<n){
//         cout<<vec_name[idx1]<<"\t";
//         idx1++;
//     }
// }
// //Find the difference between the sum of elements at even indices to tha sum of elements at odd indices
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n,odd_sum=0,even_sum=0;
//     cout<<"Enter number of elements : ";
//     cin>>n;
//     vector<int>vec_name(n);
//     cout<<"Enter "<<n<<" elements : ";
//     int idx=0,idx1=0;
//     for (idx;idx<n;idx++){
//         if(idx%2==0){
//             int ele;
//             cin>>ele;
//             even_sum+=ele;
//             vec_name.push_back(ele);
//         }else{
//             int ele;
//             cin>>ele;
//             odd_sum+=ele;
//             vec_name.push_back(ele);

//         }
//     }if(even_sum>odd_sum){
//         cout<<"Difference b/w sum of Even and Odd digits : "<<even_sum-odd_sum;
//     }else if (odd_sum>even_sum){
//         cout<<"Difference b/w sum of digits at Even and Odd indices : "<<odd_sum-even_sum;
//     }else{
//         cout<<"0(As sum of digits at even indices is equal to sum of digits at odd indices)";
//     }
// }
//More practice questions needed--------------------------------------------------------------------
// //Given a vector with 0 and 1 as elements sort this vector using Two Pointers approach
// #include<iostream>
// #include<vector>
// using namespace std; 
// void SortZerosandOnes(vector<int> &v){
//     int left_ptr=0;
//     int right_ptr=v.size()-1;
//     while (left_ptr<right_ptr){
//         if(v[left_ptr]==1 && v[right_ptr]==0){
//             swap(v[left_ptr], v[right_ptr]);
//             left_ptr++;
//             right_ptr--;
//         }else if (v[left_ptr]==1){
//             left_ptr++;
//         }else if (v[right_ptr]==0){
//             right_ptr--;
//         }
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter number of elements : ";
//     cin>>n;
//     vector<int>vec_name(n);
//     cout<<"Enter "<<n<<" elements (0 or 1 only): ";
//     for (int idx=0;idx<n;idx++){
//         cin>>vec_name[idx];
//     }
//     SortZerosandOnes(vec_name);
//     cout<<"sorted_arr : ";
//     for(int num : vec_name){
//         cout<<num<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
//Prefix Sum Problems
// //Given an array of integers 'a',  W.A.P. in C++ to move all the even integers at the beginning followed by odd integers. The relative order of odd or even integers does not matters . Return any array that satisfies the condition. 
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> rearrangeArray(vector<int> &vec){
//     vector<int> even;
//     vector<int> odd;
//     for(int num : vec){
//         if(num%2==0){
//             even.push_back(num);
//         }else{
//             odd.push_back(num);
//         }
//     }
//     even.insert(even.end(),odd.begin(),odd.end());
//     return even;
// }
// int main(){
//     int n;
//     cout<<"Enter number of elements : ";
//     cin>>n;
//     vector<int> vec(n);
//     cout<<"Enter the elements : ";
//     for (int idx=0;idx<n;idx++){
//         cin>>vec[idx];
//     }
//     vector<int>res =rearrangeArray(vec);
//     cout<<"Rearranged array : ";
//     for(auto num : res){
//         cout<<num<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
// //Given an integer array 'a' sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> vectsquare(vector<int> &vect){
//     int x=vect.size();
//     vector<int> result(x);
//     int left=0;
//     int right=x-1;
//     int index=x-1;
//     while (left<=right){
//         int leftSquare=vect[left]*vect[left];
//         int rightsquare=vect[right]*vect[right];
//         if(leftSquare>rightsquare){
//             result[index]=leftSquare;
//             left++;
//         }else{
//             result[index]=rightsquare;
//             right--;
//         }
//         index--;
//     }
//     return result;
// }
// int main(){
//     int n;
//     cout<<"Enter number of elements : ";
//     cin>>n;
//     vector<int> vec(n);
//     cout<<"Enter the elements : ";
//     for (int idx=0;idx<n;idx++){
//         cin>>vec[idx];
//     }
//     vector<int> x=vectsquare(vec);
//     cout<<"Squared array : ";
//     for(auto num : x){
//         cout<<num<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
// //Given an integer array 'a', return the prefix sum in the same array without creating a new array
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> prefixsum(vector<int> &vect){
//     for(int i=1;i<vect.size();i++){
//         vect[i]=vect[i]+vect[i-1];
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter number of elements : ";
//     cin>>n;
//     vector<int> vec(n);
//     cout<<"Enter the elements : ";
//     for (int idx=0;idx<n;idx++){
//         cin>>vec[idx];
//     }
//     prefixsum(vec);
//     cout<<"Preffix sum array : ";
//     for(auto num : vec){
//         cout<<num<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
// //Check if we can partition the array into two subarrays with equal sum. More formally, check that the prefix sum of a part of the array is equal to the suffix sum of rest of the array.
// #include<iostream>
// #include<vector>
// using namespace std;
// bool canPartition(vector<int> &arr){
//     int totalSum=0;
//     for(int num:arr){
//         totalSum+=num;
//     }
//     if(totalSum%2!=0){
//         return false;
//     }
//     int target = totalSum/2;
//     int prefixsum=0;
//     for (int i=0;i<arr.size();i++){
//         prefixsum+=arr[i];
//         if(prefixsum==target){
//             return true;
//         }
//     }
//     return false;
// }
// int main() {
//         int n;
//     cout << "Enter number of elements: ";
//     cin >> n;
    
//     vector<int> arr(n);
//     cout << "Enter the elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     if(canPartition(arr)){
//         cout<<"Yes,the array can be partitioned into two subarrays with equal sum."<<endl;
//     }else{
//         cout<<"No,the array cannot be partitioned into two subarrays with equal sum."<<endl;
//     }
//     return 0;
// }
//Given an array of integers of size n. Answer q queries where you need to print the sum of values in a given range for indices from l to r (both included)
// //Note:- The value of l and r in queries follow 1-based indexing.
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter Number of elements : ";
//     cin>>n;
//     vector<int> vect(n);
//     cout<<"Enter "<<n<<" Elements : ";
//     for(int i=0;i<n;i++){
//         cin>>vect[i];
//     }
//     int l,r;
//     cout<<"Enter starting point : ";
//     cin>>l;
//     cout<<"Enter ending point : ";
//     cin>>r;
//     for (int j=l-1;j<=r-1;j++){
//         cout<<vect[j]<<"\t";
//     }
// } 
//2-D Vectors---------------------------------------------------------------------------------------------------------------
// //W.A.P. to display multiplication of two matrices entered by the user.
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int r1,r2,c1,c2;
//     cout << "Rows and Columns in matrix one :  ";
//     cin >> r1 >> c1;
//     cout << "Rows and Columns in matrix two :  ";
//     cin >> r2 >> c2; 
//     if (c1!=r2){
//         cout<<"Multiplication is not possible!"<<endl;
//         cout<<"The Number of in matrix 1 is not equal to the number of rows in matrix 2."<<endl;
//         return 0;
//     }
//     vector<vector<int>> matrix1(r1,vector<int>(c1));
//     vector<vector<int>> matrix2(r2,vector<int>(c2));
//     vector<vector<int>> result(r1,vector<int>(c2,0));
//     cout <<"Enter Elements in Matrix 1 : "<< endl;
//     for (int i = 0; i<r1; i++){
//         for (int j = 0; j<c1; j++){
//             cin >> matrix1[i][j];
//         }
//     }
//     cout << "Enter Elements in Matrix 2 : " << endl;
//     for (int i = 0; i<r2; i++){
//         for (int j = 0; j<c2; j++){
//             cin >> matrix2[i][j];
//         }
//     }
//     for (int i = 0; i<r1; i++){
//         for (int j = 0; j<c2; j++){
//             for (int k=0;k<c1;k++){
//                 result[i][j]+=matrix1[i][k]*matrix2[k][j];
//             }
//         }
//     }
//     cout << "The result of matrix Multiplication : "<<endl;
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c2;j++){
//             cout << result[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// //W.A.P. to display transpose of matrix entered by the user
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int rows,columns;
//     cout << "Rows and Columns in matrix :  ";
//     cin >> rows >> columns;
//     vector<vector<int>> matrix(rows,vector<int>(columns));
//     cout <<"Enter Elements in Matrix : "<< endl;
//     for (int i = 0; i<rows; i++){
//         for (int j = 0; j<columns; j++){
//             cin >> matrix[i][j];
//         }
//     }
//     cout<<"Transposed matrix : "<<endl;
//     for (int i = 0; i<columns; i++){
//         for (int j = 0; j<rows; j++){
//             cout << matrix[j][i]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// //Given an integer n , return the first n rows of Pascal's triangle
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<vector<int>>pascalsTriangle(int n){
//     vector<vector<int>>pascal(n);
//     for (int i = 0; i < n; i++){
//         pascal[i].resize(i+1);
//         for(int j = 0;j < i+1; j++){
//             if(j==0 || j==i){
//                 pascal[i][j]=1;
//             }else {
//                 pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];
//             }
//         }
//     }
//     return pascal;
// }
// int main(){
//     int n;
//     cout<<"Enter number of rows : ";
//     cin>>n;
//     vector<vector<int>>ans;
//     ans=pascalsTriangle(n);
//     for (int i = 0; i<ans.size(); i++){
//         for (int j = 0; j<ans[i].size(); j++){
//             cout << ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//2-D vector problems
// //Rows with max number of 1's 
// #include<iostream>
// #include<vector>
// using namespace std;
// int noOfOnes(vector<vector<int>> &vect,int rows,int columns){
//     int max = 0;
//     int rowIndex=-1;
//     for (int i = 0; i < rows; i++){
//         int max1 = 0;
//         for (int j = 0; j < columns; j++){
//             if(vect[i][j]==1){
//                 max1++;
//             }
//         }if(max1>max){
//             max=max1;
//             rowIndex=i;
//         }
//     }
//     return rowIndex;
// }
// int main(){
//     int rows,columns;
//     cout<<"Enter rows and columns : ";
//     cin>> rows >> columns;
//     vector<vector<int>> vect(rows,vector<int>(columns));
//     cout<<"Enter Elements : "<<endl;
//     for (int i = 0; i < rows; i++){
//         for (int j = 0; j < columns; j++){
//             cin>>vect[i][j];
//         }
//     }
//     int idx=noOfOnes(vect,rows,columns);
//     cout<<"maximum numbers of 1's are at index(according to 0-based indexing) : "<<idx; 
// }
// //Rotation of square matrix in clockwise direction for 90 degree problem
// #include<iostream>
// #include<vector>
// using namespace std;
// void rotatematrix(vector<vector<int>> &vect,int size){
//     for (int i = 0; i < size; i++) {
//         for (int j = i + 1; j < size; j++) {  
//             swap(vect[i][j], vect[j][i]);  
//         }
//     }
//     for (int i = 0; i<size; i++){
//         int left=0,right=size-1;
//         while(left<right){
//             swap(vect[i][left],vect[i][right]);
//             left++;
//             right--;
//         } 
//     }
// }
// int main(){
//     int size;
//     cout<<"Enter size : ";
//     cin>> size;
//     vector<vector<int>> vect(size,vector<int>(size));
//     cout<<"Enter Elements : "<<endl;
//     for (int i = 0; i < size; i++){
//         for (int j = 0; j < size; j++){
//             cin>>vect[i][j];
//         }
//     }
//     rotatematrix(vect,size);
//     cout<<"Rotateded matrix : "<<endl;
//     for (int i = 0; i < size; i++){
//         for (int j = 0; j < size; j++){
//             cout<<vect[i][j]<<" ";
//         }
//     cout<<endl;
//     } 
//     return 0;
// }

//Problems Based on Recursion-1
// //Given an integer find out the sum of its digits using recursion
// #include<iostream>
// using namespace std;
// int sum(int n);
// int main(){
//     int n;
//     cout<<"Enter number : ";
//     cin>>n;
//     n=abs(n);  
//     cout<<"Sum of digits : "<<sum(n)<<endl;
//     return 0;
// }
// int sum(int n){
//     if(n==0){
//         return 0;
//     }else{
//         return n%10 + sum(n/10);
//     }
// }
// //Given two numbers p & q find the value of p^q using a recursive function
// #include<iostream>
// using namespace std;
// int power(int p,int q);
// int main(){
//     int p,q;
//     cout<<"Enter base : ";
//     cin>>p;
//     cout<<"Enter power : ";
//     cin>>q;
//     cout<<"The result of "<<p<<"^"<<q<<"is:"<<power(p,q)<<endl;
//     return 0;
// }
// int power(int p,int q){
//     if(q==0){
//         return 1;
//     }else{
//         return p*power(p,q-1);
//     }
// }
//Recursion on arrays
// //Given an array print all the elements of the array recursively
// #include<iostream>
// using namespace std;
// int arrele(int arr[],int index,int size){
//     if (index==size){
//         return 0;
//     }
//     cout<<arr[index]<<" ";
//     arrele(arr,index+1,size);
// }
// int main(){
//     int n;
//     cout<<"Enter length of array:";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter elements :";
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     arrele(arr,0,n);
//     cout<<endl;
//     return 0;
// }
// //For a given array print the maximum value
// #include<iostream>
// using namespace std;
// int findmax(int arr[],int index,int size){
//     if (index==size-1){
//         return arr[index];
//     }
//     int maxele=findmax(arr,index+1,size);
//     return(arr[index]>maxele)?arr[index]:maxele;
// }
// int main(){
//     int n;
//     cout<<"Enter length of array:";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter elements :";
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int x=findmax(arr,0,n);
//     cout<<x<<endl;
//     return 0;
// }
// //Find the sum of the values of the array
// #include<iostream>
// using namespace std;
// int sumarr(int arr[],int index, int size);
// int main(){
//     int n;
//     cout<<"Enter number of elements : ";
//     cin>>n;  
//     int arr[n];
//     cout<<"Enter elements :";
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"Sum of digits : "<<sumarr(arr,0,n)<<endl;
//     return 0;
// }
// int sumarr(int arr[],int index, int size){
//     if(index==size){
//         return 0;
//     }
//     return arr[index]+sumarr(arr,index+1,size);
// }
//Recursion on strings
// //Remove all theoccurences of 'a' from string s='abcde'
// #include<iostream>
// #include<string>
// using namespace std;
// string removea(string str){
//     if(str.empty()){
//         return "";
//     }
//     if(str[0]=='a'){
//         return removea(str.substr(1));
//     }else{
//         return str[0]+removea(str.substr(1));
//     }
// }
// int main(){
//     string name="abagjsacde";
//     string res=removea(name);
//     cout<<"String after removing 'a' : "<<res<<endl;
//     return 0;
// } 
// //Write a program to check whether a given number is palindrome or not without converting into string
// #include<iostream>
// using namespace std;
// bool ispalindromehelp(int num,int &n){
//     if(num==0){
//         return true;
//     }
//     int digit=num%10;
//     int power=1;
//     for(int i=1;i<n;i++){
//         power*=10;
//     }
//     int leftDigit=num/power;
//     if(leftDigit!=digit){
//         return false;
//     }
//     num=(n%power)/10;
//     n-=2;
//     return ispalindromehelp(num,n);
// }
// bool ispalindrome(int num){
//     if(num<0){
//         return false;
//     }
//     int length=0,temp=num;
//     while(temp>0){
//         temp/=10;
//         length++;
//     }return ispalindromehelp(num,length);
// }
// int main(){
//     int num;
//     cout<<"Enter number : ";
//     cin>>num;
//     if(ispalindrome(num)){
//         cout<<num<<" is a palindrome."<<endl;
//     }else{
//         cout<<num<<" is not a palindrome."<<endl;
//     }
// }
// //Given a number n find the increasing sequence from 1 to n without using any loop. Constraints : 0<n<=1e6
// #include<iostream>
// using namespace std;
// void printSequence(int current,int n){
//     if(current>n){
//         return;
//     }
//     cout<<current<<" ";
//     printSequence(current+1,n);
// }
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     printSequence(1,n);
//     cout<<endl;
//     return 0;
// }
// //Given a number num and a value k print k multipes of num
// #include<iostream>
// using namespace std;
// printMultiples(int k,int num,int current){
//     if(current>k){
//         return 1;
//     }
//     cout<<num*current<<" ";
//     printMultiples(k,num,current+1);
// }
// int main(){
//     int num,k;
//     cout<<"Enter the number:";
//     cin>>num;
//     cout<<"Enter number of multiples:";
//     cin>>k;
//     printMultiples(k,num,1);
//     cout<<endl;
//     return 0;
// }
// //Given a number n. Find the sum of natural numbers till n but with alternate signs, (i.e., if n=5,return=1-2+3-4+5=3 Constraints:0<=n<=1e6)
// #include<iostream>
// using namespace std;
// int alternatesum(int num,int mark){
//     if(mark>num){
//         return 0;
//     }
//     if(mark%2!=0){
//         return mark + alternatesum(num,mark+1);
//     }else{
//         return -mark + alternatesum(num,mark+1);
//     }
// }
// int main(){
//     int num;
//     cout<<"Enter the number:";
//     cin>>num;
//     int x=alternatesum(num,1);
//     cout<<x<<endl;
//     return 0;
// }
//Frog Jump Problems
// //Given two numbers x and y. Find the greatest common divisor of x and y using recursion. Constraints;0<=x,y<=1e6
// #include<iostream>
// using namespace std;
// int gcd(int x,int y){
//     if(y==0) return x;
//     return gcd(y,x%y);
// }
// int main(){
//     int x,y;
//     cout<<"Enter the numbers :";
//     cin>>x>>y;
//     cout<<"The GCD of "<<x<<" and "<<y<<" is:"<<gcd(x,y)<<endl;
//     return 0;
// }
// //Given a number n. Print if it is an armstrong number or not
// #include<iostream>
// using namespace std;
// int sum(int n);
// int main(){
//     int n;
//     cout<<"Enter number : ";
//     cin>>n;
//     n=abs(n);  
//     int x=sum(n);
//     if(x==n){
//         cout<<"Yes, "<<n<<" is an armstrong "<<endl;
//     }
//     else{
//         cout<<"No, "<<n<<" is an armstrong "<<endl;
//     }
//     return 0;
// }
// int sum(int n){
//     if(n==0){
//         return 0;
//     }else{
//         return n%10 + sum(n/10);
//     }
// }
// //Find the minimum possible total cost incurred before the frog reaches stone N
// #include<iostream>
// using namespace std;
// int f(int *arr,int n,int i){
//     if(i==n-1) return 0;
//     if(i==n-2) return abs(arr[i]-arr[i+1]);
//     return min(f(arr,n,i+1)+abs(arr[i]-arr[i+1]),
//     f(arr,n,i+2)+abs(arr[i]-arr[i+2]));
// }
// int main(){
//     int n;
//     cout<<"Enter number of elements : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter elements : ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<f(arr,n,0);
//     return 0;
// }
// //Given an array of n integers and a target value x. Print whether exists in the array or not.
// #include<iostream>
// using namespace std;
// bool exists(int arr[],int n,int x,int i){
//     if(i==n) return false;
//     if(arr[i]==x) return true;
//     return exists(arr,n,x,i+1);
// }
// int main(){
//     int n,x;
//     cout<<"Enter number of elements : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter elements : ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"Enter Target Element : ";
//     cin>>x;
//     if (exists(arr,n,x,0)){
//         cout<<"The value "<<x<<" exists in array"<<endl;
//     }else{
//         cout<<"The value "<<x<<" does not exists in array"<<endl;
//     }
//     return 0;
// }
// //Given an array of integers, print sum of all subsets in it. Output sum can be printed in any order. 
// #include<iostream>
// #include<vector>
// using namespace std;
// void sumsubset(const vector<int>&arr){
//     int n=arr.size();
//     int totalsubsets=1<<n;
//     for (int mask=0;mask<totalsubsets;mask++){
//         int sum=0;
//         for(int i=0;i<n;i++){
//             if(mask&(1<<i)){
//                 sum+=arr[i];
//             }
//         }
//         cout<<sum<<" "; 
//     }
//     cout<<endl;
// }
// int main(){
//     int n;
//     cout<<"Enter number of elements : ";
//     cin>>n;
//     vector<int> arr(n);
//     cout<<"Enter elements : ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"The sum of all subsets is: ";
//     sumsubset(arr);
//     return 0;
// }
// //The problem is to count all the possible paths on an m X n grid from top to bottom right (grid[m-1][n-1])
// #include<iostream>
// #include<vector>
// using namespace std;
// int countPaths(int m,int n){
//     vector<vector<int>> dp(m,vector<int>(n,0));
//     dp[0][0]=1;
//     for (int j=1;j<n;j++){
//         dp[0][j]=dp[0][j-1];
//     }
//     for (int i=1;i<m;i++){
//         dp[i][0]=dp[i-1][0];
//     }
//     for(int i=1;i<m;i++){
//         for(int j=1;j<n;j++){
//             dp[i][j]=dp[i-1][j]+dp[i][j-1];
//         }
//     }
//     return dp[m-1][n-1];
// }
// int main(){
//     int m,n;
//     cout<<"Enter number of rows:";
//     cin>>m;
//     cout<<"Enter number of columns:";
//     cin>>n;
//     int res=countPaths(m,n);
//     cout<<"Total number of paths is:"<<res<<endl;
//     return 0;
// }
// //Given a string we have to find out all its subsequent of it.
// #include<iostream>
// #include<string>
// using namespace std;
// void subsequence(string &str,int index,string current){
//     if(index==str.length()){
//         cout<<current<<" ";
//         return;
//     } 
//     subsequence(str,index+1,current);
//     subsequence(str,index+1,current+str[index]);   
// }
// int main(){
//     string str;
//     cout<<"Enter string:";
//     cin>>str;
//     cout<<"Subsequence of the string are: ";
//     subsequence(str,0,"");
// }
// //Given a string containing digits from 2-9 inclusive return all possible combinations that the number could represent. Return the answer in any order.
// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;
// // Mapping of digits to corresponding letters
// vector<string> digitToChar = {
//     "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
// };
// void backtrack(string &digits, int index, string current, vector<string> &result) {
//     // Base case: when we have formed a combination of the same length as the input digits
//     if (index == digits.length()) {
//         result.push_back(current);  // Add the current combination to the result
//         return;
//     } 
//     // Get the possible letters for the current digit
//     int digit = digits[index] - '0';  // Convert char digit to int
//     string letters = digitToChar[digit];
//     // Recurse for each letter corresponding to the current digit
//     for (char letter : letters) {
//         backtrack(digits, index + 1, current + letter, result);  // Include the letter and move to next digit
//     }
// }
// vector<string> letterCombinations(string digits) {
//     vector<string> result;
//     if (digits.empty()) {
//         return result;  // If the input is empty, return an empty result
//     }
//     backtrack(digits, 0, "", result);  // Start backtracking from the first digit
//     return result;
// }
// int main() {
//     string digits;
//     cout << "Enter digits: ";
//     cin >> digits;
//     vector<string> combinations = letterCombinations(digits);
//     cout << "Possible letter combinations are: ";
//     for (string &combination : combinations) {
//         cout << combination << " ";
//     }
//     cout << endl;
//     return 0;
// }
//-----------------------------------------------------------------------------------------------------------Sorting Algorithms-----------------------------------------------------------------------------------------------------------

// //Bubble Sort - Repeatedly swap two adjacent elements if in wrong order

// #include<iostream>
// #include<vector>
// using namespace std;
// void bubblesort(vector<int>&v){
//     int n=v.size();
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(v[j]>v[j+1]){
//                 swap(v[j],v[j+1]);
//             }
//         }
//     }
// }
// int main(){
//     int n;
//     cout<<"Number of elements in vector : ";
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     bubblesort(v);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
// }

// //Selection Sort Algorithm - Repeatedly find minimum element unsorted array & place it at beginning

// #include<iostream>
// #include<vector>
// using namespace std;
// void selectionsort(vector<int> &v){
//     int n=v.size();
//     for(int i=0;i<n-1;i++){
//         int min_idx=i;
//         for(int j=i+1;j<n;j++){
//             if(v[j]<v[min_idx]){
//                 min_idx=j;
//             }
//         }
//         if(min_idx!=i){
//             swap(v[i],v[min_idx]);
//         }
//     }
// }
// int main(){
//     int n;
//     cout<<"Number of elements in vector : ";
//     cin>>n;
//     vector<int> v(n);
//     cout<<"Enter elements : ";
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     selectionsort(v);
//     cout<<"Sorted Vector : ";
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
// }

// //Insertion Sort - Repeatedly take elements from unsorted subarray & insert in sorted subarray

// #include<iostream>
// #include<vector>
// using namespace std;
// void insertionsort(vector<int> &v){
//     int n=v.size();
//     for(int i=1;i<n;i++){
//         int curr_ele=v[i];
//         int j=i-1;
//         while(j>=0 && v[j]>curr_ele){
//             v[j+1]=v[j];
//             j--;
//         }
//         v[j+1]=curr_ele;
//     }
// }
// int main(){
//     int n;
//     cout<<"Number of elements in vector : ";
//     cin>>n;
//     vector<int> v(n);
//     cout<<"Enter elements : ";
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     insertionsort(v);
//     cout<<"Sorted Vector : ";
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
// }

// //Merge Sort - Uses Divide and Conquer Algorithm

// #include<iostream>
// #include<vector>
// using namespace std;
// void merge(vector<int> &v,int left,int mid,int right){
//     int an=mid-left+1;
//     int rn=right-mid;
//     vector<int> leftvec(an),rightvec(rn);
//     for (int i=0;i<an;i++){
//         leftvec[i]=v[left+i];
//     }
//     for (int i=0;i<rn;i++){
//         rightvec[i]=v[mid+1+i];
//     }
//     int i=0,j=0,k=left;
//     while (i<an && j<rn){
//         if(leftvec[i]<=rightvec[j]){
//             v[k]=leftvec[i];
//             i++;
//         }else{
//             v[k]=rightvec[j];
//             j++;
//         }
//         k++;
//     }
//     while (i<an){
//         v[k]=leftvec[i];
//         i++;k++;
//     }
//     while(j<rn){
//         v[k]=rightvec[j];
//         j++;k++;
//     }
// }
// void mergesort(vector<int> &v,int l,int r){
//     if(l<r){ 
//         int mid_ele=l+(r-l)/2;
//         mergesort(v,l,mid_ele);
//         mergesort(v,mid_ele+1,r);
//         merge(v,l,mid_ele,r);
//     }
// }
// void printvector(vector<int> &vec,int n){
//     for(int i=0;i<n;i++){
//         cout<<vec[i]<<" ";
//     }
// }
// int main(){
//     int n;
//     cout<<"Number of elements in vector : ";
//     cin>>n;
//     vector<int> v(n);
//     cout<<"Enter elements : ";
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     int l=0;
//     int r=n-1;
//     mergesort(v,l,r);
//     cout<<"Sorted Vector : ";
//     printvector(v,n);
// }

// //Quick Sort - Divide & Conquer using pivot element

// #include<iostream>
// #include<vector>
// using namespace std;
// int partition(vector<int> &v,int first,int last){
//     int pivot=v[last];
//     int i=first-1;
//     int n=v.size();
//     for(int j=first;j<last;j++){
//         if(v[j]<pivot){
//             i++;
//             swap(v[i],v[j]);
//         }
//     }
//     swap(v[i+1],v[last]);
//     return (i+1);
// }
// void quicksort(vector<int> &v,int first, int last){
//     if(first<last){
//         int pi=partition(v,first,last);
//         quicksort(v,first,pi-1);
//         quicksort(v,pi+1,last);
//     }
// }
// int main(){
//     int n;
//     cout<<"Number of elements in vector : ";
//     cin>>n;
//     vector<int> v(n);
//     cout<<"Enter elements : ";
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     int first=0;
//     int last=n-1;
//     quicksort(v,first,last);
//     cout<<"Sorted Vector : ";
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

//Advanced Sorting Algorithms
// //Count Sort - Stores frequency of every element

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void countsort(vector<int> &v){
//     if(v.empty()) return;
//     int maxval=*max_element(v.begin(),v.end());
//     int minval=*min_element(v.begin(),v.end());
//     int range=maxval-minval+1;
//     vector<int> count(range,0);
//     for(int i=0;i<v.size();i++){
//         count[v[i]-minval]++;
//     }
//     int index=0;
//     for(int i=0;i<range;i++){
//         while(count[i]>0){
//             v[index++]=i+minval;
//             count[i]--;
//         }
//     }
// }
// int main(){
//     int n;
//     cout<<"Number of elements in vector : ";
//     cin>>n;
//     vector<int> v(n);
//     cout<<"Enter elements : ";
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     countsort(v);
//     cout<<"Sorted Vector : ";
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// //Radix Sort - Starts with least significant bit

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void radixsort(vector<int> &v){
//     int maxval=*max_element(v.begin(),v.end());
//     for(int exp=1;maxval/exp>0;exp*=10){
//         stable_sort(v.begin(),v.end(),[exp](int a,int b){
//             return (a/exp)%10<(b/exp)%10;
//         });
//     }
// }
// int main(){
//     int n;
//     cout<<"Number of elements in vector : ";
//     cin>>n;
//     vector<int> v(n);
//     cout<<"Enter elements : ";
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     radixsort(v);
//     cout<<"Sorted Vector : ";
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// //Bucket Sort - Scatter and Gather approach

// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<math.h>
// using namespace std;
// void bucketsort(vector<float> &v){
//     if(v.empty()) return;
//     float minval=*min_element(v.begin(),v.end());
//     float maxval=*max_element(v.begin(),v.end());
//     int n=v.size();
//     int bucketc=n;
//     vector<vector<float>> buckets(bucketc);
//     for(int i=0;i<n;i++){
//         int index=floor((v[i]-minval)/(maxval-minval)*(bucketc-1));
//         buckets[index].push_back(v[i]);
//     }

//     for(int i=0;i<bucketc;i++){
//         if(!buckets[i].empty()){
//             sort(buckets[i].begin(),buckets[i].end());
//         }
//     }
//     int index=0;
//     for(int i=0;i<bucketc;i++){
//         for(float num:buckets[i]){
//             v[index++]=num;
//         }
//     }
// }
// int main(){
//     int n;
//     cout<<"Number of elements in vector: ";
//     cin>>n;
//     vector<float> v(n);
//     cout<<"Enter elements (int the range [0,1)): ";
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     bucketsort(v);
//     cout<<"Sorted Vector : ";
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// //Binary Search Algorithm - Divide an array into two equal parts such that both side elements are different from each other on basis/context of any property.
// #include<iostream>
// #include<vector>
// using namespace std;
// int BinarySearchAlgos(vector<int> &v,int target){
//     int lo=0;
//     int hi=v.size()-1;
//     while(lo<=hi){
//         int mid=lo+(hi-lo)/2 ;
//         if(v[mid]==target){
//             return mid;
//         }else if (v[mid]<target){
//             lo=mid+1;
//         }else{
//             hi=mid-1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n,target;
//     cout<<"Enter number of elements : ";
//     cin>>n;    
//     vector<int> vec(n);
//     cout<<"Enter elements : ";
//     for(int i=0;i<n;i++){
//         cin>>vec[i];
//     }
//     cout<<"Enter Target : ";
//     cin>>target;
//     int result=BinarySearchAlgos(vec,target);
//     if(result!=-1){
//         cout<<"Target found at index : "<<result<<endl;
//     }else{
//         cout<<"Target not found";
//     }
// }

// //Binary Search using Recursion
// #include<iostream>
// #include<vector>
// using namespace std;
// int BinarySearchRec(vector<int> &v,int target,int lo,int hi){
//     if(lo>hi){
//         return -1;
//     }
//     int mid=lo+(hi-lo)/2 ; 
//     if (v[mid]==target){
//         return mid;
//     }else if(v[mid]<target){
//         return BinarySearchRec(v,target,mid+1,hi);
//     }else{
//         return BinarySearchRec(v,target,lo,mid-1);
//     }
// }
// int main(){
//     int n,target;
//     cout<<"Enter number of elements : ";
//     cin>>n;    
//     vector<int> vec(n);
//     cout<<"Enter elements : ";
//     for(int i=0;i<n;i++){
//         cin>>vec[i];
//     }
//     cout<<"Enter Target : ";
//     cin>>target;
//     int lo=0;
//     int hi=vec.size()-1;
//     int result=BinarySearchRec(vec,target,lo,hi);
//     if(result!=-1){
//         cout<<"Target found at index : "<<result<<endl;
//     }else{
//         cout<<"Target not found";
//     }
// }

//Problems on Binary Search

// //(Q) Find the first occurence of a given element x, given that the given array is sorted. If no occurence is found then return -1
// #include<iostream>
// #include<vector>
// using namespace std;
// int BinarySearch(vector<int>&vec,int target){
//     int lo=0;
//     int hi=vec.size()-1;
//     int result = -1;
//     while(lo<=hi){
//         int mid=lo+(hi-lo)/2 ;
//         if(vec[mid]==target){
//             result = mid;
//             hi=mid-1;
//         }else if (vec[mid]<target){
//             lo=mid+1;
//         }else{
//             hi=mid-1;
//         }
//     }
//     return result;
// }
// int main(){
//     int n,target;
//     cout<<"Enter number of elements : ";
//     cin>>n;
//     cout<<"Enter elements : ";
//     vector<int>vec(n);
//     for(int i=0;i<n;i++){
//         cin>>vec[i];
//     }
//     cout<<"Enter Target : ";
//     cin>>target;
//     int res=BinarySearch(vec,target);
//     if(res!=-1){
//         cout<<"Target found at index : "<<res;
//     }else{
//         cout<<"Target not found";
//     }
// }

// //(Q) Find the square root of the given non -ve value x. Round it off to the nearest floor integer value. Don't use built-in function for Squareroot
// #include<iostream>
// #include<math.h>
// using namespace std;
// float findSquareRoot(float x){
//     if(x<2){
//         return x;
//     }
//     float precision=0.0001;
//     float lo=0,hi=x;
//     float mid;
//     while(hi-lo>precision){
//         mid=lo+(hi-lo)/2 ;
//         if(mid*mid==x){
//             return mid;
//         }
//         else if (mid*mid<x){
//             lo=mid;
//         }else{
//             hi=mid;
//         }
//     }
//     float square_root=mid;
//     if(abs(square_root-round(square_root))<precision){
//         return round(square_root);
//     }
//     return square_root;
// }
// int main() {
//     float x;
//     cout << "Enter a non-negative value: ";
//     cin >> x;
//     float sqrt_value = findSquareRoot(x);
//     cout << "The square root of " << x << " is: " << sqrt_value << endl;
//     return 0;
// }

//String
// //Basic Input
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     cout<<"Enter string:";
//     getline(cin,str);
//     cout<<str<<endl;
//     return 0;
// }

// //(Q) Given a string sort the given string. Constraints : The string will contain only alphabetical character from a-z
// #include<iostream>
// #include<string>
// using namespace std;
// string sort_string(const string &str){
//     string sorted_str=str;
//     int n=sorted_str.length();
//     for (int i = 0; i < n - 1; ++i) {
//         for (int j = 0; j < n - i - 1; ++j) {
//             if (sorted_str[j] > sorted_str[j + 1]) {
//                 char temp = sorted_str[j];
//                 sorted_str[j] = sorted_str[j + 1];
//                 sorted_str[j + 1] = temp;
//             }
//         }
//     }
//     return sorted_str;
// }
// int main(){
//     string str;
//     cout<<"Enter string:";
//     getline(cin,str);
//     cout<<"Sorted String : "<<sort_string(str)<<endl;
//     return 0;
// }

// //Given two strings s and t return true if it is an anagram of s and false otherwise using C++
// #include<iostream>
// #include<string>
// using namespace std;
// string sort_string(const string &str){
//     string sorted_str=str;
//     int n=sorted_str.length();
//     for (int i = 0; i < n - 1; ++i) {
//         for (int j = 0; j < n - i - 1; ++j) {
//             if (sorted_str[j] > sorted_str[j + 1]) {
//                 char temp = sorted_str[j];
//                 sorted_str[j] = sorted_str[j + 1];
//                 sorted_str[j + 1] = temp;
//             }
//         }
//     }
//     return sorted_str;
// }
// bool isanagram(string s,string t){
//     if (s.length()==t.length()){
//         if(sort_string(s)==sort_string(t)){
//             return true;
//         }else{
//             return false;
//         }
//     }else{
//         return false;
//     }
// }

// int main(){
//     string s,t;
//     cout<<"Enter string1 :";
//     getline(cin,s);
//     cout<<"Enter string2 :";
//     getline(cin,t);
//     if(isanagram(s,t)==true){
//         cout<<"String is an anagram"<<endl;
//     }else{
//         cout<<"String is not an anagram"<<endl;
//     }
//     return 0;
// }

// //OOPS-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// #include<iostream>
// using namespace std;
// class Fruit{
//     public: 
//         string name;
//         string color;
// };
// int main(){
//     //Simple Definition using (.)dot operator
//     Fruit apple;
//     apple.name="Apple";
//     apple.color="Red";
//     cout<<apple.name<<"-"<<apple.color<<endl;
//     //Definition Using Object-Pointers
//     Fruit *mango = new Fruit();
//     mango->name="Mango";
//     mango->color="Yellow";
//     cout<<mango->name<<"->"<<mango->color<<endl;
// }

// #include<iostream>
// using namespace std;
// class Rectangle{
//     public:
//         int l,b;
//         Rectangle(){
//             l=0;b=0;
//         }
//         Rectangle(int x,int y){
//             l=x;b=y;
//         }
//         Rectangle(Rectangle &r){
//             l=r.l;
//             b=r.b;
//         }
// };
// int main(){
//     Rectangle r1;
//     cout<<r1.l<<" "<<r1.b<<endl;
//     Rectangle r2(3,4);
//     cout<<r2.l<<" "<<r2.b<<endl;
//     Rectangle r3=r2;
//     cout<<r3.l<<" "<<r3.b<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Complex{
//     public:
//         int real,img;
//         Complex(int r=0,int i=0):real(r),img(i){ }
//         //Overloading Operator "+"
//         Complex operator+(const Complex &other)const{
//             return Complex(real+other.real,img+other.img);
//         }
// };
// int main(){
//     Complex c1(3,5);
//     Complex c2(4,5);
//     Complex result=c1+c2;
//     cout<<result.real<<"+"<<result.img<<"i"<<endl;
//     return 0;
// }

//Practice Question for OOPs Programming 

// //Calculating area and circumference of a circle
// #include<iostream>
// #include<cmath>
// using namespace std;
// const double PI=3.14159;
// class Circle{
//     private:
//         double radius;
//     public:
//         Circle(double r):radius(r){}
//         double calculateArea(){
//             return PI*pow(radius,2);
//         }
//         double calCircumference(){
//             return 2*PI*radius;
//         }
// };
// int main(){
//     double radius;
//     cout<<"Enter radius of circle: ";
//     cin>>radius;
//     Circle circle(radius);
//     double area=circle.calculateArea();
//     double circumference=circle.calCircumference();
//     cout<<"Area:"<<area<<endl;
//     cout<<"Circumference:"<<circumference<<endl;
// }

// //Calculating area and perimeter of a circle
// #include<iostream>
// #include<cmath>
// using namespace std;
// class Rectangle{
//     private:
//         double l;
//         double b;
//     public:
//         Rectangle(double l,double b):l(l),b(b){}
//         double calcArea(){
//             return l*b;
//         }
//         double calcPerimeter(){
//             return 2*(l+b);
//         }
// };
// int main(){
//     double l,b;
//     cout<<"Enter Length:";
//     cin>>l;
//     cout<<"Enter breadth:";
//     cin>>b;
//     Rectangle rectangle(l,b);
//     double area=rectangle.calcArea();
//     double perimeter=rectangle.calcPerimeter();
//     cout<<"Area:"<<area<<endl;
//     cout<<"Perimeter:"<<perimeter<<endl;
// }

// // Implement member functions to set and get the values of these variables
// #include<iostream>
// #include<string>
// using namespace std;
// class Person{
//     private:
//         string name;
//         int age;
//         string country;
//     public:
//         void setName(const string &n){
//             name=n;
//         }
//         void setAge(int a){
//             age=a;
//         }
//         void setCountry(const string &c){
//             country=c;
//         }
//         string getName(){
//             return name;
//         }
//         int getAge(){
//             return age;
//         }
//         string getCountry(){
//             return country;
//         }
// };
// int main(){
//     Person person;
//     string name,country;
//     int age;
//     cout<<"Enter Name : ";
//     getline(cin,name);
//     person.setName(name);
//     cout<<"Enter Age : ";
//     cin>>age;
//     person.setAge(age);
//     cin.ignore();
//     cout<<"Enter Country : ";
//     getline(cin,country);
//     person.setCountry(country);
//     cout<<"Name : "<<person.getName()<<endl;
//     cout<<"Age : "<<person.getAge()<<endl;
//     cout<<"Country : "<<person.getCountry()<<endl;
// }

// //Write a C++ program to create a class called Car that has private member variables for company, model, and year. Implement member functions to get and set these variables
// #include<iostream>
// #include<string>
// using namespace std;
// class Car{
//     private:
//         string company;
//         int year;
//         string model;
//     public:
//         void setCompany(const string &c){
//             company=c;
//         }
//         void setYear(int y){
//             year=y;
//         }
//         void setModel(const string &m){
//             model=m;
//         }
//         string getCompany(){
//             return company;
//         }
//         int getYear(){
//             return year;
//         }
//         string getModel(){
//             return model;
//         }
// };
// int main(){
//     Car car;
//     string company,model;
//     int year;
//     cout<<"Enter Company Name : ";
//     getline(cin,company);
//     car.setCompany(company);
//     cout<<"Enter Year : ";
//     cin>>year;
//     car.setYear(year);
//     cin.ignore();
//     cout<<"Enter Model : ";
//     getline(cin,model);
//     car.setModel(model);
//     cout<<"Comapny : "<<car.getCompany()<<endl;
//     cout<<"Year : "<<car.getYear()<<endl;
//     cout<<"Model : "<<car.getModel()<<endl;
// }

//Linked List - Linear data structures used to store a list of values
//Patterns of Questions based on SLL
// //(Q) We are given the head of the linked list, delete every alternating element from the list starting from the second element.
// #include <iostream>
// using namespace std;
// // Definition for singly-linked list.
// struct ListNode {
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(NULL) {}
// };
// ListNode* deleteAlternatingNodes(ListNode* head) {
//     // Edge case: if the list is empty or has only one element
//     if (!head || !head->next) {
//         return head;
//     }
//     ListNode* current = head;   
//     while (current && current->next) {
//         // Skip the next node (delete it)
//         current->next = current->next->next;
//         // Move to the next node
//         current = current->next;
//     }
//     return head;
// }
// // Helper function to print the linked list
// void printList(ListNode* head) {
//     while (head) {
//         cout << head->val << " ";
//         head = head->next;
//     }
//     cout << endl;
// }
// // Helper function to create a linked list from an array
// ListNode* createList(int arr[], int n) {
//     if (n == 0) return NULL;
//     ListNode* head = new ListNode(arr[0]);
//     ListNode* current = head;
//     for (int i = 1; i < n; ++i) {
//         current->next = new ListNode(arr[i]);
//         current = current->next;
//     }
//     return head;
// }
// int main() {
    // int n;
    // cout<<"Enter number of elements:";
    // cin>>n;
    // int arr[n];
    // cout<<"Enter elements:";
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
//     ListNode* head = createList(arr, n);
//     cout << "Original list: ";
//     printList(head);
//     head = deleteAlternatingNodes(head);
//     cout << "List after deleting alternating nodes: ";
//     printList(head);  
//     return 0;
// }

// //(Q) Given the head of a sorted linked list delete all the duplicates such that each element appears only once. Return the linked list sorted as well
// #include<iostream>
// using namespace std;
// // Definition for singly-linked list.
// struct ListNode {
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(NULL) {}
// };
// ListNode* deleteDuplicates(ListNode* head) {
//     // Edge case: if the list is empty or contains only one element
//     if (!head) {
//         return head;
//     }
//     ListNode* current = head;
//     while (current && current->next) {
//         if (current->val == current->next->val) {
//             // Skip the next node since it's a duplicate
//             ListNode* temp = current->next;
//             current->next = current->next->next;
//             delete temp;  // Free memory of the duplicate node
//         } else {
//             // Move to the next node
//             current = current->next;
//         }
//     }
//     return head;
// }

// // Helper function to print the linked list
// void printList(ListNode* head) {
//     while (head) {
//         cout << head->val << " ";
//         head = head->next;
//     }
//     cout << endl;
// }
// // Helper function to create a linked list from an array
// ListNode* createList(int arr[], int n) {
//     if (n == 0) return NULL;
//     ListNode* head = new ListNode(arr[0]);
//     ListNode* current = head;
//     for (int i = 1; i < n; ++i) {
//         current->next = new ListNode(arr[i]);
//         current = current->next;
//     }
//     return head;
// }
// int main() {
//     int n;
//     cout<<"Enter number of elements:";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter elements:";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     ListNode* head = createList(arr, n);
//     cout << "Original list: ";
//     printList(head);
//     head = deleteDuplicates(head);
//     cout << "List after removing duplicates: ";
//     printList(head);    
//     return 0;
// }

// //Stacks
// #include<iostream>
// using namespace std;
// class Stack{
//     private:
//     int capacity;
//     int *arr;
//     int top;
//     public:
//     Stack(int c){
//         this->capacity=c;
//         arr=new int[c];
//         this->top=-1;
//     }
//     void push(int data){
//         if(this->top == this->capacity-1){
//             cout<<"Overflow\n";
//             return;
//         }
//         this->top++;
//         this->arr[this->top]=data;
//     }
//     int pop(){
//         if(this->top==-1){
//             cout<<"Underflow\n";
//             return INT16_MIN;
//         }
//         this->top--;
//     }
//     int gtop(){
//         if(this->top==-1){
//             cout<<"Underflow\n";
//             return INT16_MIN;
//         }
//         return this->arr[this->top];
//     }
//     bool isEmpty(){
//         return this->top==-1;
//     }
//     int size(){
//         return this->top+1;
//     }
//     bool isFull(){
//         return this->top==this->capacity-1;
//     }
// };
// int main(){
//     int n;
//     cout<<"Enter number of elements:";
//     cin>>n;
//     Stack s(n);
//     int x;
//     cout<<"enter elements:";
//     for(int i=0;i<n;i++){
//         cin>>x;
//         s.push(x);
//     }
//     cout<<"Element at top:"<<s.gtop();
// }



// //Pairs
// int main(){
//     pair<int,int>p1={1,5};
//     cout<<p1.first<<" "<<p1.second<<endl;
//     pair<int,pair<int,int>>p2={1,{4,8}};
//     cout<<p2.first<<" "<<p2.second.first<<endl;
//     pair<int,int>arr[4]={{1,4},{5,7},{8,18},{7,9}};
//     cout<<arr[1].second<<endl;
// }

// //Lists
// int main(){
//     list<int>ls;
//     ls.push_back(25);
//     ls.emplace_front(27);
//     for(auto i=ls.begin();i!=ls.end();++i){
//         cout<<*i<<" ";
//     }
// }

// #include<iostream>N
// using namespace std;
// //Selection Sort 
// void selectionSort(int n,int arr[]){
//     cout<<"SELECTION SORT\n";
//     for(int i=0;i<=n-2;i++){
//         int min=i;
//         for(int j=i;j<=n-1;j++){
//             if(arr[j]<arr[min]) min=j;
//         }
//         swap(arr[min],arr[i]);
//     }
// }

// //bubble sort
// void bubblesort(int n,int arr[]){
//     cout<<"BUBBLE SORT\n";
//     for(int i=n-1;i>0;i--){
//         for(int j=0;j<=i-1;j++){
//             if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
//         }
//     }
// }

// //INSERTION SORT
// void insertionSort(int n,int arr[]){
//     cout<<"INSERTION SORT\n";
//     for(int i=1;i<n;i++){
//         int j=i;
//         while(j>0 && (arr[j-1]>arr[j])){
//             swap(arr[j-1],arr[j]);
//             j--;
//         }
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter number of elements : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter elements:";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"Elements Inserted\n";
//     //selectionSort(n,arr);
//     //bubblesort(n,arr);
//     //insertionSort(n,arr);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// void swap(int& a,int& b){
//     int temp=a;
//     a=b;
//     b=temp;
// }

// void SelectionSort(vector<int>&arr,int n){
//     for(int i=0;i<n-1;i++){
//         int idx=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[idx]) idx=j;
//         }
//         swap(arr[i],arr[idx]);
//     }
// }

// void BubbleSort(vector<int> &arr,int n){
//     for(int i=0;i<n-1;i++){
//         bool swapped=false;
//         for(int j=0;j<n-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 swapped=true;
//             }
//         }
//         if(!swapped) break;
//     }
// }

// void InsertionSort(vector<int> &arr,int n){
//     for(int i=1;i<n;i++){
//         int pivot=arr[i];
//         int j=i-1;
//         while(j>=0 && arr[j]>pivot){
//             arr[j+1]=arr[j];
//             j=j-1;
//         }
//         arr[j+1]=pivot;
//     }
// }

// void RecursiveInsertionSort(vector<int> &arr,int n){
//     if(n<=1) return;
//     RecursiveInsertionSort(arr,n-1);
//     int last=arr[n-1];
//     int j=n-2;
//     while(j>=0 && arr[j]>last){
//         arr[j+1]=arr[j];
//         j--;
//     }
//     arr[j+1]=last;
// }

// void RecursiveBubbleSort(vector<int> &arr,int n){
//     if(n==1) return;
//     bool swapped=false;;
//     for(int i=0;i<n-1;i++){
//         if(arr[i]>arr[i+1]){
//             swap(arr[i],arr[i+1]);
//             swapped=true;
//         }
//     }
//     if(!swapped) return;
//     RecursiveBubbleSort(arr,n-1);
// }

// void Merge(vector<int> &arr,int left,int mid,int right){
//     int n1=mid-left+1;
//     int n2=right-mid;
//     vector<int> L(n1),R(n2);
//     for(int i=0;i<n1;i++) L[i]=arr[left+i];
//     for(int i=0;i<n2;i++) R[i]=arr[mid+1+i];
//     int i=0,j=0;
//     int k=left;
//     while(i<n1 && j<n2){
//         if(L[i]<=R[j]){
//             arr[k]=L[i];
//             i++;
//         }else{
//             arr[k]=R[j];
//             j++;
//         }
//         k++;
//     }
//     while(i<n1){
//         arr[k]=L[i];
//         i++;k++;
//     }
//     while(j<n2){
//         arr[k]=R[j];
//         j++;k++;
//     }
// }
// void MergeSort(vector<int>& arr,int left,int right){
//     if(left>=right) return;
//     int mid=left+(right-left)/2;
//     MergeSort(arr,left,mid);
//     MergeSort(arr,mid+1,right);
//     Merge(arr,left,mid,right);
// }

// void QuickSort(arr,low,high){

// }
// int partition(arr,low,high){

// }

// int main(){
//     int n;
//     cout<<"Enter Number of elements:";
//     cin>>n;
//     vector<int> arr(n);
//     cout<<"Enter Elements:";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     // SelectionSort(arr,n);
//     // BubbleSort(arr,n);
//     // InsertionSort(arr,n);
//     // RecursiveInsertionSort(arr,n);
//     // MergeSort(arr,0,n);
//     // QuickSort(arr,0,n); 
//     //Write Quick Sort Code and dry run all recursive algos in 
//     cout<<"Sorted Array:";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }


// // 08-08-2025
// // DUTCH NATIONAL FLAG
// void dnfsearch(vector<int> &arr,int n){
//     int left=0,mid=0,right=n-1;
//     while(mid<=right){
//         if(arr[mid]==0){
//             swap(arr[mid],arr[left]);
//             left++;
//             mid++;
//         }
//         else if(arr[mid]==1) mid++;
//         else if(arr[mid]==2){
//             swap(arr[mid],arr[right]);
//             right--;
//         }
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     cout<<"Enter Elements: ";
//     for(int i=0;i<n;i++) cin>>arr[i]; //Input the array
//     dnfsearch(arr,n);
//     cout<<"Sorted array: ";
//     for(int i=0;i<n;i++) cout<<arr[i]<<" "; //Output the array;
//     cout<<endl;
//     return 0;
// }

// //Moore's Voting Algorithm(majority Element)
// int mooresalgo(vector<int> &arr){
//     int n=arr.size();
//     int cnt=0;
//     int ele=arr[0];
//     for(int i=0;i<n;i++){
//         if(cnt==0) {
//             ele=arr[i];
//             cnt=1;
//         }
//         else if(arr[i]==ele)cnt++;
//         else if(arr[i]!=ele)cnt--;
//     }
//     int mcnt=0;
//     for(int i=0;i<n;i++) if(arr[i]==ele) mcnt++;
//     if(mcnt>n/2) return ele;
//     else return -1;
// }
// int main(){
//     int n;
//     cout<<"Enter Number Elements: ";
//     cin>>n;
//     vector<int> arr(n);
//     cout<<"Enter Elements: ";
//     for(int i=0;i<n;i++) cin>>arr[i];
//     int res=mooresalgo(arr);
//     if(res==-1) cout<<"No Element is maximum";
//     else cout<<"Maximum Element: "<<res;
// }

// // 09-08-2025
// // Kadane's Algorithm
// int kadane(vector<int> arr,int n){
//     int maxi=INT_MIN;
//     int sum=0;
//     int start=0,ansend=-1,ansstart=-1;
//     for(int i=0;i<n;i++){
//         if(sum==0) ansstart=i;
//         sum+=arr[i];
//         if(sum>maxi){
//             maxi=sum;
//             ansstart=start;
//             ansend=i;
//         }
//         if(sum<0) sum=0;
//     }
//     cout<<"Maximum Sum can be: "<<maxi<<endl;
//     cout<<"Subarray which gave MaxSum is :";
//     for(int i=ansstart;i<ansend+1;i++) cout<<arr[i]<<" ";
// }
// int main(){
//     int n;
//     cout<<"Enter Number of Elements: ";
//     cin>>n;
//     vector<int> arr(n);
//     cout<<"Enter Elements: ";
//     for(int i=0;i<n;i++) cin>>arr[i];
//     kadane(arr,n);
//     return 0;
// }

// // 10-08-2025
// Best time to buy and sell a stock
// int bsstock(vector<int> arr,int n){
//     int buy=arr[0];
//     int profit=0;
//     for(int i=1;i<n;i++){
//         profit=max(profit,arr[i]-buy);
//         buy=min(buy,arr[i]);
//     }
//     return profit;
// }
// int main(){
//     int n;
//     cout<<"Enter Number of Days: ";
//     cin>>n;
//     cout<<"Enter Elements: ";
//     vector<int> arr(n);
//     for(int i=0;i<n;i++) cin>>arr[i];
//     cout<<"Max Profit can be: "<<bsstock(arr,n);
// }

// Rearrange elements by signs
// vector<int> rearrange(vector<int>arr,int n){
//     vector<int> ans(n);
//     int pos=0,neg=1;
//     for(int i=0;i<n;i++){
//         if(arr[i]<0){
//             if(neg<n){
//                 ans[neg]=arr[i];
//                 neg+=2;
//             }
//         }else{
//             if(pos<n){
//                 ans[pos]=arr[i];
//                 pos+=2;
//             }
//         }
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cout<<"Enter number of elements: ";
//     cin>>n;
//     cout<<"Enter elements: ";
//     vector<int> arr(n);
//     for(int i=0;i<n;i++) cin>>arr[i];
//     arr=rearrange(arr,n);
//     for(int i=0;i<n;i++) cout<<arr[i]<<" ";
//     cout<<endl;
//     return 0;
// }

// Rearrange elements by signs(2nd kind) - Different numbers of pos and neg elements
// vector<int> rearrannge(vector<int> arr,int n){
//     vector<int> pos,neg;
//     for(int i=0;i<n;i++){
//         if(arr[i]>=0) pos.push_back(arr[i]);
//         else neg.push_back(arr[i]);
//     }
//     if(pos.size()>neg.size()){
//         for(int i=0;i<neg.size();i++){
//             arr[2*i]=pos[i];
//             arr[2*i+1]=neg[i];
//         }
//         int index=2*neg.size();
//         if(index<n){ 
//             for(int i=neg.size();i<pos.size();i++){
//                 arr[index]=pos[i];
//                 index++;
//             }
//         }
//     }else if(pos.size()<=neg.size()){
//         for(int i=0;i<pos.size();i++){
//             arr[2*i]=pos[i];
//             arr[2*i+1]=neg[i];
//         }
//         int index=2*pos.size();
//         if(index<n) for(int i=pos.size();i<neg.size();i++){
//             arr[index]=neg[i];
//             index++;
//         }
//     }
//     return arr;
// }
// int main(){
//     int n;
//     cout<<"Enter number of elements: ";
//     cin>>n;
//     cout<<"Enter elements: ";
//     vector<int> arr(n);
//     for(int i=0;i<n;i++) cin>>arr[i];
//     arr=rearrannge(arr,n);
//     for(int i=0;i<n;i++) cout<<arr[i]<<" ";
//     cout<<endl;
//     return 0;
// }

// // 12-08-2025
// WAP to insert a value after an index
// int main(){
//     int maxsize,target,currsize,idx;
//     cout<<"Enter size of array: ";cin>>maxsize;
//     int* arr=new int[maxsize];
//     cout<<"Enter number of elements you want to enter in the array: ";cin>>currsize;
//     cout<<"Enter Elements: ";for(int i=0;i<currsize;i++) cin>>arr[i];
//     cout<<"Enter number to be inserted: ";cin>>target;
//     cout<<"Enter index before which number should be inserted: ";cin>>idx;
//     if(currsize>=maxsize){
//         cout<<"Array is full";
//         delete[] arr;
//         return 0;
//     }
//     if(idx<-1){
//         cout<<"Element can't be inserted at this index";
//         delete[] arr;
//         return 0;
//     }
//     else{
//         for(int i=currsize-1;i>=idx+1;i--) arr[i+1]=arr[i];
//         arr[idx+1]=target;
//         currsize++;
//     }
//     for(int i=0;i<currsize;i++) cout<<arr[i]<<" ";
//     delete[] arr;
//     return 0;
// }

// 19-08-2025
// // Set Matrix Zero
// void setmatrixzerobettersolun(vector<vector<int>> &arr, int r, int c){
//     vector<int> rows(r,0);
//     vector<int> cols(c,0);
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             if(arr[i][j]==0){
//                 rows[i]=1;
//                 cols[j]=1;
//             }
//         }
//     }
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             if(rows[i] || cols[j]) arr[i][j]=0;
//         }
//     }
// }
// void setmatrixzerooptimalsolun(vector<vector<int>> & arr,int r,int c){
//     int col0=1;
//     for(int i=0;i<r;i++){
//         if(arr[i][0]==0) col0=0;
//         for(int j=1;j<c;j++){
//             if(arr[i][j]==0){
//                 arr[i][0]=0;
//                 arr[0][j]=0;
//             }
//         }
//     }
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             if(arr[i][0]==0 || arr[0][j]==0) arr[i][j]=0;
//         }
//     }
//     if(arr[0][0]==0) for(int i=0;i<c;i++) arr[0][i]=0;
//     if(col0==0) for(int i=0;i<r;i++) arr[i][0]=0;
// }
// int main(){
//     int r,c;
//     cout<<"Enter Number of rows in matrix: ";
//     cin>>r;
//     cout<<"Enter Number of columns in matrix: ";
//     cin>>c;
//     vector<vector<int>> arr(r,vector<int>(c));
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cout<<"Enter element at ["<<i<<"]["<<j<<"]: ";
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"Original Matrix: \n";
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     // setmatrixzerobettersolun(arr,r,c);
//     setmatrixzerooptimalsolun(arr,r,c);

//     cout<<"Zero Matrix: \n";
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// 20-08-25
// Spiral Triangle
// vector<int> spiralOrder(vector<vector<int>>& matrix) {
//     int n=matrix.size();
//     int m=matrix[0].size();
//     vector<int> ans;
//     int top=0,left=0,bottom=n-1,right=m-1;
//     while(left<=right && top<=bottom){
//         for(int i=left;i<=right;i++) ans.push_back(matrix[top][i]);
//         top++;
//         for(int i=top;i<=bottom;i++) ans.push_back(matrix[i][right]);
//         right--;
//         if(top<=bottom){
//             for(int i=right;i>=left;i--) ans.push_back(matrix[bottom][i]);
//             bottom--;
//         }
//         if(left<=right){
//             for(int i=bottom;i>=top;i--) ans.push_back(matrix[i][left]);
//             left++;
//         }
//     }
//     return ans;
// }

// Pascal's Triangle
// int nCr(int n,int r){
//     long long res=1;
//     for(int i=0;i<r;i++){
//         res=res*(n-i);
//         res=res/(i+1);
//     }
//     return (int)(res);
// }
// vector<vector<int>> generate(int n) {
//     vector<vector<int>> ans;
//     for(int row=1;row<=n;row++){
//         vector<int> temp;
//         for(int col=1;col<=row;col++) temp.push_back(nCr(row-1,col-1));
//         ans.push_back(temp);
//     }
//     return ans;
// }

// // Major Elements II - Three
// vector<int> majorelements2(vector<int>arr,int n){
//     int ele1=INT_MIN,ele2=INT_MIN;
//     int cnt1=0,cnt2=0;
//     vector<int> ans;
//     for(int i=0;i<n;i++){
//         if(cnt1==0 && arr[i]!=ele2){
//             cnt1=1;
//             ele1=arr[i];
//         }else if(cnt2==0 && arr[i]!=ele1){
//             cnt2=1;
//             ele2=arr[i];
//         }
//         else if(arr[i]==ele1) cnt1++;
//         else if(arr[i]==ele2) cnt2++;
//         else{
//             cnt1--;cnt2--;
//         }
//     }
//     cnt1=0,cnt2=0;
//     int minval=n/3;
//     for(int i=0;i<n;i++){
//         if(arr[i]==ele1)cnt1++;
//         else if(arr[i]==ele2)cnt2++;
//     }
//     if(cnt1>minval) ans.push_back(ele1);
//     if(cnt2>minval) ans.push_back(ele2);
//     return ans;
// }
// int main(){
//     int n;
//     cout<<"Enter Number of elements: ";
//     cin>>n;
//     vector<int> arr(n);
//     cout<<"Entere elements: ";
//     for(int j=0;j<n;j++){
//         cin>>arr[j];
//     }
//     vector<int> ans=majorelements2(arr,n);
//     cout<<"Major Elements are :";
//     for(int num:ans) cout<<num<<" ";
// }


// // 21-08-25
// // 3Sum
// vector<vector<int>> threeSum(vector<int> arr) {
//     int n=arr.size();
//     vector<vector<int>> ans;
//     sort(arr.begin(),arr.end());
//     for(int i=0;i<n;i++){
//         if(i!=0 && arr[i]==arr[i-1]) continue;
//         int j=i+1;
//         int k=n-1;
//         while(j<k){
//             int sum=arr[i]+arr[j]+arr[k];
//             if(sum<0) j++;
//             else if(sum>0) k--;
//             else{
//                 ans.push_back({arr[i],arr[j],arr[k]});
//                 j++;k--;
//                 while(j<k && arr[j]==arr[j-1]) j++;
//                 while(j<k && arr[k]==arr[k+1]) k--;
//             } 
//         }
//     }
//     return ans;
// }

// // 4Sum
// vector<vector<int>> fourSum(vector<int>& nums, int target) {
//     int n=nums.size();
//     vector<vector<int>> ans;
//     sort(nums.begin(),nums.end());
//     for(int i=0;i<n-3;i++){
//         if(i>0 && nums[i]==nums[i-1]) continue;
//         for(int j=i+1;j<n-2;j++){
//             if(j>i+1 && nums[j]==nums[j-1]) continue;
//             int k=j+1;
//             int l=n-1;
//             while(k<l){
//                 long long sum=nums[i]+nums[j];
//                 sum+=nums[k];
//                 sum+=nums[l];
//                 if(sum==target){
//                     ans.push_back({nums[i],nums[j],nums[k],nums[l]});
//                     k++;l--;
//                     while(k<l && nums[k]==nums[k-1]) k++;
//                     while(k<l && nums[l]==nums[l+1]) l--;
//                 }
//                 else if(sum<target) k++;
//                 else if(sum>target) l--;
//             }
//         }
//     }
//     return ans;
// }



