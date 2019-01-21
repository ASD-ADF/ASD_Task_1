#include <iostream>
#include "asd_task_1.h"

using namespace std;


/** WRITE DOWN YOUR INFORMATION HERE */
string name = ""; // put your name here
string ID = ""; // put your id here
int group = 0; // your Group Number here


/** FUNCTIONS LIST */
void insert_sort(int[] arr, int n, int x);
void insert_last_unique(int[] arr, int n, int x);
void insert_first(int[] arr, int n, int x);
void insert_last(int[] arr, int n, int x);
void search_and_delete(int[] arr, int n, int x);
void remove_duplicates(int[] arr, int n, int x);
string maximum_and_minimum(int[] arr, int n);
string count_and_sum(int[] arr, int n);
string group_data(int[] arr, int n);
void swap_data(int[] arr, int n);
void view_data_1(int[] arr, int n);
void view_data_2(int[] arr, int n);





int main() {
    if( check_group(ID)) {
        cout<<"===================== TASK 1 ====================="<<endl;
        cout<<"Hello, "<<name<<", let's check your exercises"<<endl;


        cout<<endl<<endl<<"press Enter to continue"<<endl;
        cin.get();

        cout<<endl<<endl<<"End of Task I"<<endl;
        cout<<"Congratulation on completing"<<endl;
    } else {
        cout<<"Please check your personal information above!!"
    }
    return 0;
}
