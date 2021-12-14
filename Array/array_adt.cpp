#include<iostream>
#include<array>
using namespace std;
// array_at LIST OF OPERATIONS FOR ARRAY 
/*1.display
2.append(x)/add(x)
3.insert(index x)
4.delete(index)
5.serach(x)
6.get(index)
7.set(index x)
8.max()/min()
11.sum_of(array)
9.revers()
10.shift()/roate()
  b.left shift()
  c.left roatet()
  d.right shift()
  e.right roatet()*/

// array_at  SUB 01 
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
int main(){
    int size;
    // cin>>size; 
    size=10;
    struct arra_at1 arra;
    arra.array=new int[size];
    arra.size=size;
    for(int i=0;i<size-5;i++){
      arra.array[i]=i+1;
    }
    arra.length=0;
    display(arra);
    return 0;
}