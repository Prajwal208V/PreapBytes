#include<iostream>
#include<array>
using namespace std;

void display(int array[],int size){
   for(int i=0;i<size;i++){
      cout<<array[i]<<" ";
   }
   cout<<endl;
}
void swap(int *x,int *y){
   int temp=*x;
   *x=*y;
   *y=temp;
}
void neg_sort(int array[],int size){
   int i=0;
   int j=size-1;
   while(i<j){
   while(array[i]<0)
       i++;
   while(array[j]>=0)
      j--;
   if(i<j)
      swap(array[i],array[j]);
   }
}

int main(){
    int array[]={-2,8,-18,20,25,10,25,-14,-8,-1,-17,81,99,108,-201,-281,15,-124};
    int size=sizeof(array)/sizeof(array[0]);
    display(array,size);
    neg_sort(array,size);
    display(array,size);
    return 0;
}