#include <iostream>
#include "asd_task_1.h"

using namespace std;
void * _Undwind_Resume =0;

string name = "Hafizh Fadhilah";
string nim = "1301170404";
string cls = "IF4108";

int main() {
    cout << "Hello world!, "<<name
         <<",\nid: " << nim
         <<"\nfrom " << cls<< endl;

    cout<<endl<<"------------------------------"<<endl;
    cout<<"Exercise 1"<<endl;
    cout<<"Output should be:"<<endl;
    cout<<"112, 119, 126, 133, 147, 154, 161, 168, 182, 189, 196,"<<endl;
    cout<<"Your Answer:  "<<endl;
    exercise_1();
    cout<<endl<<endl<<"press Enter to continue"<<endl;
    cin.get();

    cout<<"------------------------------"<<endl;
    cout<<"Exercise 2"<<endl;
    int n=2;
    int p=3;
    cout<<"input= 2, 3"<<endl;
    cout<<"Output should be: 8"<<endl;
    cout<<"Your Answer     : ";
    exercise_2(n, p);
    n=4;
    p=2;
    cout<<endl;
    cout<<"input= 4, 2"<<endl;
    cout<<"Output should be: 16"<<endl;
    cout<<"Your Answer     : ";
    exercise_2(n, p);
    cout<<endl<<endl<<"press Enter to continue"<<endl;
    cin.get();

    cout<<"------------------------------"<<endl;
    cout<<"Exercise 3"<<endl;
    int s1=4;
    int s2=6;
    int s3=4;
    cout<<"input= 4, 6, 4"<<endl;
    cout<<"Output should be: isosceles"<<endl;
    cout<<"Your Answer     : ";
    exercise_3(s1, s2, s3);
    s1=3;
    s2=3;
    s3=3;
    cout<<endl;
    cout<<"input= 3, 3, 3"<<endl;
    cout<<"Output should be: equilateral"<<endl;
    cout<<"Your Answer     : ";
    exercise_3(s1, s2, s3);
    s1=1;
    s2=2;
    s3=3;
    cout<<endl;
    cout<<"input= 1, 2, 3"<<endl;
    cout<<"Output should be: scalene"<<endl;
    cout<<"Your Answer     : ";
    exercise_3(s1, s2, s3);
    s1=3;
    s2=4;
    s3=4;
    cout<<endl;
    cout<<"input= 3, 4, 4"<<endl;
    cout<<"Output should be: isosceles"<<endl;
    cout<<"Your Answer     : ";
    exercise_3(s1, s2, s3);
    cout<<endl<<endl<<"press Enter to continue"<<endl;
    cin.get();

    cout<<"------------------------------"<<endl;
    cout<<"Exercise 4"<<endl;
    cout<<"try inputs: 3, 6, 2, 8, 0"<<endl;
    cout<<"Your Answer:  "<<endl;
    exercise_4();
    cout<<endl<<endl<<"press Enter to continue"<<endl;
    cin.get();
    cin.get();

    cout<<"------------------------------"<<endl;
    cout<<"Exercise 5"<<endl;
    int arr[] = {3,6,8,2,7,8,1,0,0,0,0,0};
    cout<<"Initial Array   : ";
    view_arr(arr);
    cout<<endl;
    int f = 7;
    int x;
    cout<<"input= 7"<<endl;
    cout<<"Output should be: 4"<<endl;
    x = exercise_5(arr, f);
    cout<<"Your Answer     : "<<x<<endl;
    f = 8;
    cout<<"input= 8"<<endl;
    cout<<"Output should be: 2"<<endl;
    x = exercise_5(arr, f);
    cout<<"Your Answer     : "<<x<<endl;
    f = 9;
    cout<<"input= 9"<<endl;
    cout<<"Output should be: -1"<<endl;
    x = exercise_5(arr, f);
    cout<<"Your Answer     : "<<x<<endl;
    cout<<endl<<endl<<"press Enter to continue"<<endl;
    cin.get();

    cout<<"------------------------------"<<endl;
    cout<<"Exercise 6"<<endl;
    int arr2[] = {3,6,8,2,7,8,1,0,0,0,0,0};
    cout<<"Initial Array   : ";
    view_arr(arr);
    cout<<endl;
    x = 8;
    cout<<"input= 8"<<endl;
    cout<<"Output should be: 3, 6, 8, -1, 2, 7, 8, 1"<<endl;
    cout<<"Your Answer     : ";
    exercise_6(arr2, x);
    view_arr(arr2);
    cout<<endl<<endl<<"press Enter to continue"<<endl;
    cin.get();

    cout<<endl<<endl<<"End of Task I"<<endl;
    cout<<"Congratulation on completing"<<endl;
    return 0;
}
