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

    // ===========================
    // YOUR CODE HERE
    for(int i = 100; i<201; i++){
        if (i%7==0 and i%5!=0){
            cout<<i<<", ";
        }
    }





    // ===========================
}

void exercise_2(int n, int p) {
    /**
         TODO:  Write a procedure algorithm to
                raise any number to any power.
        */
    int bil;
    bil = 1;
    for(int i=1; i<=p; i++){
        bil=bil*n;
    }cout<<bil<<"";





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
    if((s1==s2)&&(s2==s3)&&(s3==s1)){
        cout<<"equilateral"<<endl;
    }else if((s1!=s2)&&(s2!=s3)&&(s3!=s1)){
        cout<<"scalene"<<endl;
    }else{
        cout<<"isosceles"<<endl;
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
    // ===========================
    // YOUR CODE HERE
        int i=0;
        int a;
        while ((i<101) && (a!=0)){
            cout<<"input number= "<<endl;
            cin >> a;
            arr[i]=a;
            i++;
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
      int i=0;
    int foundTarget=-1;
    while((arr[i]!=0)&&(foundTarget==-1)){
        if(arr[i]==f){
              foundTarget=i;
           }
           i++;
    }
    return foundTarget;
}


void exercise_6(int arr[],int x) {
    /**
         TODO:  Write a procedure algorithm to find a number
         inside an unsorted array of integer,
         then insert a negative one (-1) behind such found number
        */

    // ===========================
    // YOUR CODE HERE
    int i = 0;
    int foundTarget=-1;

    while((arr[i]!=0)&&(foundTarget==-1)){
        if(arr[i]==x){
            foundTarget = i;
        }else{
            i++;
        }
    }

    if(foundTarget!=-1){
        for(i=10;i>foundTarget;i--){
            arr[i+1]=arr[i];
        }
        arr[foundTarget+1]=-1;
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



