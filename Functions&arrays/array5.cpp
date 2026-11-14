#include<iostream>
using namespace std;
void sort(int array[], int size);
int main(){
    int array[]={4,6,2,7,8,10,1,3,5,9};
    int size=sizeof(array)/sizeof(array[0]);
    sort(array,size);
    for(int element:array){
        cout<<element<<" ";
    }
    return 0;
}
void sort(int array[], int size){
    int temp;
    for(int i=0;i<size-1;i++){
        bool isSwap=false;
        for(int j=0;j<size-i-1;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                isSwap=true;
            }
        }
        if(!isSwap){
            return;
        }
    }
}
//the largest element has bubbled to the last position.