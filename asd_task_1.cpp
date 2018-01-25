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
    for (int i=100; (i<=200); i++) {
        if ((i%7==0) && (i%5!=0)) {
            cout << i <<", ";
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
    int hasil=1;
    for (int i=1; i<=p; i++) {
        hasil=hasil*n;
    }
    cout << hasil;





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
    if ((s1==s2) and (s2=s3)) {
        cout << "equilateral";
    }
    else if ((s1==s2) or (s1==s3) or (s2==s3)) {
        cout << "isosceles";
    }
    else {
        cout << "scalene";
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
    int n=1;
    while (n!=0) {
        cin >> n;
        arr[i]=n;
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
    while ((f!=arr[i]) && (arr[i]!=0)) {
        i++;
    }
    if (arr[i]==0) {
        return -1;
    }
    else {
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
    int i=0;
    int c=0;
    while ((arr[i]!=x) && (arr[i]!=0)) {
        i++;
    }
    while (arr[c]!=0) {
        c++;
    }
    int n=c-i;

    for (int y=1; y<=n; y++) {
        arr[c+1]=arr[c];
        c--;
    }
    arr[i+1]=-1;





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

