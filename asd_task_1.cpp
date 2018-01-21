#include <iostream>

using namespace std;

void * __gxx_personality_v0=0; //saya dapet problem __gxx_personality_v0
void * _Unwind_Resume =0;      //dan _Unwind_Resume, solusi ini saya ambil di internet

void view_arr(int arr[100]) {
    /** Function Helper */
    int i=0;
    while(arr[i]!=0) {
        cout<<arr[i]<<", ";
        i++;
    }
}


void exercise_1() {
    /**
     TODO:  Write an algorithm which will prints all
            such numbers which are divisible by 7
            but are not a multiple of 5,
            between 100 and 200 (both included)
    */

    // ===========================
    // YOUR CODE HERE
    for(int i = 100; i <=200; i++) {
        if ((i % 7 == 0) && (i % 5 != 0)) {
            cout << i <<", ";
        }
    }
}
// ===========================


void exercise_2(int n, int p) {
    /**
         TODO:  Write a procedure algorithm tocin>>input;
                raise any number to any power.
        */

    // ===========================
    // YOUR CODE HERE
    int jml = n;
    for (int i = 1; i < p; i++) {
        jml *= n;
    }
    cout<<jml<<endl;
}
// ===========================


void exercise_3(int s1, int s2, int s3) {
    /**
         TODO:  Write a procedure algorithm that determines
                the type of a Triangle
                (isosceles, equilateral, or scalene)
                given the size of the three sides
        */

    // ===========================
    // YOUR CODE HERE
    if ((s1 == s2)&&(s1 == s3)) {
        cout<<"equilateral";
    } else if ((s1 == s2) || (s1 == s3) || (s2 == s3)) {
        cout<<"isosceles";
    } else {
        cout<<"scalene";
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
    int arr[100]={0};
    // ===========================
    // YOUR CODE HERE
    int input;
    int i=0;
    cin>>input;
    while(input != 0){
        arr[i] = input;
        i++;
        cin>>input;
    };
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
    int i=0;
    while((arr[i]!=f) && (i<=12)){
        i++;
    }
    if (i<=12){
        return i;
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
    int index=0;
    while((arr[index]!=x) && (index<=12)){
        index++;
    }
    for(int i=12;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index+1]=-1;
    // ===========================
}




