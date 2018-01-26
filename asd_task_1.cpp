#include <iostream>

using namespace std;

void view_arr(int arr[100]);

void exercise_1() {
    /**
     TODO:  Write an algorithm which will prints all
            such numbers which are divisible by 7
            but are not a multiple of 5,
            between 100 and 200 (both included)
    */


    for(int i = 100; i<201; i++){
        if (i%7==0 && i%5!=0){
            cout<<i<<", ";
        }
    }
}

void exercise_2(int n, int p) {
    /**
         TODO:  Write a procedure algorithm to
                raise any number to any power.
        */

    int power = 1;
    for(int i=1; i<=p; i++){
        power=power*n;
    }
    cout<<power;
}

void exercise_3(int s1, int s2, int s3) {
    /**
         TODO:  Write a procedure algorithm that determines
                the type of a Triangle
                (isosceles, equilateral, or scalene)
                given the size of the three sides
        */

    if ((s1==s2)&&(s2==s3)) {
        cout<<"the triangle is an equilateral";
    }else if ((s1==s2) || (s1==s3) || (s2==s3)) {
        cout<<"the triangle is isosceles";
    }else {
        cout<<"the triangle is scalene";
    }
}


void exercise_4() {
    /**
         TODO:  Write a procedure algorithm to continuously
                receive a numerical input from user
                and add it into an array of integer
                until user inputs number 0
        */
    int arr[100];

    float number, sum = 0;
    do {
        cout<<"enter a number: ";
        cin>>number;
        sum += number;
    }
    while (number != 0);
    cout<<"array result: "<<sum;
    view_arr(arr);
}

int exercise_5(int arr[],int f) {
    /**
         TODO:  Write a function algorithm to find a number
                inside an unsorted array of integer,
                and outputs its index; algorithm will
                outputs -1 if such number is not found
        */


    int i;
    for(i = 0; i < f; i++)
    {
        if(arr[i] == f)
            return i;
    }

    /* If no fixed point present then return -1 */
    return -1;
}


void exercise_6(int arr[],int x) {
    /**
         TODO:  Write a procedure algorithm to find a number
         inside an unsorted array of integer,
         then insert a negative one (-1) behind such found number
        */
    int order = exercise_5(arr,x)+1;
    int temp = arr[order];
    int temp2;
    arr[order] = -1;
    while (arr[order] != 0){
        order++;
        temp2 = arr[order];
        arr[order] = temp;
        temp = temp2;
    }
}


void view_arr(int arr[100]) {
    /** Function Helper */
    int i=0;
    while(arr[i]!=0) {
        cout<<arr[i]<<", ";
        i++;
    }
}
