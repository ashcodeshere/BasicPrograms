//27/12/24
//Functions and Recursion

// //Basic Questions
// #include<stdio.h>
// void printHello();     //Function Declaration/Prototype
// int main(){
//     printHello();     //Function Calling
// }
// void printHello(){     //Function Definition
//         printf("Hello mittr!");
// }
// //Print table of a number by taking input by user
// #include<stdio.h>
// void printTable(int n);
// int main(){
//     int n;
//     printf("Enter number:");
//     scanf("%d",&n);
//     printTable(n);
//     return 0;
// }
// void printTable(int n){
//     for(int i=0;i<=10;i++){
//         printf("%d*%d=%d\n",i,n,i*n);
//     }
// }

// //Recursion

// //Sum of first n natural numbers
// #include<stdio.h>
// int sum(int n);
// int main(){
//     int n;
//     printf("Enter Number : ");
//     scanf("%d",&n);
//     printf("The sum of first n natural number is : %d",sum(n));
//     return 0;
// }
// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     int sumNm1=sum(n-1);
//     int sumN=sumNm1+n;
//     return sumN;
// }

// //Factorial of n
// #include<stdio.h>
// int fact(int n);
// int main(){
//     int n;
//     printf("Enter number : ");
//     scanf("%d",&n);
//     printf("Factorial of %d is : %d",n,fact(n));
// }
// int fact(int n){
//     if (n==0){
//         return 1;
//     }
//     int factNto1=fact(n-1);
//     int factN=factNto1*n;
//     return factN;
// }

//W.A.P. to convert celsius to fahrenheit
// #include<stdio.h>
// float convTemp(float c);
// int main(){
//     float c;
//     printf("Enter Number : ");
//     scanf("%f",&c);
//     printf("Temperature from Celsius to Fahrenheit : %.2f\n",convTemp(c));
// }
// float convTemp(float c){
//     float far=c*1.8+32;
//     return far;
// }

// //Print Fibonacci Series
// #include<stdio.h>
// int fib(int n);
// void printfibonacciseries(int n);
// int main(){
//     int n;
//     printf("Enter number of elements you need : ");
//     scanf("%d",&n);
//     printfibonacciseries(n);
// }
// int fib(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     return fib(n-1) + fib(n-2);
// }
// void printfibonacciseries(int n){
//     for (int i = 0; i <= n; i++) {
//         printf("%d ", fib(i));  
//     }
//     printf("\n");
//}

// //Program to enter price of some items and print their final cost with GST
// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter number of price:");
//     scanf("%d",&x);
//     float price[x];
//     int y;
//     printf("Enter %d elements : ",x);
//     for(int i=0;i<x;i++){
//         scanf("%d",&y);
//         price[i]=y;
//     }
//     for(int i=0;i<x;i++){
//         printf("Total price %d:%f\n",i,price[i]+(price[i]*(0.18)));
//     }
// }

// // Making a 2-D array and add tables of 2 and 3
// #include<stdio.h>
// void table2and3(int arr[][10],int n,int m,int num);
// int main(){
//     int tables[2][10];
//     table2and3(tables,0,10,2);
//     table2and3(tables,1,10,3);
//     for(int i=0;i<10;i++){
//         printf("%d\t",tables[0][i]);
//     }
//     printf("\n");
//     for(int i=0;i<10;i++){
//         printf("%d\t",tables[1][i]);
//     }
//     return 0;
// }
// void table2and3(int arr[][10],int n,int m,int num){
//     for (int i=0;i<m;i++){
//         arr[n][i]=num*(i+1);
//     }
// }

//Strings 
//Basic input and output
// Single-Word Inputs
// #include<stdio.h>
// int main(){
//     char name[100];
//     printf("Enter Name : ");
//     scanf("%s",name);
//     printf("%s",name);
//     return 0;
// }
// Multi-Word Inputs
// #include<stdio.h>
// int main(){
//     char name[100];
//     printf("Enter Name : ");
//     fgets(name,sizeof(name),stdin);
//     printf("%s",name);
//     return 0;
// }

// //Structures
// #include<stdio.h>
// typedef struct ComputerScience{
//     int roll;
//     float cgpa;
//     char name[100];
// }CS;
// int main(){
//     CS student1={19324562,9.8,"Anshul"};
//     printf("roll=%d,cgpa=%.1f,name=%s",student1.roll,student1.cgpa,student1.name);
//     return 0;
// }
// //Structures through Pointers
// #include<stdio.h>
// typedef struct ComputerScience{
//     int roll;
//     float cgpa;
//     char name[100];
// }CS;
// int main(){
//     CS s1={19324562,9.8,"Anshul"};
//     CS *ptr;
//     ptr=&s1;
//     printf("roll=%d,cgpa=%.1f,name=%s",ptr->roll,ptr->cgpa,ptr->name);
//     return 0;
// }

// // Create a structure to store vectors and print sum of two vectors
// #include<stdio.h>
// struct vectors{
//     int x; int y;
// };
// void calcsum(struct vectors vector1,struct vectors vector2,struct vectors sum);
// int main(){
//     struct vectors vector1={5,4};
//     struct vectors vector2={7,10};
//     struct vectors sum={0,0};
//     calcsum(vector1,vector2,sum);
// }
// void calcsum(struct vectors vector1,struct vectors vector2,struct vectors sum){
//     sum.x=vector1.x+vector2.x;
//     sum.y=vector1.y+vector2.y;
//     printf("Sum of x-vector:%d\t",sum.x);
//     printf("Sum of y-vector:%d\t",sum.y);
// }
//27/12/24
//Functions and Recursion

// //Basic Questions
// #include<stdio.h>
// void printHello();     //Function Declaration/Prototype
// int main(){
//     printHello();     //Function Calling
// }
// void printHello(){     //Function Definition
//         printf("Hello mittr!");
// }
// //Print table of a number by taking input by user
// #include<stdio.h>
// void printTable(int n);
// int main(){
//     int n;
//     printf("Enter number:");
//     scanf("%d",&n);
//     printTable(n);
//     return 0;
// }
// void printTable(int n){
//     for(int i=0;i<=10;i++){
//         printf("%d*%d=%d\n",i,n,i*n);
//     }
// }

// //Recursion

// //Sum of first n natural numbers
// #include<stdio.h>
// int sum(int n);
// int main(){
//     int n;
//     printf("Enter Number : ");
//     scanf("%d",&n);
//     printf("The sum of first n natural number is : %d",sum(n));
//     return 0;
// }
// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     int sumNm1=sum(n-1);
//     int sumN=sumNm1+n;
//     return sumN;
// }

// //Factorial of n
// #include<stdio.h>
// int fact(int n);
// int main(){
//     int n;
//     printf("Enter number : ");
//     scanf("%d",&n);
//     printf("Factorial of %d is : %d",n,fact(n));
// }
// int fact(int n){
//     if (n==0){
//         return 1;
//     }
//     int factNto1=fact(n-1);
//     int factN=factNto1*n;
//     return factN;
// }

//W.A.P. to convert celsius to fahrenheit
// #include<stdio.h>
// float convTemp(float c);
// int main(){
//     float c;
//     printf("Enter Number : ");
//     scanf("%f",&c);
//     printf("Temperature from Celsius to Fahrenheit : %.2f\n",convTemp(c));
// }
// float convTemp(float c){
//     float far=c*1.8+32;
//     return far;
// }

// //Print Fibonacci Series
// #include<stdio.h>
// int fib(int n);
// void printfibonacciseries(int n);
// int main(){
//     int n;
//     printf("Enter number of elements you need : ");
//     scanf("%d",&n);
//     printfibonacciseries(n);
// }
// int fib(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     return fib(n-1) + fib(n-2);
// }
// void printfibonacciseries(int n){
//     for (int i = 0; i <= n; i++) {
//         printf("%d ", fib(i));  
//     }
//     printf("\n");
//}

// //Program to enter price of some items and print their final cost with GST
// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter number of price:");
//     scanf("%d",&x);
//     float price[x];
//     int y;
//     printf("Enter %d elements : ",x);
//     for(int i=0;i<x;i++){
//         scanf("%d",&y);
//         price[i]=y;
//     }
//     for(int i=0;i<x;i++){
//         printf("Total price %d:%f\n",i,price[i]+(price[i]*(0.18)));
//     }
// }

// // Making a 2-D array and add tables of 2 and 3
// #include<stdio.h>
// void table2and3(int arr[][10],int n,int m,int num);
// int main(){
//     int tables[2][10];
//     table2and3(tables,0,10,2);
//     table2and3(tables,1,10,3);
//     for(int i=0;i<10;i++){
//         printf("%d\t",tables[0][i]);
//     }
//     printf("\n");
//     for(int i=0;i<10;i++){
//         printf("%d\t",tables[1][i]);
//     }
//     return 0;
// }
// void table2and3(int arr[][10],int n,int m,int num){
//     for (int i=0;i<m;i++){
//         arr[n][i]=num*(i+1);
//     }
// }

//Strings 
//Basic input and output
// Single-Word Inputs
// #include<stdio.h>
// int main(){
//     char name[100];
//     printf("Enter Name : ");
//     scanf("%s",name);
//     printf("%s",name);
//     return 0;
// }
// Multi-Word Inputs
// #include<stdio.h>
// int main(){
//     char name[100];
//     printf("Enter Name : ");
//     fgets(name,sizeof(name),stdin);
//     printf("%s",name);
//     return 0;
// }

// //Structures
// #include<stdio.h>
// typedef struct ComputerScience{
//     int roll;
//     float cgpa;
//     char name[100];
// }CS;
// int main(){
//     CS student1={19324562,9.8,"Anshul"};
//     printf("roll=%d,cgpa=%.1f,name=%s",student1.roll,student1.cgpa,student1.name);
//     return 0;
// }
// //Structures through Pointers
// #include<stdio.h>
// typedef struct ComputerScience{
//     int roll;
//     float cgpa;
//     char name[100];
// }CS;
// int main(){
//     CS s1={19324562,9.8,"Anshul"};
//     CS *ptr;
//     ptr=&s1;
//     printf("roll=%d,cgpa=%.1f,name=%s",ptr->roll,ptr->cgpa,ptr->name);
//     return 0;
// }

// // Create a structure to store vectors and print sum of two vectors
// #include<stdio.h>
// struct vectors{
//     int x; int y;
// };
// void calcsum(struct vectors vector1,struct vectors vector2,struct vectors sum);
// int main(){
//     struct vectors vector1={5,4};
//     struct vectors vector2={7,10};
//     struct vectors sum={0,0};
//     calcsum(vector1,vector2,sum);
// }
// void calcsum(struct vectors vector1,struct vectors vector2,struct vectors sum){
//     sum.x=vector1.x+vector2.x;
//     sum.y=vector1.y+vector2.y;
//     printf("Sum of x-vector:%d\t",sum.x);
//     printf("Sum of y-vector:%d\t",sum.y);
// }
