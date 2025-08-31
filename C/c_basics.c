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

#include<stdio.h>

//// -------------------------------------------------------------------------------------------------------------------------------------------

////1) The greatest number among three
// void main(){
//     printf("Program NO. 1\n");
//     int a,b,c;
//     printf("Enter numbers a : " );
//     scanf("%d", &a);
//     printf("Enter numbers b : " );
//     scanf("%d", &b);
//     printf("Enter numbers c : " );
//     scanf("%d", &c);
//     if (a>b){
//         if(a>c){
//             printf("a is greater with value %d",a);
//         }
//         else{
//             printf("c is greater with value %d",c);
//         }
//     }

//     if (b>a){
//         if(b>c){
//             printf("b is greater with value %d",b);
//         }
//         else{
//             printf("c is greater with value %d",c);
//         }
//     }
// }
////____________________________________________________________________________________________________________________________________________

////2)Check whether the number is +ve or -ve
// void main(){
//     printf("Program NO.2\n");
//     int n;
//     printf("Enter no to be checked : ");
//     scanf("%d",&n);
//     if(n>0){
//         printf("\nNO. %d is +ve",n);
//     }
//     else{
//         printf("\nNO. %d is -ve",n);
//     }
// } 
////_____________________________________________________________________________________________________________________________________________

////3) Check whether character is vowel or consonant
// void main(){
//     printf("Program No. 3\n");
//     char c;
//     printf("Enter character to be checked : ");
//     scanf("%c",&c);
//     if( c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
//         printf("Character %c is a vowel",c);
//     }else{
//         printf("Character %c is consonent",c);
//     }
// }
////___________________________________________________________________________________________________________________________________________

////4) To check whether a character is an alphabet or not
// void main(){
//     printf("Program No. 4\n");
//     char c;
//     printf("Enter character to be checked : ");
//     scanf("%c",&c);
//     if(c>='a'&&c<='z'||c>='A'&&c<='Z'){
//         printf("%c is an alphabet",c);
//     }else{
//         printf("%c is not an alphabet",c);
//     }
// }
////____________________________________________________________________________________________________________________________________________

////5(i) To check whether a character is upper case or lower case
// void main(){
//     printf("Program No. 5(i)\n");
//     char c;
//     printf("Enter character to be checked : ");
//     scanf("%c",&c);
//     if(c>='a'&&c<='z'||c>='A'&&c<='Z'){
//         if(c>='a'&&c<='z') {
//             printf("%c is a lowercase character",c);
//         }
//         else if(c>='A'&&c<='Z') {
//             printf("%c is an uppercase character",c);
//         }    
//     }else if (c>='0' && c<='9'){
//         printf("%c is a digit",c);
//     }
//     else{
//         printf("%c is a special character",c);
//     }
// } 
////--------------------------------------------OR--------------------------------------------------------------
////5(ii)To check whether a character is upper case or lower case
// #include<ctype.h> /*For isupper() and islower()*/
// void main(){
//     printf("Program No. 5(ii)\n");
//     char c;
//     printf("Enter character to be checked : ");
//     scanf("%c",&c);
//     if(isalpha(c)){
//         if(islower(c)) {
//             printf("%c is a lowercase character",c);
//         }
//         else if(isupper(c)) {
//             printf("%c is an uppercase character",c);
//         }    
//     }else if (isdigit(c)){
//         printf("%c is a digit",c);
//     }
//     else{
//         printf("%c is a special character",c);
//     }
// } 
////________________________________________________________________________________________________________________________________________

////6) The Number Is Even or Odd
// void main(){
//     printf("Program no. 6\n");
//     int n;
//     printf("Enter no. :");
//     scanf("%d",&n);
//     if (n%2==0){
//         printf("%d is an Even no.\n",n);
//     } else if(n%2!=0){
//         printf("%d is an Odd no.\n",n);
//     } else{
//         printf("%d is neither Odd or Even : \n",n);
//     }
// }
////___________________________________________________________________________________________________________________________________________

////7)Greatest of Two Numbers
// void main(){
//     printf("Program No. 7\n");
//     int a,b;
//     printf("Enter 1st no. : ");
//     scanf("%d",&a);
//     printf("Enter 2nd no. : ");
//     scanf("%d",&b);
//     if (a>b){
//         printf("%d is greatest",a);
//     }else if(b>a){
//         printf("%d is greatest",b);
//     }else{
//         printf("Both are equal");
//     }
// } 
////_____________________________________________________________________________________________________________________________________________

////8) Greatest Among Three Numbers
// void main(){
//     printf("Program No. 8"); 
//     int a,b,c;
//     printf("enter nos. : ");
//     scanf("%d %d %d",&a,&b,&c);
//     if (a>b && a>c){
//         printf("%d is greatest",a);
//     }else if(b>a && b>c){
//         printf("%d is greatest",b);    
//     }else if(c>a && c>b){
//         printf("%d is greatest",c);
//     }else if(a==b && b==c){
//         printf("All three numbers are same");
//     }
// }
////___________________________________________________________________________________________________________________________________________

////9) To check whether the input is a leap year or not
// void main(){
//     printf("Program No. 9\n");
//     int y;
//     printf("Enter YEAR(YYYY) : ");
//     scanf("%d",&y);
//     if(y%100==0){
//         printf("%d is a Century Year\n",y);
//         if(y%400==0){
//             printf("%d is also a Leap Year according to both Julian and Gregorgian calendar",y);
//         }else{
//             printf("%d is not a Leap Year according to Gregorgian calendar but it is a leap year according to Julian Calendar ",y);
//         } 
//     }
//     else if(y%4==0){
//         printf("%d is a Leap Year",y);
//     }else{
//         printf("%d is not a Leap Year",y);
//     }
// }
////___________________________________________________________________________________________________________________________________________

////10)To check whether date is right or not
// void main(){
//     printf("Program No. 10\n");
//     int dd,mm,yy;
//     printf("Enter Date (DD/MM/YYYY) : ");
//     scanf("%d/%d/%d",&dd,&mm,&yy);
//     if(yy>=1000 && yy<=5000) //To check Year
//     {
//         if (mm>=1 && mm<=12) //To check Month
//         {
//             if((dd>=1 && dd<=31)&&(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)) //To check Date
//                 printf("Date is valid\n");
//             else if((dd>=1 && dd<=30)&&(mm==4||mm==6||mm==9||mm==11)) //To check Date
//                 printf("Date is Valid\n");
//             else if((dd>=1 && dd<=28)&&(mm==2)) //To check Date
//                 printf("Date is valid\n");
//             else if((dd==29&&mm==2)&&(yy%400==0||(yy%4==0 && yy%100!=0))) //To check Date
//                 printf("Date is valid\n");    
//             else
//                 printf("Date is Invalid\n");                
//         }
//         else {
//             printf("Month is Invalid\n");
//         }
//     }else {
//         printf("Year is Invalid");
//     }
// }
////___________________________________________________________________________________________________________________________________________

////11)To check Voting Eligibility
// void main(){
//     printf("Program No. 11\n");
//     int age;
//     printf("Enter your age : ");
//     scanf("%d",&age);
//     if (age>=18)
//         printf("Eligible for voting");
//     else 
//         printf("Not eligible for voting");
// }
////_________________________________________________________________________________________________________________________________________

////12)Input angles of a triangle and check whether the triangle is valid or not.
// void main(){
//     printf("Program No. 12\n");
//     float a,b,c;
//     float sum;
//     printf("Enter 1st angle : ");
//     scanf("%f",&a);
//     printf("Enter 2nd angle : ");
//     scanf("%f",&b);
//     printf("Enter 3rd angle : ");
//     scanf("%f",&c);
//     sum=a + b + c;
//     if (sum==180)
//         printf("Triangle is valid");
//     else 
//         printf("Not a valid triangle");    
// }
////_________________________________________________________________________________________________________________________________________

////13)Find all roots of quadratic equations
// #include<math.h>
// void main(){
//     printf("Program No. 13\n");
//     printf("a*x*x + b*x + c\n");
//     float a,b,c,det,real,img;
//     float r1,r2;
//     printf("Enter Coefficient of a referring to equation given above : ");
//     scanf("%f %f %f",&a,&b,&c);
//     det=b*b-4*a*c;
//     if (det>0){
//         r1=(-b+sqrt(det))/(2*a);
//         r2=(-b-sqrt(det))/(2*a);
//         printf("%f %f are the roots",r1,r2);
//     }else if(det==0){
//         r1=r2=-b/(2*a);
//         printf("%f %f are the roots",r1,r2);
//     }else{
//         real=-b/(2*a);
//         img=sqrt(-det)/(2*a);
//         printf("r1=%f+%f, r2=%f-%f are the roots",real,img,real,img);
//     }
// }
////_______________________________________________________________________________________________________________________________________

////14)Calculate Profit or Loss
// void main(){
//     printf("Program No. 14\n");
//     float cp,sp,p,l;
//     printf("Enter Cost Price : ");
//     scanf("%f",&cp);
//     printf("Enter Selling Price : ");
//     scanf("%f",&sp);
//     if (cp>sp){
//         l=cp-sp;
//         printf("There is a loss of : %f",l);
//     }else if(sp>cp){
//         p=sp-cp;
//         printf("There is a profit of : %f",p);
//     }else{
//         printf("There is neither profit nor loss");
//     }
// } 
////_______________________________________________________________________________________________________________________________________


// #include<stdio.h>

// //---------------------------------------------------------------------------------------------------------------------------------------------

// //1)area and circumference of a circle //
// int main(){
//   printf("Program No. 1\n");
//   float r;
//   float area;
//   float circum;
//   printf("Enter radius of circle :");
//   scanf("%f",&r);
//   area= 3.14*r*r;
//   circum= 2*3.14*r;
//   printf("area of circle : %f\n",area);
//   printf("Circumference of circle %f:",circum);
//   return 0;}
// //_____________________________________________________________________________________________________________________________________________

// //2)PRINT ASCII value of character //
// int main() {
//   printf("Program No. 2\n");
//   char c;
//   printf("enter a character : ");
//   scanf("%c",&c);
//   printf("ASCII value of %c is : %d",c,c); 
// //%d gives the integer(ASCII) value of characters
//   return 0; }
// //______________________________________________________________________________________________________________________________________________

// //3)Area of triangle
// void equitri();
// void isotri();
// void scatri();
// void main(){
//   printf("Program No. 3\n");
//   int x;
//   printf("for equilateral triangle press 3\n");
//   printf("for isosceles triangle press 2\n");
//   printf("for scalene triangle press 1\n");
//   scanf("%d",&x);
//   if (x==3){
//     equitri();}
//   else if (x==2){
//     isotri();}
//   else if (x==1){
//     scatri();}
// }
// void equitri(){
//   printf("Program No. 4\n");
//   float s;
//   float area;
//   printf("Enter side :");
//   scanf("%f",&s);
//   area=(1.73*s*s)/4;
//   printf("area of triangle with side %f is : %f",s,area);}
// void isotri(){
//   float b;
//   float h;
//   float area;
//   printf("Enter base of triangle : ");
//   scanf("%f",&b);
//   printf("Enter height of triangle : ");
//   scanf("%f",&h);
//   area=b*h/2;
//   printf("Area of isosceles triangle is : %f",area);}  
// void scatri(){
//   float b;
//   float h;
//   float area;
//   printf("Enter base of triangle :");
//   scanf("%f",&b);
//   printf("Enter height of triangle :");
//   scanf("%f",&h);
//   area=b*h/2;
//   printf("Area of scalene triangle is : %f",area);}  
// //______________________________________________________________________________________________________________________________________________

// //4)Convert person's name in abbrievated
// int main(){
//   printf("Program No. 5\n");
//   char fname[20], mname[20], lname[20];
//   printf("Enter full name (first middle, last) : ");
//   scanf("%s %s %s", fname, mname, lname);
//   printf("Abbreviated name : ");
//   printf("%c. %c. %s\n", fname[0], mname[0], lname);
//   return 0;
// }
// //_____________________________________________________________________________________________________________________________________________

// //5)Simple Interest
// int main(){
//   printf("Program No. 6\n");
//   float p;
//   float r;
//   float t;
//   float interest;
//   float balance;
//   printf("Enter principle amount : ");
//   scanf("%f",&p);
//   printf("Enter rate of interest (Yearly) : ");
//   scanf("%f",&r);
//   printf("Enter time period of interest (Annual) : ");
//   scanf("%f",&t);
//   interest=t*p*(r/100);
//   balance=p+t*p*(r/100);
//   printf("Principle interest for time %f years is : %f\n",t,interest);
//   printf("Final Amount after interest : %f\n",balance);
//   return 0;}
// //______________________________________________________________________________________________________________________________________________

// //6)Gross Salary of an Employee
// int main(){
//   printf("Program No. 7\n");
//   float sal;
//   float gp;
//   char empname[50];
//   float newsal;
//   printf("Enter Salary of Employee : ");
//   scanf("%f",&sal);
//   printf("Enter amount to gross : ");
//   scanf("%f",&gp);
//   printf("Enter name of Employee : ");
//   scanf("%s",&empname);
//   newsal=sal+gp;
//   printf("New Salary of Employee %s is : %f",empname,newsal);  }
// //_____________________________________________________________________________________________________________________________________________

// //7)Percentage of 5 Subjects
// int main(){
//   printf("Program No. 8\n");
//   float a,b,c,d,e;
//   float mm;
//   float per; 
//   float sum;
//   printf("Enter maximum Marks : ");
//   scanf("%f",&mm);
//   printf("Enter marks obtained in a :");
//   scanf("%f",&a);
//   printf("Enter marks obtained in b :");
//   scanf("%f",&b);
//   printf("Enter marks obtained in c :");
//   scanf("%f",&c);
//   printf("Enter marks obtained in d :");
//   scanf("%f",&d);
//   printf("Enter marks obtained in e :");
//   scanf("%f",&e);
//   sum=a+b+c+d+e;
//   per=(sum/mm)*100;
//   printf("Percentage of 5 subject marks : %f \n", per);
// }
// //___________________________________________________________________________________________________________________________________________

// //8)Converting Temperature Celsius into Fahrenheit
// int main(){
//   printf("Program No.8\n");
//   char i;
//   float c;
//   float fh;
//   float ctof;
//   float ftoc;
//   printf("If temperature is in celsius press C\n");
//   printf("If temperature is in fahrenhiet press F\n");
//   scanf("%c",&i);
//   if (i =="C") {
//     printf("Enter temperature in Celsius : \n");
//     scanf("%f",&c);
//     ctof=1.8*c+32;
//     printf("Temperature in Fahrenhiet : %f",ctof);
//     }
//   else if (i =="F");{ 
//     printf("Enter temperature in Fahrenhiet : %f\n",ftoc);
//     scanf("%f",&fh);
//     ftoc=(fh-32)/1.8;
//     printf("Temperature in Celsius : \n")
//     }
//   else{
//     printf("Wrong Input");
//     }
//   return 0;  }
// //_____________________________________________________________________________________________________________________________________________

// //9)Display size of different datatype
// void main(){
//   printf("Program No. 9\n");
//   int i;
//   float f;
//   double d;
//   char c; 
//   printf("Size of int datatype : %d bytes\n",sizeof(i));
//   printf("Size of float datatype : %d bytes\n",sizeof(f));
//   printf("Size of double datatype : %d bytes\n",sizeof(d));
//   printf("Size of char datatype : %d bytes\n",sizeof(c));
// }
// //_____________________________________________________________________________________________________________________________________________

// //10) Factorial of a given number
// void main(){
//   printf("Program No. 10\n");
//   int i=1;
//   int fact=1;
//   int x;
//   printf("Enter Number : ");
//   scanf("%d",&x);
//   for (i;i<=x;i++){
//     fact*=i;
//   }
//   printf("Factorial of %d is : %d",x,fact);
// }
// //______________________________________________________________________________________________________________________________________________

// //11)Read Integer (N) and Print the First Three Powers (N^1, N^2, N^3)
// void main(){
//   printf("Program No. 11\n");
//   int N;
//   int i;
//   printf("Enter Number : ");
//   scanf("%d",&N);
//   printf("%d^1 is : %d\n",N,N);
//   printf("%d^2 is : %d\n",N,N*N);
//   printf("%d^3 is : %d\n",N,N*N*N);
// }
// //______________________________________________________________________________________________________________________________________________

// //12) Area of a Circle
// void main(){
//   printf("Program No. 12\n");
//   float r;
//   float area;
//   printf("Enter Number : ");
//   scanf("%f",&r);
//   area=3.14*r*r;
//   printf("Area of circle with radius %f is %f",r,area);
// }
// //_____________________________________________________________________________________________________________________________________________

// //13) LCM of Two Numbers
// void main(){
//   printf("Program No. 13\n");
//   int n1,n2,m,lcm;
//   printf("Enter Number : ");
//   scanf("%d",&n1);
//   printf("Enter Number : ");
//   scanf("%d",&n2);
//   m=(n1>n2)?n1:n2;
//   m=lcm;
//   while((lcm%n1!=0)||(lcm%n2!=0)){
//     lcm+=m;
//   }
//   printf("LCM of %d & %d is : %d",n1,n2,lcm);
// }
// //_____________________________________________________________________________________________________________________________________________

// //14) GCD of two numbers
// void main(){
//   printf("Program No. 14\n");
//   int i,n1,n2,gcd=1;
//   printf("Enter Number : ");
//   scanf("%d",&n1);
//   printf("Enter Number : ");
//   scanf("%d",&n2);
//   for (i=1;i<=n1 && i<=n2;++i){
//     if( n1%i==0 && n2%i==0 ){
//       gcd=i;
//     }
//     else{
//       continue;
//     }
//   }
//   printf("GCD of two numbers %d & %d is : %d",n1,n2,gcd);
// }
// //_____________________________________________________________________________________________________________________________________________


 #include<stdio.h>

// //1) Reverse a given No.
// void main(){
//     printf("Program No. 1\n");
//     int n,rev=0,rem;
//     printf("Enter a Number : ");
//     scanf("%d",&n);
//     while(n!=0){
//         rem=n%10;
//         rev=rev*10+rem;
//         n=n/10;
//     }
//     printf("Reversed Number : %d",rev);
// }
//______________________________________________________________________________________________________

// //2) Find number is Armstrong or not
// void main(){
//     printf("Program No. 2\n");
//     int n, r, sum=0, temp;
//     printf("Enter the number : ");
//     scanf("%d",&n);
//     temp=n;
//     while (n>0){
//         r=n%10;
//         sum=sum+(r*r*r);
//         n=n/10;
//     }if(temp==sum){
//         printf("Armstrong Number");
//     }else{
//         printf("Not Armstrong Number");
//     }
// }
// //____________________________________________________________________________________________________

// //3)Calculate sum of n natural numbers
// void main(){
//     printf("Program No.3\n");
//     int i=0,n,sum=0;
//     printf("Enter number : ");
//     scanf("%d",&n);
//     while (i<=n){
//         sum+=i;
//         i++;
//     }
//     printf("The sum of first %d natural numbers is : %d",n,sum);
// }
// //______________________________________________________________________________________________________

//4) Display Fibanocii series
// void main(){
//     printf("Porgram No.4\n");
//     int i=2,n,sum,f1=0,f2=1;
//     printf("Number of elements you want to print : ");
//     scanf("%d",&n);
//     printf("\n%d %d ",f1,f2);
//     while(i<=n){
//         sum=f1+f2;
//         printf("%d ",sum);
//         f1=f2;
//         f2=sum;
//         i++;
//     }
// }
// //_________________________________________________________________________________X______________________

// //5)Find LCM of two numbers
// void main(){
//   printf("Program No. 5\n");
//   int n1,n2,m,lcm;
//   printf("Enter 1st Number : ");
//   scanf("%d",&n1);
//   printf("Enter 2nd Number : ");
//   scanf("%d",&n2);
//   m=(n1>n2)?n1:n2;
//   lcm=m;
//   while((lcm%n1!=0)||(lcm%n2!=0)){
//     lcm+=m;
//   }
//   printf("LCM of %d & %d is : %d",n1,n2,lcm);
// }
// //_______________________________________________________________________________________________________

// //6) Reverse a number
// void main(){
//     printf("Program No. 6\n");
//     int r=0,n,i=0;
//     printf("Enter number to be reversed : ");
//     scanf("%d",&n);
//     while(n!=0){
//         i=n%10;
//         r=r*10+i;
//         n=n/10;
//     }
//     printf("The reversed number is : %d",r);
// }
// //________________________________________________________________________________________________________

// // 7) Check whether a number is palindrome or not
// void main(){
//     printf("Program No. 7\n");
//     int n, reversed=0, remainder, original;
//     printf("Enter number to be reversed : ");
//     scanf("%d",&n);
//     original = n;
//     while(n!=0){ 
//         remainder=n%10;
//         reversed=reversed*10+remainder;
//         n=n/10;
//     }
//     if (original=reversed){
//     printf("%d is a palindrome",original);
//     }else{
//     printf("%d is not a palindrome",original);        
//     }
//     printf("\n%d\n",original);
//     printf("%d\n",reversed);
//     printf("%d\n",n);
// }
// //_____________________________________________________________________________________________________________________

// //8) Count number of digits of an integer
// void main(){
//     printf("Program No. 8\n");
//     long long n;
//     int count=0;
//     printf("Enter integer : ");
//     scanf("%lld",&n);
//     while(n!=0){
//         n=n/10;
//         count++;
//     }printf("No. of digits is : %d",count);
// }
// //________________________________________________________________________________________________________________________

// //9) Find a generic root of a number
// int main(){
//     printf("Program number 9\n");
//     int n,s,r;
//     printf("Enter number : ");
//     scanf("%d",&n);
//     while(n>=10){
//         for(s=0;n>0;n=n/10){
//             r=n%10;
//             s=s+r;
//         }if(s>=10){
//             n=s;
//         }else{
//             printf("Generic Root of given number is : %d",s);
//         }
//     }
// }
// //________________________________________________________________________________________________________________________

//10) Print a calender using an input from user
int main(){
    printf("Program number 10\n");
    int year, month, day, days_in_month, day_code, i;
    //To get user input 
    printf("Enter year : ");
    scanf("%d",&year);
    printf("Enter month : ");
    scanf("%d",&month);
    if(month<1 || month>12){
        printf("Invalid Month\n");
        return 1;
    }
    // Determine days in month
    if(month==2){
        if((year%4==0 && year&100==0)||year%400==0){
            days_in_month=29;
        }else{
            days_in_month=28;
        }
    }else if(month==4 || month==6 || month==9 || month==11){
        days_in_month=30;
    }else{
        days_in_month=31;
    }
    //Calculate day code("Zeller's Congurence") 
    month-=2;
    if(month<1){
        month+=12;
        year--;
    }
    day_code=(1+(13*month-1)/5+ year + year/4 - year/100 + year/400)%7;
    //Calendar Header
    printf("Sun Mon Tues Wed Thur Fri Sat\n");
    //Print days
    day=1;
    while(day<=days_in_month){
        printf("%4d",day);
        day++;
        day_code=(day_code+1)%7;
        if(day_code==0){
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}