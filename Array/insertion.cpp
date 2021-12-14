#include<iostream>
#include<array>
using namespace std;
// array_at LIST OF OPERATIONS FOR ARRAY 
/*2.append(x)/add(x)
3.insert(index x)*/
// array_at  SUB 01 
struct arra_at1{
    int *array;
    int size;
    int length;
};
void display(struct arra_at1 arr){
   for(int i=0;i<arr.length;i++){
      cout<<arr.array[i]<<" ";
   }
   cout<<endl;
}
void insert(struct arra_at1 *arr,int new_ele,int index){
   for(int i=arr->length;i>index;i--){
       arr->array[i]=arr->array[i-1];
   }
   arr->array[index]=new_ele;
   arr->length++;
}
int main(){
    int size;
    // cin>>size; 
    size=10;
    struct arra_at1 arra;
    arra.array=new int[size];
    arra.size=size;
    int len=0;
    for(int i=0;i<size-5;i++){
      arra.array[i]=i+1;
      len++;
    }
    arra.length=len;
    display(arra);
    cout<<arra.length<<endl;
    insert(&arra,-9,2);
    display(arra);
    cout<<arra.length<<endl;
    return 0;
}