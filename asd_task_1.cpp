#include <iostream>
#include <math.h>

using namespace std;

void view_arr(int arr[100]);

void exercise_1() {
    /**
     TODO:  Write an algorithm which will prints all
            such numbers which are divisible by 7
            but are not a multiple of 5,
            between 100 and 200 (both included)
    */

    // ===========================
    // YOUR CODE HERE
    int a;
    for (a=100; a<=200; a++){
        if ((a % 7 == 0) and (a % 5 != 0)){
            cout<<a<<", ";
        }
    }
    // ===========================
}

void exercise_2(int n, int p) {
    /**
         TODO:  Write a procedure algorithm to
                raise any number to any power.
        */

    // ===========================
    // YOUR CODE HERE
    int hasil;
    hasil = pow(n,p);
    cout<<hasil;
    // ===========================
}

void exercise_3(int s1, int s2, int s3) {
    /**
         TODO:  Write a procedure algorithm that determines
                the type of a Triangle
                (isosceles, equilateral, or scalene)
                given the size of the three sides
        */

    // ===========================
    // YOUR CODE HERE
    if ((s1==s2)and (s1==s3)){
        cout<<"equilateral";
    }else if ((s1 != s2 ) and (s1 != s3 ) and (s2 != s3 )){
        cout<<"scalene";
    }else{
        cout<<"isosceles";
    }
    // ===========================
}


void exercise_4() {
    /**
         TODO:  Write a procedure algorithm to continuously
                receive a numerical input from user
                and add it into an array of integer
                until user inputs number 0
        */
    int arr[100];
    int input, i;
    // ===========================
    // YOUR CODE HERE
    for(i=0; i<=100; i++){
        cout<<"Input number : ";
        cin>>input;
        arr[i]=input;
        if(input == 0){
            break;
        }
    }
    // ===========================
    cout<<"array result: ";
    view_arr(arr);
}

int exercise_5(int arr[],int f) {
    /**
         TODO:  Write a function algorithm to find a number
                inside an unsorted array of integer,
                and outputs its index; algorithm will
                outputs -1 if such number is not found
        */

    // ===========================
    // YOUR CODE HERE
    int i;
    for(i=0; i<12; i++){
        if(arr[i]==f){
            return i;
        }
    }
    // ===========================
    return -1;
}

void exercise_6(int arr[],int x) {
    /**
         TODO:  Write a procedure algorithm to find a number
         inside an unsorted array of integer,
         then insert a negative one (-1) behind such found number
        */

    // ===========================
    // YOUR CODE HERE
    int y = exercise_5(arr ,x) + 1;
    int temp1 = arr[y];
    int temp2;
    arr [y] = -1;
    while ( arr[y] != 0 ){
        y++;
        temp2 = arr[y];
        arr[y] = temp1;
        temp1 = temp2;
    }
    // ===========================
}


void view_arr(int arr[100]) {
    /** Function Helper */
    int i=0;
    while(arr[i]!=0) {
        cout<<arr[i]<<", ";
        i++;
    }
}

