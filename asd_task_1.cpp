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
    cout<<"My code was here!"<<endl;
    for (int i = 100;  i <201; i++){
            if (i%7 == 0 and i%5!=0){
                cout<< i <<" , ";}





    // ===========================
}
}

void exercise_2(int n, int p) {
    /**
         TODO:  Write a procedure algorithm to
                raise any number to any power.
        */

    // ===========================
    // YOUR CODE HERE
    cout<<"My code was here!"<<endl;
    int a;
    a = 1;
    for (int i = a; i <= p ; i++) {
        a=a*n;
    } cout << a <<" ";

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
    cout<<"My code was here!"<<endl;
    if((s1==s2)&&(s2==3)&&(s3==s1)){
        cout<< "equilateral"<<endl;
    }else if ((s1!=s2)&&(s2!=s3)&&(s3!=s1)){
        cout<< "scalene" <<endl;
    }else{
        cout<< "isosceles"<<endl;
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
    cout<<"My code was here!"<<endl;
    int i=0;
    int a;
    while ((i<101)&&(a!=0)){
        cout<<"input number: "<<endl;
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
    cout<<"My code was here!"<<endl;
    int i=0;
    int found=-1;
    while((arr[i]!=0)&&(found==-1)){
        if(arr[i]==f){
              found=i;
           }
           i++;
    }
    return found;





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
    cout<<"My code was here!"<<endl;
    int i = 0;
    int found=-1;

    while((arr[i]!=0)&&(found==-1)){
        if(arr[i]==x){
            found = i;
        }else{
            i++;
        }
    }

    if(found!=-1){
        for(i=10;i>found;i--){
            arr[i+1]=arr[i];
        }
        arr[found+1]=-1;
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

