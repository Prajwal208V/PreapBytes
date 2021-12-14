#include<iostream>
#include<array>
using namespace std;
// array_at LIST OF OPERATIONS FOR ARRAY 
/*
5.serach(x)->linear Serach->imroving liner search by 1.transpostion(slowly) 2. move to head
*/
struct arra_at1{
    int *array;
    int size;
    int length;
};
int linear_ser(struct arra_at1 arr,int key){
   for(int i=0;i<10;i++){
       if(arr.array[i]==key) return i;
   }
}
void display(struct arra_at1 arr){
   for(int i=0;i<arr.length;i++){
      cout<<arr.array[i]<<" ";
   }
   cout<<endl;
}
int main(){
    int size;
    // cin>>size; 
    size=10;
    struct arra_at1 arra;
    arra.array=new int[size];
    arra.size=size;
    int len=0;
    for(int i=0;i<size;i++){
      arra.array[i]=i+1;
      len++;
    }
    arra.length=len;
    display(arra);
    
    cout<<"index: "<<linear_ser(arra,5);
    return 0;
}