#include<iostream>
using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int A[], int len){

    for(int i=0;i<len-1;i++){
        int min = i;
        for(int j=i+1;j<len;j++){
            if(A[j]<A[min]){
                min = j;
            }
        }
        swap(&A[min],&A[i]);
    }
}

void bubbleSort(int A[],int len){ 
   int flag=0;
   for(int i=0;i<len-1;i++){
        for(int j=0;j<len-i-1;j++){
            if(A[j]>A[j+1]){
                swap(&A[j],&A[j+1]);
                flag =1;
            }
        }
        if(flag==0){
            break;
        }
   }
}


void insertionSort(int A[], int len){
    int value, key;
    for(int i=1;i<len;i++){
        value = A[i]; // Value of the element at index i
        key = i; // Key : The element to be inserted
        while(key>0 && A[key-1]>value){
            A[key] = A[key-1];
            key = key-1;
        }
        A[key] = value;
    }
}

void quickSort(int A[], int len){
    int pivot, i, j, temp;
    if(len<2){
        return;
    }
    pivot = A[0];
    i = 1;
    j = len-1;
    while(i<=j){
        while(A[i]<=pivot && i<=j){
            i++;
        }
        while(A[j]>pivot && i<=j){
            j--;
        }
        if(i<j){
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    A[0] = A[j];
    A[j] = pivot;
    quickSort(A,j);
    quickSort(A+j+1,len-j-1);
}

int main()
{
    int A[] = {8,2,4,5,3,0};
    quickSort(A,6);
    for(int i=0;i<6;i++)
        cout<<A[i]<<" ";
    cout<<endl;
} 