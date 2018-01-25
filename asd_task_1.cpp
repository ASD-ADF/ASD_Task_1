#include <iostream>
#include"asd_task_1.h""

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


    for(  int i = 100; i < 201; i++) {

        if ((i%7==0) && ( i%5!=0)) {
        cout<<i<<" , ";
        }
    }

    // ===========================
}

void exercise_2(int n, int p) {

    int i;
    int hasil;
    /**
         TODO:  Write a procedure algorithm to
                raise any number to any power.
        */

    // ===========================
    // YOUR CODE HERE

    cout<<"- - Input - -"<<n<<" , " << p;
    hasil=n;

    for (i=1; i<p; i++)
    {
        hasil = hasil*n;
    }

    cout<<n<<" Angka dipangkatkan " <<p<<" : " <<hasil<<endl;
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
    cout<<"Masukkan sisi pertama \n";
    cin>>s1;

    cout<<"Masukkan sisi kedua \n";
    cin>>s2;

    cout<<"Masukkan sisi ketiga \n";
    cin>>s3;

    if (s1==s2==s3) {
        cout<<"Segitiga sama sisi\n";
    }

    if ((s1==s2)>s3) {
        cout<<"Segitiga sama kaki\n";
    }

    if (s1!=s2!=s3){
        cout<<"Segitiga sembarang \n";

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
    cout<<"your code here"<<endl;
    int i;
    int n;

    cout<<"Please, masukkan angka yang ingin anda masukkan";
    cin>>i;

    while(arr[i]!=0) {
        cout<<arr[i]<<", ";
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
   int i;
   bool found;
   for (i=0;i<12;i++){

        if(arr[i]==f){

            return i;
            found = true;
            }

    if(!found){

        return -1;
        }
}

void exercise_6(int arr[],int x){

    /**
         TODO:  Write a procedure algorithm to find a number
         inside an unsorted array of integer,
         then insert a negative one (-1) behind such found number
        */

    // ===========================
    // YOUR CODE HERE



    int i;
    int a;
    int b;
    i = -1;
    while(arr[i]!=x){

        i++;
        if (arr[i]==x) {

            b = i + 1;

        }

        for (a =13;a > b;a--){

            arr[a]=arr[a-1];
        }

        arr[b] = -1;
    }

}


    // ==========================



void view_arr(int arr[100]) {
    /** Function Helper */
    int i=0;
    while(arr[i]!=0) {
        cout<<arr[i]<<", ";
        i++;
    }
}

