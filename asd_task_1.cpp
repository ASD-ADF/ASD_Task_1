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
    for (int i = 100; i < 201 ; i++){
        if((i % 7==0) && (i % 5!=0)) {
                int j=i;
            cout<<j<<endl;
        }
}

}

void exercise_2(int n, int p) {
    /**
         TODO:  Write a procedure algorithm to
                raise any number to any power.
        */

    // ===========================
    // YOUR CODE HERE
    int i=p;
    int y=1;
    while (i>0)
    {
        y*=n;
        i--;
    }
    cout<<y<<endl;



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
    if (s1==s2)
    {
        if(s2==s3)
        {
            cout<<"Equilateral"<<endl;
        }
        else
        {
            cout<<"Isosceles"<<endl;
        }

    }
    if (s1==s3)
    {
        if(s3==s2)
        {
            cout<<"Equilateral"<<endl;
        }
        else
        {
            cout<<"Isosceles"<<endl;
        }
    }
    if (s2==s3)
    {
        if(s3==s1)
        {
            cout<<"Equilateral"<<endl;
        }
        else
        {
            cout<<"Isosceles"<<endl;
        }
    }
    else {
        cout<<"Scalene"<<endl;
    }
}




    // ===========================



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
    int a=0;
    cin>>arr[0];
    while (arr[a]!=0) {
    a++;
    cin>>arr[a];
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
    while ((i>=0)&&(arr[i]!=0)&&(arr[i+1]!=0))
    {
        if (arr[i]==f)
        {
            return i;
        }
        i++;
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
    cout<<"your code here"<<endl;





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

