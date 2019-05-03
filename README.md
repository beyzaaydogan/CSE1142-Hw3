# CSE1142-Hw3
This repository contains 3 problems solved with C 


## PROBLEM 1
 We have bunnies standing in a line, numbered 1, 2, ... The odd bunnies (1, 3, ..) have the
normal 2 ears. The even bunnies (2, 4, ..) have 3 ears, because they each have a raised foot.
Recursively return the number of "ears" in the bunny line 1, 2, ... n (without loops or
multiplication).
Example:
Please enter the number of lines (n=): 2
bunnyEars2(0) → 0
bunnyEars2(1) → 2
bunnyEars2(2) → 5

## PROBLEM 2
 In this question, you will write a program to find super digit of a number X using the
following rules:
• If X has only 1 digit, then its super digit is X.
• If X has more than 1 digit, then its super digit is equal to the super digit of the digit-
sum of X.
For example,
super_digit(1245)= super_digit(1+2+4+5)
		   super_digit(12)
		   super_digit(1+2)
		   super_digit(3)
		   =3
 The number X will be given to your program with two numbers (n and k) and you will
construct the number X as the number n concatenated k times.
For example:
Please enter a number (n=) : 123
Please enter repetition factor (k=): 3
Super digit of number 123123123 is 9.

## PROBLEM 3 
 In this question, you will print identical triangles nested each other recursively. You will
construct the triangles by using two digits ‘_’(underscore) and ‘1’. There will be
number of iterations given as an input to your program.
