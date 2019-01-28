#include <iostream>
#include <iomanip>

using namespace std;


/** WRITE DOWN YOUR INFORMATION HERE */
string name = "Djafar Shiddieq Ritonga"; // put your name here
string ID = "1301184367"; // put your student id here
int group_id = 2; // your Group Number here (1-8)


/** FUNCTIONS LIST, DO NOT MODIFY THESE */
void insert_sort(int arr[], int &n, int x);
void insert_last_unique(int arr[], int &n, int x);
void insert_first(int arr[], int &n, int x);
void insert_last(int arr[], int &n, int x);
void search_and_delete(int arr[], int &n, int x);
string first_and_second(int arr[], int n);
string count_and_sum(int arr[], int n);
string group_and_average(int arr[], int n);
void swap_data(int arr[], int n);
void view_data_1(int arr[], int n);
void view_data_2(int arr[], int n);
void check_group(int id);


int main() {
    cout<<"===================== TASK 1 ====================="<<endl;
    cout<<"Hello, "<<name<<", "<<ID<<endl;
    cout<<"let's check your exercises"<<endl<<endl;

    if( group_id>0 && group_id<9) {
        check_group(group_id);

        cout<<endl<<endl<<"End of Task I"<<endl;
        cout<<"Congratulation on completing"<<endl;
    } else {
        cout<<"ERROR\nPlease check your personal information above!!"<<endl<<endl;
    }
    return 0;
}



/**=================================================*/
/**             START YOUR WORK HERE                */

void insert_sort(int arr[], int &n, int x) {
    /**
    TODO: write a procedure to receive a number in parameter and insert it into an array so that the array result is in ascending order
    arr : input array
    n   : number of element inside array, n should increment by 1 after this procedure executed
    x   : number to be inserted
    */

    // YOUR CODES HERE
    //-----------------------


    //-----------------------
}


void insert_last_unique(int arr[], int &n, int x) {
    /**
    TODO: write a procedure to receive a number in parameter and insert it into an array so that no duplicate value exist in the array
    arr : input array
    n   : number of element inside array, n should increment by 1 after this procedure executed
    x   : number to be inserted
    */

    // YOUR CODES HERE
    //-----------------------
    int i;
    i = n-1;
    while (i > -1 && x != arr[i]) {
        i--;
    }

    if (i < 0) {
        arr[n] = x;
        n++;
    } else {
        arr[n] = 0;
    }
    //-----------------------
}


void insert_first(int arr[], int &n, int x) {
    /**
    TODO: write a procedure to receive a number in parameter and insert it into an array as the first element
    arr : input array
    n   : number of element inside array, n should increment by 1 after this procedure executed
    x   : number to be inserted
    */

    // YOUR CODES HERE
    //-----------------------


    //-----------------------
}


void insert_last(int arr[], int &n, int x) {
    /**
    TODO: write a procedure to receive a number in parameter and insert it into an array as the last element
    arr : input array
    n   : number of element inside array, n should increment by 1 after this procedure executed
    x   : number to be inserted
    */

    // YOUR CODES HERE
    //-----------------------


    //-----------------------
}


void search_and_delete(int arr[], int &n, int x) {
    /**
    TODO: write a procedure to receive a number and delete all number found in the array
    arr : input array
    n   : number of element inside array, n should decreased by the number of deleted elements from the array
    x   : number to be inserted
    */

    // YOUR CODES HERE
    //-----------------------


    //-----------------------
}


string first_and_second(int arr[], int n) {
    /**
    TODO: write a function to find the greatest number and second greatest number inside an array. Return the result as string
    arr : input array
    n   : number of element inside array
    */

    // YOUR CODES HERE
    //-----------------------


    //-----------------------
    return "";
}


string count_and_sum(int arr[], int n) {
    /**
    TODO: write a function to count the odd number inside an array and sum the even number. Return the result as string
    arr : input array
    n   : number of element inside array
    */

    // YOUR CODES HERE
    //-----------------------


    //-----------------------
    return "";
}


string group_and_average(int arr[], int n) {
    /**
    TODO: write a function to group the numbers in array into odd-even group in a string that also write its average
    arr : input array
    n   : number of element inside array
    */

    // YOUR CODES HERE
    //-----------------------
    float jumlah = 0;
    float banyak = 0;
    float rata = 0;
    for (n=0;n<20;n++) {
        if(arr[n]%2!= 0 && arr[n]<20 && arr[n]>-1) {
            jumlah += arr[n];
            banyak += 1;
            cout<< arr[n]<<" ";
        }
    }
    for(n=0; n<20; n++) {
        if (arr[n]%2 == 0 && arr[n]<20 && arr[n]>0) {
            jumlah += arr[n];
            banyak += 1;
            cout<< arr[n]<<" ";
        }
    }

    rata = (jumlah/=banyak);
    cout<<", average = "<<setprecision(3)<<rata<<endl;
    //-----------------------
    return "";
}


void swap_data(int arr[], int n) {
    /**
    TODO: write a procedure to swap all number inside an array front to end (1-2-3 into 3-2-1)
    arr : input array
    n   : number of element inside array
    */

    // YOUR CODES HERE
    //-----------------------


    //-----------------------
}


void view_data_1(int arr[], int n) {
    /**
    TODO: write a procedure to view all number inside an array (front to end)
    arr : input array
    n   : number of element inside array
    */

    // YOUR CODES HERE
    //-----------------------
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //-----------------------
}


void view_data_2(int arr[], int n) {
    /**
    TODO: write a procedure to view all number inside an array, but in backward (from behind to front)
    arr : input array
    n   : number of element inside array
    */

    // YOUR CODES HERE
    //-----------------------


    //-----------------------
}


void check_group(int id) {
    cout<<"Checking Work for Group "<<id<<endl;

    switch(id) {
    case 1: {
        int n=0;
        int arr[20];
        insert_sort(arr,n,4);
        cout<<"expected output: 4"<<endl;
        cout<<"your output    : ";
        view_data_1(arr,n);
        // should print [4]

        cout<<endl;
        insert_sort(arr,n,2);
        cout<<"expected output: 2, 4"<<endl;
        cout<<"your output    : ";
        view_data_1(arr,n);

        cout<<endl;
        insert_sort(arr,n,6);
        cout<<"expected output: 2, 4, 6"<<endl;
        cout<<"your output    : ";
        view_data_1(arr,n);

        cout<<endl;
        insert_sort(arr,n,5);
        cout<<"expected output: 2, 4, 5, 6"<<endl;
        cout<<"your output    : ";
        view_data_1(arr,n);

        cout<<endl<<endl<<"press Enter to continue"<<endl;
        cin.get();

        view_data_1(arr,n);
        string s = count_and_sum(arr,n);
        cout<<"expected output: count odd = 1, sum even = 12"<<endl;
        cout<<"your output    : "<< s;

        break;
    }
    case 2: {
        int n=0;
        int arr[20];
        insert_last_unique(arr,n,4);
        cout<<"expected output: 4"<<endl;
        cout<<"your output    : ";
        view_data_1(arr,n);

        cout<<endl;
        insert_last_unique(arr,n,4);
        cout<<"expected output: 4"<<endl;
        cout<<"your output    : ";
        view_data_1(arr,n);

        cout<<endl;
        insert_last_unique(arr,n,5);
        cout<<"expected output: 4, 5"<<endl;
        cout<<"your output    : ";
        view_data_1(arr,n);

        cout<<endl;
        insert_last_unique(arr,n,2);
        cout<<"expected output: 4, 5, 2"<<endl;
        cout<<"your output    : ";
        view_data_1(arr,n);

        cout<<endl;
        insert_last_unique(arr,n,5);
        cout<<"expected output: 4, 5, 2"<<endl;
        cout<<"your output    : ";
        view_data_1(arr,n);

        cout<<endl<<endl<<"press Enter to continue"<<endl;
        cin.get();

        view_data_1(arr,n);
        string s = group_and_average(arr,n);
        cout<<"expected output: 5 4 2, average = 3.67"<<endl;
        cout<<"your output    : "<< s;

        break;
    }
    case 3: {
        int n=0;
        int arr[20];
        insert_first(arr,n,4);
        cout<<"expected output: 4"<<endl;
        cout<<"your output    : ";
        view_data_2(arr,n);

        cout<<endl;
        insert_first(arr,n,5);
        cout<<"expected output: 4, 5 (reversed)"<<endl;
        cout<<"your output    : ";
        view_data_2(arr,n);

        cout<<endl;
        insert_first(arr,n,2);
        cout<<"expected output: 4, 5, 2 (reversed)"<<endl;
        cout<<"your output    : ";
        view_data_2(arr,n);

        cout<<endl;
        insert_first(arr,n,3);
        cout<<"expected output: 4, 5, 2, 3 (reversed)"<<endl;
        cout<<"your output    : ";
        view_data_2(arr,n);

        cout<<endl;
        insert_first(arr,n,5);
        cout<<"expected output: 4, 5, 2, 3, 5 (reversed)"<<endl;
        cout<<"your output    : ";
        view_data_2(arr,n);

        cout<<endl<<endl<<"press Enter to continue"<<endl;
        cin.get();

        view_data_2(arr,n);
        swap_data(arr,n);
        view_data_1(arr,n);
        cout<<"expected output: 5, 3, 2, 5, 4 (reversed)"<<endl;
        cout<<"your output    : ";
        view_data_2(arr,n);

        break;
    }
    case 4: {
        int n=0;
        int arr[20];
        insert_last(arr,n,4);
        cout<<"expected output: 4"<<endl;
        cout<<"your output    : ";
        view_data_2(arr,n);

        cout<<endl;
        insert_last(arr,n,5);
        cout<<"expected output: 5, 4 (reversed)"<<endl;
        cout<<"your output    : ";
        view_data_2(arr,n);

        cout<<endl;
        insert_last(arr,n,2);
        cout<<"expected output: 2, 5, 4 (reversed)"<<endl;
        cout<<"your output    : ";
        view_data_2(arr,n);

        cout<<endl;
        insert_last(arr,n,3);
        cout<<"expected output: 3, 2, 5, 4 (reversed)"<<endl;
        cout<<"your output    : ";
        view_data_2(arr,n);

        cout<<endl;
        insert_last(arr,n,5);
        cout<<"expected output: 5, 3, 2, 5, 4 (reversed)"<<endl;
        cout<<"your output    : ";
        view_data_2(arr,n);

        cout<<endl<<endl<<"press Enter to continue"<<endl;
        cin.get();

        view_data_2(arr,n);
        search_and_delete(arr,n, 5);
        view_data_2(arr,n);
        cout<<"expected output: 3, 2, 4 (reversed)"<<endl;
        cout<<"your output    : ";
        view_data_2(arr,n);

        break;
    }
    case 5: {
        int n=0;
        int arr[20];
        insert_sort(arr,n,4);
        cout<<"expected output: 4 (reversed)"<<endl;
        cout<<"your output    : ";
        view_data_2(arr,n);

        cout<<endl;
        insert_sort(arr,n,2);
        cout<<"expected output: 4, 2 (reversed)"<<endl;
        cout<<"your output    : ";
        view_data_2(arr,n);

        cout<<endl;
        insert_sort(arr,n,6);
        cout<<"expected output: 6, 4, 2 (reversed)"<<endl;
        cout<<"your output    : ";
        view_data_2(arr,n);

        cout<<endl;
        insert_sort(arr,n,5);
        cout<<"expected output: 6, 5, 4, 2 (reversed)"<<endl;
        cout<<"your output    : ";
        view_data_2(arr,n);

        cout<<endl;
        insert_sort(arr,n,6);
        cout<<"expected output: 6, 6, 5, 4, 2 (reversed)"<<endl;
        cout<<"your output    : ";
        view_data_2(arr,n);

        cout<<endl<<endl<<"press Enter to continue"<<endl;
        cin.get();

        view_data_2(arr,n);
        string s = first_and_second(arr,n);
        cout<<"expected output: greatest = 6, second = 5"<<endl;
        cout<<"your output    : "<< s;

        break;
    }
    case 6: {
        int n=0;
        int arr[20];
        insert_last_unique(arr,n,4);
        cout<<"expected output: 4 (reversed)"<<endl;
        cout<<"your output    : ";
        view_data_2(arr,n);

        cout<<endl;
        insert_last_unique(arr,n,4);
        cout<<"expected output: 4 (reversed)"<<endl;
        cout<<"your output    : ";
        view_data_2(arr,n);

        cout<<endl;
        insert_last_unique(arr,n,5);
        cout<<"expected output: 5, 4 (reversed)"<<endl;
        cout<<"your output    : ";
        view_data_2(arr,n);

        cout<<endl;
        insert_last_unique(arr,n,2);
        cout<<"expected output: 2, 5, 4 (reversed)"<<endl;
        cout<<"your output    : ";
        view_data_2(arr,n);

        cout<<endl;
        insert_last_unique(arr,n,5);
        cout<<"expected output: 2, 5, 4 (reversed)"<<endl;
        cout<<"your output    : ";
        view_data_2(arr,n);

        cout<<endl;
        insert_last_unique(arr,n,8);
        cout<<"expected output: 8, 2, 5, 4 (reversed)"<<endl;
        cout<<"your output    : ";
        view_data_2(arr,n);

        cout<<endl<<endl<<"press Enter to continue"<<endl;
        cin.get();

        view_data_2(arr,n);
        swap_data(arr,n);
        view_data_1(arr,n);
        cout<<"expected output: 4, 5, 2, 8 (reversed)"<<endl;
        cout<<"your output    : ";
        view_data_2(arr,n);

        break;
    }
    case 7: {
        int n=0;
        int arr[20];
        insert_last(arr,n,4);
        cout<<"expected output: 4"<<endl;
        cout<<"your output    : ";
        view_data_1(arr,n);

        cout<<endl;
        insert_last(arr,n,5);
        cout<<"expected output: 5, 4 (reversed)"<<endl;
        cout<<"your output    : ";
        view_data_1(arr,n);

        cout<<endl;
        insert_last(arr,n,2);
        cout<<"expected output: 2, 5, 4 (reversed)"<<endl;
        cout<<"your output    : ";
        view_data_1(arr,n);

        cout<<endl;
        insert_last(arr,n,3);
        cout<<"expected output: 3, 2, 5, 4 (reversed)"<<endl;
        cout<<"your output    : ";
        view_data_1(arr,n);

        cout<<endl;
        insert_last(arr,n,5);
        cout<<"expected output: 5, 3, 2, 5, 4 (reversed)"<<endl;
        cout<<"your output    : ";
        view_data_1(arr,n);

        cout<<endl<<endl<<"press Enter to continue"<<endl;
        cin.get();

        view_data_1(arr,n);
        search_and_delete(arr,n, 5);
        view_data_1(arr,n);
        cout<<"expected output: 3, 2, 4 (reversed)"<<endl;
        cout<<"your output    : ";
        view_data_1(arr,n);

        break;
    }
    case 8: {
        int n=0;
        int arr[20];
        insert_first(arr,n,4);
        cout<<"expected output: 4"<<endl;
        cout<<"your output    : ";
        view_data_1(arr,n);

        cout<<endl;
        insert_first(arr,n,5);
        cout<<"expected output: 5, 4"<<endl;
        cout<<"your output    : ";
        view_data_1(arr,n);

        cout<<endl;
        insert_first(arr,n,2);
        cout<<"expected output: 2, 5, 4 "<<endl;
        cout<<"your output    : ";
        view_data_1(arr,n);

        cout<<endl;
        insert_first(arr,n,3);
        cout<<"expected output: 3, 2, 5, 4, "<<endl;
        cout<<"your output    : ";
        view_data_1(arr,n);

        cout<<endl;
        insert_first(arr,n,5);
        cout<<"expected output: 5, 3, 2, 5, 4, "<<endl;
        cout<<"your output    : ";
        view_data_1(arr,n);

        cout<<endl<<endl<<"press Enter to continue"<<endl;
        cin.get();

        view_data_1(arr,n);
        string s = group_and_average(arr,n);
        cout<<"expected output: 5 3 5 2 4, average = 3.8"<<endl;
        cout<<"your output    : "<< s;

        break;
    }
    }
    cout<<endl;
}
