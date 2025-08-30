#include<bits/stdc++.h>
using namespace std;

// This contains extra practie questions in an order so that if there is any probem later on i can check
// Tried to do write questins in multiple ways and get their solution

// // 22-08-25
// //Q1) Longest subarray length with sum zero
// //Q2) Longest subarray with sum zero
pair<int,int> maxlen(int A[],int n){
    unordered_map<int,int> map;
    int maxi=0,sum=0,end=-1,start=-1;
    for(int i=0;i<n;i++){
        sum+=A[i];
        if(sum==0){
            if(i+1>maxi) maxi=i+1,end=i,start=0;
        }
        else{
            if(map.find(sum)!=map.end()){
                int len=i-map[sum];
                if(len>maxi) maxi=len,start=map[sum]+1,end=i;
            }
            else map[sum]=i;
        }
    }
    return {start,end};
}
vector<int> maxsubarr(int A[],int n){
    vector<int>ans;
    pair<int,int> pair=maxlen(A,n);
    int start=pair.first;
    int end=pair.second;
    if(start==-1 || end==-1) {
        cout<<"No subarray with sum zero found"<<endl;
        return ans;
    }
    for(int i=start;i<=end;i++) ans.push_back(A[i]);
    cout<<"Maximum length of subarray with sum zero: "<<end-start+1<<endl;
    return ans;
}
// int main(){
//     int n;
//     cout<<"Enter number of elements:";cin>>n;
//     int arr[n];
//     cout<<"Enter Elements: ";
//     for(int i=0;i<n;i++) cin>>arr[i];
//     vector<int>ans=maxsubarr(arr,n);
//     cout<<"\nMaximum length subarray with sum zero: \n";
//     for(int num:ans) cout<<num<<" ";
// }


// //28-08-2025
// Write a Program to find the transpose of matrix using arrays in C++
void transpose(int arr[100][100],int tarr[100][100],int rows,int cols){
    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            tarr[j][i]=arr[i][j];
}
// int main(){
//     int rows,cols;
//     cout<<"Enter Number of rows and cols: ";
//     cin>>rows>>cols;
//     int arr[100][100];
//     int tarr[100][100];
//     cout<<"\nEnter Elements\n";    
//     for(int i=0;i<rows;i++)
//         for(int j=0;j<cols;j++){
//             cout<<"Enter Element at ["<<i<<"]["<<j<<"]: ";
//             cin>>arr[i][j];
//         }
//     transpose(arr,tarr,rows,cols);
//     cout<<"\nOriginal Array\n";
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++) cout<<arr[i][j]<<" ";
//         cout<<endl;
//     }
//     cout<<"\nTransposed Array\n";
//     for(int i=0;i<cols;i++){
//         for(int j=0;j<rows;j++) cout<<tarr[i][j]<<" ";
//         cout<<endl;
//     }
// }
