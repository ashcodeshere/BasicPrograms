#include<bits/stdc++.h>
using namespace std;

// Popular questions and their practice

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



// // Implementation of Linked List
// struct Node{
//     int data;
//     Node *next;
// };
// int main(){
//     Node *newNode=nullptr,*head=nullptr,*temp=nullptr;
//     int choice=1;
//     cout<<"Insertion........\n";
//     while(choice){
//         newNode=new Node();
//         cout<<"Enter Data: ";
//         cin>>newNode->data;
//         newNode->next=nullptr;
//         if(head==nullptr) temp=head=newNode;
//         else{
//             temp->next=newNode;
//             temp=newNode;
//         }
//         cout<<"Do You want to continue(0,1): ";
//         cin>>choice;
//     }
//     cout<<"Traversal........\n";
//     temp=head;
//     while(temp!=nullptr){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL\n";

// // ----------------------------------------Insertion--------------------------------------

// // Enter element in beginning
//     cout<<"Enter element in beginning\n";
//     newNode=new Node();
//     cout<<"Enter Data: ";
//     cin>>newNode->data;
//     newNode->next=head;
//     head=newNode;
//     temp=head;
//     while(temp!=nullptr){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL\n";
// // Enter element at end
//     cout<<"Enter element at end\n";
//     newNode=new Node();
//     cout<<"Enter Data: ";
//     cin>>newNode->data;
//     newNode->next=nullptr;
//     if(head==nullptr) head=newNode;
//     else{
//         temp=head;
//         while(temp->next!=nullptr) {
//             temp=temp->next;
//         }
//         temp->next=newNode;
//     }
//     temp=head;
//     while(temp!=nullptr){
//         cout<<temp->data<<"-?";
//         temp=temp->next;
//     }
//     cout<<"NULL\n";
// // Enter element at a specified Position
//     cout<<"Enter at a specified position\n";
//     int pos;
//     cout<<"Enter position: ";
//     cin>>pos;
//     temp=head;
//     int len=0;
//     while(temp!=nullptr){
//         temp=temp->next;
//         len++;
//     }
//     cout<<"Length is: "<<len<<endl;
//     if(pos>len||pos<0) cout<<"Out of Bound";
//     else{
//         newNode=new Node();
//         cout<<"Enter Data: ";
//         cin>>newNode->data;
//         if(pos==0){
//             newNode->next=head;
//             head=newNode;
//         }else{
//             temp=head;
//             for(int i=0;i<pos-1;i++){
//                 temp=temp->next;
//             }
//             newNode->next=temp->next;
//             temp->next=newNode;
//         }
//     }
//     temp=head;
//     while(temp!=nullptr){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL\n";

// // ----------------------------------------Deletion--------------------------------------

//     // Delete from Beginning
//     cout<<"Deletion From beginning........\n";
//     if(head==nullptr) cout<<"Deletion Not possible List is empty";
//     else{
//         temp=head;
//         head=temp->next;
//         cout<<"Deleting "<<temp->data<<endl;
//         delete temp;
//         temp=head;
//     }
//     temp=head;
//     while(temp!=nullptr){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL\n";
//     // Delete from end
//     cout<<"Deletion from end\n";
//     if(head==nullptr) cout<<"Deletion Not possible List is empty\n";
//     else if(head->next==nullptr){
//         cout<<"Deleting "<<head->data<<endl;
//         delete head;
//         head=nullptr;
//     }
//     else{
//         Node *prevNode=nullptr;
//         temp=head;
//         while(temp->next!=nullptr){
//             prevNode=temp;
//             temp=temp->next;
//         }
//         cout<<"Deleting "<<temp->data<<endl;
//         prevNode->next=nullptr;
//         delete temp;
//     }
//     temp=head;
//     while(temp!=nullptr){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL\n";
//     // Delete element from a specified position
//     cout<<"Deleting element from a specified position\n";
//     int pos;
//     cout<<"Enter Position: ";
//     cin>>pos;
//     temp=head;
//     int len=0;
//     while(temp!=nullptr){
//         len++;
//         temp=temp->next;
//     }
//     cout<<"Length of List: "<<len<<endl;
//     if(len==0) cout<<"Deletion not possible. List is Empty\n";
//     else if(len<pos || pos<1) cout<<"Out of Bound\n";
//     else if(pos==1){
//         temp=head;
//         head=head->next;
//         cout<<"Deleting "<<temp->data<<endl;
//         delete temp;
//     }else{
//         Node *prevNode=head;
//         for(int i=1;i<pos-1;i++){
//             prevNode=prevNode->next;
//         }
//         temp=prevNode->next;
//         prevNode->next=temp->next;
//         cout<<"Deleting "<<temp->data<<endl;
//         delete temp;
//     }
//     temp=head;
//     while(temp!=nullptr){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL\n";


//     // Reverse a Linked List
//     cout<<"Reversed Linked List : ";
//     Node *prevNode=nullptr,*nextNode=nullptr;
//     temp=head;
//     while(temp!=nullptr){
//         nextNode=temp->next;
//         temp->next=prevNode;
//         prevNode=temp;
//         temp=nextNode;
//     }
//     head=prevNode;
//     temp=head;
//     while(temp!=nullptr){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL\n";    
// }


// // Implementation of Doubly Linked List
// struct Node{
//     int data;
//     Node *prev;
//     Node *next;
// };

// Node* create(){
//     cout<<"Creating a Doubly Linked List\n";
//     int choice=1;
//     Node *head=nullptr,*newNode,*temp=nullptr;
//     while(choice){
//         newNode=new Node();
//         cout<<"Enter Data: ";
//         cin>>newNode->data;
//         newNode->next=nullptr;
//         newNode->prev=nullptr;
//         if(head==nullptr){
//             head=temp=newNode;
//         }else{
//             temp->next=newNode;
//             newNode->prev=temp;
//             temp=newNode;
//         }
//         cout<<"do you want to continue:(0,1)";
//         cin>>choice;
//     }
//     return head;
// }

// void DisplayForward(Node *head){
//     if (head == nullptr){
//         cout<<"The list is Empty";
//         return;
//     }
//     Node* temp=head;
//     cout<<"Traversing Doubly Linked List Forward\n";
//     while(temp!=nullptr){
//         cout<<temp->data<<"<->";
//         temp=temp->next;
//     }
//     cout<<"NULL\n";
// }

// void DisplayBackward(Node *head){
//     Node *temp=head;
//     while(temp->next!=nullptr) temp=temp->next; 
//     cout<<"Traversing Doubly Linked List Backward\n";
//     while(temp!=nullptr){
//         cout<<temp->data<<"<->";
//         temp=temp->prev;
//     }
//     cout<<"NULL\n";
// }

// void InsertAtBegin(Node *&head){
//     cout<<"Insertion at beginning\n";
//     Node* newNode=new Node();
//     cout<<"Enter Data: ";
//     cin>>newNode->data;
//     newNode->prev=nullptr;
//     newNode->next=nullptr;
//     if (head==nullptr) {
//         head=newNode;
//     }else{
//         newNode->next=head;
//         head->prev=newNode;
//         head=newNode;
//     }
// }

// void InsertAtEnd(Node *&head){
//     cout<<"Insertion at end\n";
//     Node *newNode=new Node();
//     cout<<"Enter Data: ";
//     cin>>newNode->data;
//     newNode->prev=nullptr;
//     newNode->next=nullptr;
//     Node* temp=head;
//     if (head==nullptr) {
//         head=newNode;
//     }else{
//         while(temp->next!=nullptr){
//             temp=temp->next;
//         }
//         newNode->prev=temp;
//         temp->next=newNode;
//     }
// }

// void InsertAtPos(Node *&head){
//     cout<<"Enter element at a specific pos\n";
//     int pos,len=0;
//     cout<<"Enter position at which element should be added: ";
//     cin>>pos;
//     Node* temp=head;
//     while(temp!=nullptr){
//         len++;
//         temp=temp->next; 
//     }
//     temp=head;
//     if(pos>len+1 || pos<=0){
//         cout<<"Insertion can't be done. Position entered is out of bound";
//     }else{
//         Node* newNode=new Node();
//         cout<<"Enter Data: ";
//         cin>>newNode->data;
//         newNode->prev=nullptr;
//         newNode->next=nullptr;
//         if(pos==1){
//             newNode->next=head;
//             if(head!=nullptr) head->prev=newNode;
//             head=newNode;
//             return;
//         }
//         else if(pos==len+1){
//             temp=head;
//             while(temp->next!=nullptr) temp=temp->next;
//             temp->next=newNode;
//             newNode->prev=temp;
//             return;
//         }
//         temp=head;
//         for(int i=1;i<pos-1;i++) temp=temp->next;
//         newNode->next=temp->next;
//         newNode->prev=temp;
//         if(temp->next!=nullptr) temp->next->prev=newNode;
//         temp->next=newNode;
//     }
// }

// void DeleteAtBegin(Node *&head){
//     if(head==nullptr) {
//         cout<<"Deletion Not Possible. List is already empty ";
//         return;
//     }else{
//         Node* temp=head;
//         head=head->next;
//         if(head!=nullptr) head->prev=nullptr;
//         cout<<"Deleting : "<<temp->data<<endl;
//         delete temp;
//         cout<<"Deleted";
//     }
// }

// void DeleteAtEnd(Node *&head){
//     if(head==nullptr) {
//         cout<<"Deletion Not Possible. List is already empty ";
//         return;
//     }
//     Node* temp=head;
//     if(temp->next==nullptr){
//         cout<<"Deleting: "<<temp->data<<endl;
//         delete temp;
//         head=nullptr;
//         cout<<"Deleted\n";
//         return;
//     }
//     while(temp->next!=nullptr){
//         temp=temp->next;
//     }
//     temp->prev->next=nullptr;
//     cout<<"Deleting : "<<temp->data<<endl;
//     delete temp;
//     cout<<"Deleted\n";
// }

// void DeleteAtPos(Node *&head){
//     if(head==nullptr){
//         cout<<"Deletion not possible. List is empty";
//         return;
//     }
//     int pos,len=0;
//     cout<<"Enter element position to delete: ";
//     cin>>pos;
//     Node* temp=head;
//     while(temp!=nullptr){
//         len++;
//         temp=temp->next;
//     }
//     if(pos<=0 || pos>len){
//         cout<<"Deletion not possible. position is Out Of Bound";
//         return;
//     }
//     if(pos==1){
//         temp=head;
//         head=head->next;
//         if(head!=nullptr) head->prev=nullptr;
//         cout<<"Deleting: "<<temp->data<<endl;
//         delete temp;
//         cout<<"Deleted\n";
//         return;
//     }
//     temp=head;
//     for(int i=1;i<pos;i++) temp=temp->next;
//     if(temp->next!=nullptr) temp->next->prev=temp->prev;
//     if(temp->prev!=nullptr) temp->prev->next=temp->next;
//     cout<<"Deleting: "<<temp->data<<endl;
//     delete temp;
//     cout<<"Deleted\n";
// }

// int main(){
//     Node *head=create();
//     DisplayForward(head);
//     InsertAtBegin(head);
//     DisplayForward(head);
//     InsertAtEnd(head);
//     DisplayForward(head);
//     InsertAtPos(head);
//     DisplayForward(head);
//     DeleteAtBegin(head);
//     DisplayForward(head);
//     DeleteAtEnd(head);
//     DisplayForward(head);
//     DeleteAtPos(head);
//     DisplayForward(head);
// }

// Singly Linkedlist - Searching
// Doubly Linkedlist (Traversal, Insertion, Deletion, Searching)
// Circular Linkedlist (Traversal, Insertion, Deletion, Searching)

// Basic operations on trees
// Creation
// Insertion
// Deletion
// Searching
// Traversal(DFS/BFS)
// Updating
// Will be starting trees soon
// BST(operations)
// AVL

// Basic operations on Graph
// Creation
// Insertion
// Deletion
// Searching
// Traversal(DFS/BFS)
// Updating
