# Task_1 [2019]
Task 1 : Introduction to C++
## Deadline: 29th January 2019

## Reading Material
* [git cheat sheet](https://education.github.com/git-cheat-sheet-education.pdf)
* [markdown cheat sheet](https://enterprise.github.com/downloads/en/markdown-cheatsheet.pdf)

## Workflow
1. Discuss the solution with your group members
2. FORK and CLONE this repositori ASD_Task_1
3. open and modify codes in *.cpp files inside project ASD_Task_1
4. COMMIT and PUSH your project
5. create a Pull Request, put your student ID as the Pull Message

## Group Tasks
* Group 1: Exercise A, G, and J
* Group 2: Exercise B, H, and J
* Group 3: Exercise C, I, and K
* Group 4: Exercise D, E, and K
* Group 5: Exercise A, F, and K
* Group 6: Exercise B, I, and K
* Group 7: Exercise D, E, and J
* Group 8: Exercise C, H, and J

## Exercises
<ol type="A">
<li><b>Insert Sort (***)</b><br>
	write a procedure to receive a number in parameter and insert it into an array so that the array result is in ascending order<br>
	Example:
	
```
n=0;
insert_sort(arr,n,4);
view_data_1(arr,n);
// should print [4]

insert_sort(arr,n,2);
insert_sort(arr,n,6);
view_data_1(arr,n);
// should print [2, 4, 6]
```
</li>
<li><b>Insert Last Unique (**)</b><br>
	write a procedure to receive a number in parameter and insert it into an array so that no duplicate value exist in the array<br>
	Example:
	
```
n=0;
insert_last_unique(arr,n,4);
view_data_1(arr,n);
// should print [4]

insert_last_unique(arr,n,4);
insert_last_unique(arr,n,5);
insert_last_unique(arr,n,2);
insert_last_unique(arr,n,5);
view_data_1(arr,n);
// should print [4, 5, 2]
```

</li>
<li><b>Insert First (**)</b><br>
	write a procedure to receive a number in parameter and insert it into an array as the first element<br>
	Example:
	
```
n=0;
insert_first(arr,n,4);
view_data_1(arr,n);
// should print [4]

insert_first(arr,n,5);
insert_first(arr,n,2);
insert_first(arr,n,3);
view_data_1(arr,n);
// should print [3,2,5,4]
```


</li>
<li><b>Insert Last (*)</b><br>
	write a procedure to receive a number in parameter and insert it into an array as the last element<br>
	Example:
	
```
n=0;
insert_last(arr,n,4);
view_data_1(arr,n);
// should print [4]

insert_last(arr,n,5);
insert_last(arr,n,2);
insert_last(arr,n,3);
view_data_1(arr,n);
// should print [4,5,2,3]
```

</li>
<li><b> Search and Delete (***)</b><br>
	write a procedure to receive a number and delete all number found in the array<br>
	Example:
	
```
arr = {3, 5, 2, 4, 1, 2, 3, 1, 3}
n=9;
search_and_delete(arr,n,3);
view_data_1(arr,n);
// should print [5, 2, 4, 1, 2, 1]
```


</li>
<li><b> First and Second (*)</b><br>
	write a function to find the greatest number and second greatest number inside an array. Return the result as string<br>
	Example:
	
```
arr = {3, 5, 2, 4, 1, 2, 3, 1, 3}
n=9;
string s = first_and_second(arr,n);
cout<< s;
// should print greatest = 5, second = 4"
```


</li>
<li><b>Count and Sum (*)</b><br>
	write a function to count the odd number inside an array and sum the even number. Return the result as string<br>
	Example:
	
```
arr = {3, 5, 2, 4, 1, 2, 3, 1, 3}
n=9;
string s = count_and_sum(arr,n);
cout<< s;
// should print "count odd = 6, sum even = 8"
```


</li>
<li><b>Group and Average Data (**)</b><br>
	write a function to group the numbers in array into odd-even group in a string that also write its average<br>
	Example:
	
```
arr = {3, 5, 2, 4, 1, 2, 3, 1, 3}
n=9;
string s = group_data(arr,n);
cout<< s;
// should print "3 5 1 3 1 3 2 4 2, average = 2.67"
```


</li>
<li><b>Swap Data (**)</b><br>
	write a procedure to swap all number inside an array front to end (1-2-3 into 3-2-1)<br>
	Example:
	
```
arr = {3, 5, 2, 4, 1, 2, 3, 1, 3}
n=9;
swap_data(arr,n);
view_data_1(arr,n);
// should print [3, 1, 3, 2, 1, 4, 2, 5, 3]
```


</li>
<li><b> View Data 1 (*)</b><br>
	write a procedure to view all number inside an array (front to end)<br>
	Example:
	
```
arr = {3, 5, 2, 4, 1, 2, 3, 1, 3}
n=9;
view_data_1(arr,n);
// should print [3, 5, 2, 4, 1, 2, 3, 1, 3]
```


</li>
<li><b>View Data 2 (*)</b><br>
	write a procedure to view all number inside an array, but in backward (from behind to front)<br>
	Example:
	
```
arr = {3, 5, 2, 4, 1, 2, 3, 1, 3}
n=9;
view_data_1(arr,n);
// should print [3, 1, 3, 2, 1, 4, 2, 5, 3]
```
	
</li>
</ol>