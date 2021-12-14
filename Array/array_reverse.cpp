#include<iostream>
#include<array>
using namespace std;
// array_at LIST OF OPERATIONS FOR ARRAY 
// 9.revers() 
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
// SUB arraay reverse by using auxiliary array
void reverse_aux(struct arra_at1 *arr){
      int *aux_arr=new int[arr->size];
      int i,j;
      for(i=arr->size-1,j=0; i>=0,j<arr->size; i--,j++){// reverse and copy the elements from main array to auxiliary array time complixity is O(n);
          aux_arr[j]=arr->array[i];
      }
      for(int i=0;i<arr->size;i++){// copy the elements from auxiliary array to main array time complixity is O(n);
          arr->array[i]=aux_arr[i];
      }
    //   ->-> total time complixity is O(n);
}
// SUB array reverse by using SWAP the main array  
// swap function for reverse array by using swap reverse array
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
} 
void reverse_swap(struct arra_at1 *arr){
     int i,j;
     for(i=0,j=arr->size-1;i<j;i++,j--)// time O(n);
        swap(&arr->array[i],&arr->array[j]);
    // ->-> total time complixity  O(n);
}  
int main(){
    int size;
    // cin>>size; 
    size=10;
    struct arra_at1 arra;
    arra.array=new int[size];
    arra.size=size;
    for(int i=0;i<size;i++){
      arra.array[i]=i+1;
    }
    arra.length=0;
   /* display(arra);
    reverse_aux(&arra);*/
    display(arra);
    reverse_swap(&arra);
    display(arra);
    return 0;
}