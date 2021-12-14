#include<iostream>
#include<array>
using namespace std;
// array_at LIST OF OPERATIONS FOR ARRAY 
/*4.delete(index)*/
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
void del(struct arra_at1 *arr,int index){
   for(int i=index;i<arr->length;i++){
       arr->array[i]=arr->array[i+1];
   }
   arr->length--;
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
    del(&arra,2);
    display(arra);
    cout<<arra.length<<endl;
    return 0;
}