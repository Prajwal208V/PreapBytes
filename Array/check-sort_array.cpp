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
string sort_checker(struct arra_at1 arr){
    for(int i=0;i<arr.size-1;i++){
        if(arr.array[i]>arr.array[i+1])
            return "false";
    }
    return "true";
}
int main(){
    int size;
    // cin>>size; 
    size=10;
    struct arra_at1 arra;
    arra.array=new int[size];
    arra.size=size;
    for(int i=0;i<size;i++){
      arra.array[i]=i*17+1;
    }
    // display(arra);
    // arra.array[4]=26; // for adding an element into array for cheker
    display(arra);
    cout<<"given array is sorted: "<<sort_checker(arra)<<endl;
    return 0;
}