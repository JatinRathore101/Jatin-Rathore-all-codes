#include<bits/stdc++.h>
using namespace std;

// Array is data stored at contiguous memory locations, must have same data type.

// Initialize an array int a[1000] with all elements equal to 1

int main()
{
    int a[1000];
    fill_n(a,1000,1);

    for(auto it:a)cout<<it<<" "; // STL loops work over the arrays
    return 0;

    // when we pass array to a function , we also need to pass array size.
    // function declaration => func(type arr[],int size);
    // calling => func(array_xyz,25);

    /*
    size = n = sizeof(arr)/sizeof(arr_data_type)
    but this approach has a problem
    for example array declared for 10 elements
    but only first 5 initialized enen in such case this will show n=10
    this is the reason we must send the array size manually to the function call
    */

}


/*
We can initialize the array with any value by using the fill_n command
Example code:

#include<iostream>
using namespace std;
int main() {
    int array[100];
    //To initialize the array with value'1'.
    fill_n(array, 100, 1);
    //To check the array input (kewaal 5 hi kari h print)
    for(int i = 0; i <= 5; i++){
        cout << array[i] << endl;
    }
}
//This is one of the method and the 'for loop' can also be used
but it is does not looks good and professional.
*/


/*
we can use std::fill_n in C++, which assigns a value to the first n array elements.
#include <iostream>
#include <algorithm>
int main()
{
    int n = 5;
    int val = 1;
    int arr[n];
    std::fill_n (arr, n, val);
    // always prints 1
    std::cout << arr[rand() % n];
    return 0;
}
*/


/*
#include <stdio.h>
#include <stdlib.h>
#define x1   1
#define x2   x1,  x1
#define x4   x2,  x2
#define x8   x4,  x4
#define x16  x8,  x8
#define x32  x16, x16
 
int main(void)
{
    int arr[] = { x32, x8, x4, x1 };
    int n = sizeof(arr)/sizeof(int);    // (32 + 8 + 4 + 1)
    printf("The size of the array is %d\n", n);
    printf("The value of any element is %d", arr[rand() % n]);
    return 0;
}
array arr[] has 45 1s.
*/

