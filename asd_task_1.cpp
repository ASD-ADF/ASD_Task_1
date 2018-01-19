#include <iostream>

using namespace std;

void view_arr(int arr[100]);

void exercise_1()
{
    int i;
    /**
     TODO:  Write an algorithm which will prints all
            such numbers which are divisible by 7
            but are not a multiple of 5,
            between 100 and 200 (both included)
    */

    // ===========================
    // YOUR CODE HERE
    for (i=100; i<200; i++)
    {
        if ((i % 7 == 0 ) && (i % 5 != 0))
        {
            cout<<i <<", ";
        }
    }
}

void exercise_2(int n, int p)
{
    int i;
    int hasil;
    /**
         TODO:  Write a procedure algorithm to
                raise any number to any power.
        */

    // ===========================
    // YOUR CODE HERE
    cout<<"your code here"<<endl;
    cout<<"Input "<<n<<" , "<<p;
    hasil=n;
    for(i=1; i<p; i++)
    {
        hasil=hasil*n;
    }

    cout<<n<<" dipangkatkan dengan "<<p<<" : "<<hasil<<endl;
    // ===========================
}

void exercise_3(int s1, int s2, int s3)
{
    /**
         TODO:  Write a procedure algorithm that determines
                the type of a Triangle
                (isosceles, equilateral, or scalene)
                given the size of the three sides
        */

    // ===========================
    // YOUR CODE HERE
    if ((s1==s2) && (s1==s3) && (s2==s3))
    {
        cout<<"equilateral";
    }
    else if ((s1!=s2) && (s2!=s3) && (s1!=s3) )
    {
        cout<<"scalene";
    }
    else
    {
        cout<<"isosceles";
    }




    // ===========================
}


void exercise_4()
{
    /**
         TODO:  Write a procedure algorithm to continuously
                receive a numerical input from user
                and add it into an array of integer
                until user inputs number 0
        */
    int i;
    int p;
    int bilangan;
    int arr[100];
    // ===========================
    i = 0;
    cout<<"Input number : ";
    do
    {
        i++;
        cin>>arr[i];
    }
    while(arr[i]!=0);
    // ===========================
    cout<<"array result: ";
    for (p=1;p<i;p++)
    {
        cout<<arr[p];
    }
}

int exercise_5(int arr[],int f)
{
    /**
         TODO:  Write a function algorithm to find a number
                inside an unsorted array of integer,
                and outputs its index; algorithm will
                outputs -1 if such number is not found
        */

    // ===========================
    // YOUR CODE HERE
    int i;
    bool ketemu;
    for (i=0;i<12;i++)
    {
        if (arr[i]==f)
        {
            return i;
            ketemu = true;
        }
    }
    if (!ketemu)
    {
        return -1;
    }
    // ===========================
}

void exercise_6(int arr[],int x)
{
    /**
         TODO:  Write a procedure algorithm to find a number
         inside an unsorted array of integer,
         then insert a negative one (-1) behind such found number
        */

    // ===========================
    // YOUR CODE HERE
    int i;
    int b;
    int n;
    i = -1;
    while(arr[i]!=x)
    {
        i++;
        if (arr[i]==x)
        {
            n = i + 1;
        }
    }
    for (b=13;b>n;b--)
    {
        arr[b]=arr[b-1];
    }
    arr[n] = -1;
    // ===========================
}


void view_arr(int arr[100])
{
    /** Function Helper */
    int i=0;
    while(arr[i]!=0)
    {
        cout<<arr[i]<<", ";
        i++;
    }
}

