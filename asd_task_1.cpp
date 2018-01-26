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
    for ( int i = 100; i <= 200; i++) {
        if (i%7==0 && i%5!=0) {
            cout << i << ",";
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
    int h;
    h = 0;
    for (int i = 1 ; i<=p ; i++) {
        h=h*n;
    }
        cout << h << " ";

    // ===========================
}

void exercise_3(int s1, int s2, int s3) {
    /**
         TODO:  Write a procedure algorithm that determines
                the type of a Triangle
                (isosceles, equilateral, or scalene)
                given the size of the three sides
        */

        if ((s1==s2) && (s2==s3) && (s3==s1)) {
            cout << " Equilateral " << endl;
        } else if ((s1==s2) || (s2==s3) || (s3==s1)) {
            cout << " isosceles " << endl;
        } else if ((s1 != s2) && (s2 != s3) && (s3!= s2)) {
            cout << " scalene " << endl;
        } else {
            cout << "cek your data inputs" << endl;
        }


}


void exercise_4() {
    /**
         TODO:  Write a procedure algorithm to continuously
                receive a numerical input from user
                and add it into an array of integer
                until user inputs number 0
        */
    // ===========================
    // YOUR CODE HERE

    int arr[100];
    int i=0;
    int h;
    while ((i<101) && (h!=0)) {
        arr[i]=h;
        h++;
        cin >> h;
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
    int h=0;
    int j=-1;
    while ((arr[h] == 0) && (j == -1)) {
        if (arr[h] == f) {
            j = f;
        } else {
            f++;
        }
    }

    // ===========================
}

void exercise_6(int arr[],int x) {
    /**
         TODO:  Write a procedure algorithm to find a number
         inside an unsorted array of integer,
         then insert a negative one (-1) behind such found number
        */

    // ===========================
    // YOUR CODE HERE
    int h=0;
    int f=-1;
    while ((arr[h] == 0) && (f == -1)) {
        if (arr[h] == x) {
            f = x;
        } else {
            x++;
        }
    }

    if (f == -1) {
        for ( int i = 0 ; i<f ; f++) {
            arr[h+1]=arr[h];
        }
        arr[f+1]=-1;
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

