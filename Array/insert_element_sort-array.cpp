#include<iostream>
#include<array>
using namespace std;
struct arra_at1{
    int *array;
    int size;
    int length;
};
void display(struct arra_at1 arr){
   for(int i=0;i<arr.size;i++){
      cout<<arr.array[i]<<" ";
   }
   cout<<endl;
}
void insert(struct arra_at1 *arr,int x){
     int i=arr->length-1;
     while(arr->array[i]>x){
         arr->array[i+1]=arr->array[i];
         i--;
     }
     arr->array[i+1]=x;
}

int main(){
    int size;
    // cin>>size; 
    size=10;
    struct arra_at1 arra;
    arra.array=new int[size];
    arra.size=size;
    for(int i=0;i<size-3;i++){
      arra.array[i]=i*17+1;
    }
    arra.length=7;
    display(arra);
    insert(&arra,48);
    display(arra);
    return 0;
}