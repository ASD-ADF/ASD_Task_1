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

    // ===========================
    // YOUR CODE HERE
    cout<<"your code here"<<endl;
     int num;
    num = 1;
    for(int i=1; i<=p; i++){
        num=num*n;
    }
    cout<<num<<"";
    // ===========================
}

void exercise_3(int s1, int s2, int s3) {
    /**
         TODO:  Write a procedure algorithm that determines
                the type of a Triangle
                (isosceles, equilateral, or scalene)
                given the size of the three sides
        */

    if ((s1==s2)&&(s2==s3)&&(s1==s3)){
        cout<<"equilateral"<<endl;
    }else if ((s1==s2)||(s2==s3)||(s3==s1)){
        cout<<"isosceles"<<endl;
    }else
        cout<<"scalene"<<endl;
}


void exercise_4() {
    /**
         TODO:  Write a procedure algorithm to continuously
                receive a numerical input from user
                and add it into an array of integer
                until user inputs number 0
        */
    int arr[100];

    cout<<"your code here"<<endl;
    int x = 0;
    int j;
    while ((x<100)&&(j!=0)){
        cin>>j;
        arr[x]=j;
        x++;
    }
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
    cout<<"your code here"<<endl;
       int i=0;
    int get=-1;
    while((arr[i]!=0)&&(get==-1)){
        if(arr[i]==f){
              get=i;
           }
           i++;
    }
    return get;
}


void exercise_6(int arr[],int x) {
    /**
         TODO:  Write a procedure algorithm to find a number
         inside an unsorted array of integer,
         then insert a negative one (-1) behind such found number
        */

    // ===========================
    // YOUR CODE HERE
    cout<<"your code here"<<endl;
    int j = 0;
    int get=-1;

    while((arr[j]!=0)&&(get==-1)){
        if(arr[j]==x){
            get = j;
        }else{
            j++;
        }
    }

    if(get!=-1){
        for(j=10;j>get;j--){
            arr[j+1]=arr[j];
        }
        arr[get+1]=-1;
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




