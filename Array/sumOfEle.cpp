#include<iostream>
#include<array>
using namespace std;
// array_at LIST OF OPERATIONS FOR ARRAY 
/*
11.sum_of(array) -> using recursive */
struct array1{
     int *arra;
     int size;
     int length;
};
void display(struct array1 arr){
    for(int i=0; i<arr.size;i++){
        cout<<arr.arra[i]<<" ";
    }
    cout<<endl;
}
// ->-> using loop funcation for adding all the elements in array
int sum_of_ele(struct array1 arr){
    int temp=0;
    for(int i=0; i<arr.size;i++){
       temp+=arr.arra[i];
    }
    return temp;
}
// ->-> using recurstion funcation for adding all the elements in array
int recur_sum(int arr[], int n){
    if(n<0)
        return 0;
    else 
        return recur_sum(arr,n-1)+arr[n];
}
int main(){
    struct array1 a;
    int size;
    // cin>>size;
    size=10;
    a.arra=new int[size];
    a.size=size;
    for(int i=0;i<size;i++){
      a.arra[i]=i+1;
    }
    a.length=0;
    cout<<"sum of the all elements: "<<sum_of_ele(a)<<endl;
    int a2[]={1,2,3,4,5,6,7,8,9,10};// in recurstion  I used normal array (I need to implement for struact array)
    cout<<"sum of the all elements: "<<recur_sum(a2,size)<<endl;
    return 0;
}