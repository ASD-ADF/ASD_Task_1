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
    //cout<<"your code here"<<endl;
int n = 100;
while (n < 201) {
    if ((n % 7 == 0) && (n % 5 != 0)){
        cout<< n << endl;
    }
    n++;
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
    //cout<<"your code here"<<endl;
int x = n;
for (int i = 0 ; i < p-1 ; i++) {
    x = x*n;
}
cout << x ;



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
    //cout<<"your code here"<<endl;

if (s1 == s2 && s1 == s3){
    cout << "Equilateral" ;
} else if (s1 == s2 || s1 == s3 || s2 == s3){
//} else if (s1 == s2 && s1 == s3){
    cout << "Isosceles";
} else {
    cout << "Scalene";
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
    //cout<<"your code here"<<endl;
int i,x = 0;
  do {
    cin>>arr[i];
    i++;
} while ((i < 101) && (arr[i-1] != 0));




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
    //cout<<"your code here"<<endl;
int i = 0;
int x = -1;
bool found=false;
do {
        if (arr[i] == f) {
            x = i;
            found = true;
        }
    i++;
} while (i < sizeof(arr) && found == false);



    // ===========================
    return x;
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
    int a = 0;
    int ft=-1;

    while((arr[a]!=0)&&(ft==-1)){
        if(arr[a]==x){
            ft = a;
        }else{
            a++;
        }
    }

    if(ft!=-1){
        for(a=10;a>ft;a--){
            arr[a+1]=arr[a];
        }
        arr[ft+1]=-1;
    }
}




    // ===========================



void view_arr(int arr[100]) {
    /** Function Helper */
    int i=0;
    while(arr[i]!=0) {
        cout<<arr[i]<<", ";
        i++;
    }
}

