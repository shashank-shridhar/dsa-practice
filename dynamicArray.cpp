// Dynamic array: An array that dynamically changes
// its size when new elements are introduced or 
// removed from the array: - 



// Heres What ive written and tried to understand based
// on the video I watched.



#include<iostream>
using namespace std;

int *arr; //Array of integers
int len;
int capacity;

//Code for returning an element at a specific index

int get(int index)
{
    return arr[index];
}

//code for setting an element to a specific value

int set(int index, int element)
{
    arr[index] = element;
}

//Code that returns array length

int size()
{
    return len;
}

// Bool function to check if the array is empty or not

bool isEmpty(){
    return size==0;
}

// Code that cleans the array and removes all elements

int clear()
{
    for(int i=0; i<=capacity; i++)
    {
        arr[i] = ' ';
    } 
    len = 0;

}

// Code to dynamically add an element to the array

// To add am element to the array:-
// 1) First we make the array
// 2) Then when we want to add an element that exceeds the 
//    Limit, then you double the size of the array and add
//    the element
// 3) ???
// 4) Profit.

int addElement(int element){
    if(len+1 >= capacity)
    {
        if(capacity==0)
        {
            capacity=1;
        }
        else
        {
            capacity=capacity*2; // Double the size
        }
        int new_arr[capacity];
        for(int i=0;i<len;i++)
        {
            new_arr[i] = arr[i];
        }
        arr = new_arr;
    }
    arr[len++] = element;
}

//Code to remove an element from the array
//First create new array with length = len-1
//now, you copy everything into that new array
//EXCEPT the index which you want removed
//Then you return the new array. 

int removeAtIndex(int index_rm){

    int data = arr[index_rm];
    int new_arr[len-1];

    for(int i=0,j=0;i<len;i++,j++)
    {
        if(i==index_rm){
            j--;
        }
        else
        {
            new_arr[j]=arr[i];
        }
    }
    arr = new_arr;
    capacity = len--;

    return data;

}

