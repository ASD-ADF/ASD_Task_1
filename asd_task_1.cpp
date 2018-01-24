#include <iostream>
#include <math.h>
#include <stdlib.h>

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
    cout<<"your code here"<<endl;
    int i;

    for(i=100;i<=200;i++)
    {
        if((i%7==0)&&(i%5!=0))
        {
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

    cout<<"Masukkan bilangan yang akan dipangkatkan = ";
    cin>>n;
    cout<<"Masukkan bilangan sebagai pangkat = ";
    cin>>p;

    long hasil;
    hasil=pow(n,p);

    cout<<"Hasil dari perpangkatan tersebut adalah "<<hasil<<endl;


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
    cout<<"your code here"<<endl;


    cout<<"Insert the first side of the triangle = ";
    cin>>s1;
    cout<<"Insert the second side of the triangle = ";
    cin>>s2;
    cout<<"Insert the third side of the triangle = ";
    cin>>s3;

    if((s1==s2)&&(s1!=s3)&&(s2!=s3))
    {
        cout<<"This is an isosceles triangle"<<endl;
    }
    else if((s1!=s2)&&(s1==s3)&&(s2!=s3))
    {
        cout<<"This is an isosceles triangle"<<endl;
    }
    else if((s1!=s2)&&(s1!=s3)&&(s2==s3))
    {
      cout<<"This is an isosceles triangle"<<endl;
    }
    else if((s1==s2)&&(s1==s3)&&(s2==s3))
    {
        cout<<"This is an equilateral triangle"<<endl;
    }
    else
    {
        cout<<"This is an scalene triangle"<<endl;
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


    int i,bil;
    i=0;
    while(i<100)
    {
        cout<<"Insert some numbers = ";
        cin>>arr[i];
        if(arr[i]==0)
        {
            i++;
            break;
        }
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
    cout<<"your code here"<<endl;

    cout<<"Insert f = ";
    cin>>f;

    cout<<endl;
    cin.get();

    int i,index;
    bool found;
    i=0;
    found=false;
    while((i<100)&&(!found))
    {
        if(f==arr[i])
        {
            index=i;
            found=true;
        }
        else
        {
            found=false;
            i++;
        }
    }

    if(found=true)
        return index;
    else
        cout<<"-1";


//     ===========================
//    return -1;
}

void exercise_6(int arr[],int x) {
    /**
         TODO:  Write a procedure algorithm to find a number
         inside an unsorted array of integer,
         then insert a negative one (-1) behind such found number
        */

 //    ===========================
 //    YOUR CODE HERE
    cout<<"your code here"<<endl;

    int indeks;
    indeks=exercise_5(arr,x);    //algorithm that find a number in dynamic array

    if(indeks== -1)
    {
        cout<<"Bilangan tidak ditemukan";
    }
    else   //indeks != -1
    {
        int c=indeks+1;                  //deklarasi variabel c sebagai penampung variabel indeks agar value pada variabel indeks tidak berubah
        if(arr[indeks+1]==0)   //indeks != batas array dan elemen dari array indeks+1 adalah 0
        {
            arr[indeks+1]=-1;
        }
        else                   //if(arr[indeks+1]!=0)
        {
            bool found2=false;
            while((arr[c]!=0)&&(!found2))
            {
                if(arr[c]==0)
                {
                    //int Indeks2=c;  //indeks2=indeks+1, berarti
                    found2=true;
                }
                else
                {
                    c++;
                }
            }

            if(found2==true)
            {
                for(int z=c-1;z>indeks;z--)
                {
                    arr[z]=arr[c+1];
                }
                arr[indeks+1]=-1;
            }
        }
    }
    view_arr(arr);     //bingung yang ini pak
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

