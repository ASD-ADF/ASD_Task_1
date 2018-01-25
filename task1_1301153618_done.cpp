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

    int a = 100;

    while (a <= 200) {
        if (a%7==0 && a%5!=0) {
            cout << a << " ";
        }
        a++;
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

    int i, k;

    i = 1;
    k = n;
    while (i < p) {
        n = n*k;
        i++;
    }
    cout << n;

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

    if (s1==s2 && s1==s3 && s2==s3) {
        cout << "equilateral";
    }
    else if (s1==s2 || s1==s3 || s2==s3) {
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
    int n = 1;
    int i = 0;

    while (n != 0) {
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

    int x = 0;
    int i = 0;

    while (arr[i] != 0) {
        i++;
    }
    while (f != arr[x]) {
        x++;
    }
    if (x <= i) {
        return x;
    }
    else {
        return -1;
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

    int i = 0;
    int a = 0;
    int m = 0;
    int n = 0;

    while (arr[a] != 0) {
        a++;
    }
    while (arr[i] != x) {
        i++;
    }
    m = i+1;
    n = a-m;
    for (int j=0 ; j<=n; j++) {
        arr[a+1]=arr[a];
        a--;
    }
    arr[m] = -1;

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
