#include<iostream>
#include<cmath>
using namespace std;
// array_at LIST OF OPERATIONS FOR ARRAY 
/*
5.serach(x)->binary Serach, search for performing binary search, the prerequisite or the conditions
the list of keys or the elements must be sorted out.
->-> binary serach is:  when something is successive division by -> max_time 2 O(log n), -> min_time O(1) ,-> average_time O(log n).
*/
// SUB USING BY LOOP
int binary_search(int arra[],int l,int h,int key){
    int mid=0;
     while(l<=h){
        mid=floor((l+h)/2);
        if(key==arra[mid]) 
            return mid;
        else if(key<arra[mid])
            h=mid-1;
        else
            l=mid+1;
     }
    return -1;
}
//SUB USING recuration
int bin_ser(int arra[],int l,int h,int key){
    int mid;
    if(l<=h){
        mid=floor((l+h)/2);
        if(key==arra[mid])
           return mid;
        else if(key<arra[mid])
           return bin_ser(arra,l,mid-1,key);
        else
           return bin_ser(arra,mid+1,h,key);
    }
    return -1;
}
int main(){
    int arra[]={8,15,23,28,32,37,39,42,48,50,53,55,57,61,66,69,74,78};
    int size=sizeof(arra)/sizeof(arra[0]);
    cout<<"index: "<<binary_search(arra,0,size-1,48)<<" ";//8
    cout<<"index: "<<bin_ser(arra,0,size-1,48)<<endl;//8
    return 0;
}