# Task_1 [2017/2018-II]
Task 1 : Introduction to C++

## Reading Material
* [git cheat sheet](https://education.github.com/git-cheat-sheet-education.pdf)
* [markdown cheat sheet](https://enterprise.github.com/downloads/en/markdown-cheatsheet.pdf)

## Workflow
1. FORK and CLONE this repositori ASD_Task_1
2. open and modify codes in *.cpp files inside project ASD_Task_1
3. write your code inside the provided space in each functions/procedures (`asd_task_1.cpp`) 
4. COMMIT and PUSH your project
5. create a Pull Request

## Exercise 1
TODO: 
* Write an algorithm which will prints all such numbers which are divisible by 7 but are not a multiple of 5, between 100 and 200 (both included)
* `procedure exercise_1()`
* Output should be: 112, 119, 126, …, 196

## Exercise 2
TODO:
* Write a procedure algorithm to raise any number to any power.
* `procedure exercise_2(n, p)`<br>
Example:<br>
 `integer n = 2`<br>
 `integer p = 3`<br>
 `exercise_2(n, p)`<br>
 `Output : 8`<br><br>
 `integer n = 4`<br>
 `integer p = 2`<br>
 `exercise_2(n, p)`<br>
 `Output : 16`<br>


## Exercise 3
TODO:
* Write a procedure algorithm that determines the type of a Triangle (isosceles, equilateral, or scalene) given the size of the three sides
* `exercise_3(s1, s2, s3)` <br>
Example: <br>
 `integer s1: 4 `<br>
 `integer s2 : 6 `<br>
 `integer s3 : 4 `<br>
 `exercise_3(s1, s2, s3) `<br>
 `Output : isosceles `<br><br>
 `integer s1: 3 `<br>
 `integer s2 : 3 `<br>
 `integer s3 : 3 `<br>
 `exercise_3(s1, s2, s3) `<br>
 `Output : equilateral `<br>

## Exercise 4
TODO:
* Write a procedure algorithm to continuously receive a numerical input from user and add it into an array of integer until user inputs number 0
* `procedure exercise_4()`
* Try input: 3, 6, 2, 8, 0

## Exercise 5
TODO:
* Write a function algorithm to find a number inside an unsorted array of integer, and outputs its index; algorithm will outputs -1 if such number is not found
* function int exercise_5(arr, f)
* Array input is formatted from previous exercise, 
* value 0 indicates the end of array <br>
Example: <br>
 `integer arr = {3,6,8,2,7,8,1,0,0,0,0,0} `<br>
 `integer f = 2 `<br>
 `integer x = exercise_5(arr, f) `<br>
 `Output = 3 `

## Exercise 6
TODO:
* Write a procedure algorithm to find a number inside an unsorted array of integer, then insert a negative one (-1) behind such found number
* Use previous search function
* Array input is formatted from previous exercise, 
* value 0 indicates the end of array <br>
Example: <br>
 `integer arr = {3,6,8,2,7,8,1,0,0,0,0,0} `<br>
 `integer x = 8 `<br>
 `exercise_6(arr, x) `<br>
 `arr result = {3,6,8,-1, 2,7,8,1,0,0,0,0,0}`
