# Student Reporter

## Background

Student Reporter is a program written in C that takes a file input that is formatted in the following manner:

```
n
grade1 grade2 grade3 ... graden
```

e.g. `class1grades.txt`:

```
 8
 87.5 95.9 68.5 76.8 81.5 67.9 78.8 79.1
```

The **first line** of the file input will contain the count of grades in the file. 
The **second line** will contain each student's grade separated by a space character.

I will give you a file with following contraints:

```
0 <= n <= 1000
0.0 <= g(n) <= 100.0, where g(n) is the grade of student n
```

## Your Task

You are to write a C program that when compiled, will be executed in the following manner:	
	

	$ ./<name of exe> class1grades.txt
	
	There are 8 students in the class.

	stats:
	-------------------------------------
	average						 79.50
	min							 67.90				 
	max							 95.90
	std. dev.					    8.66
	-------------------------------------

	$

Pay attention to the formatting above and look into the `%f` flag for formatting strings with `printf()`. Notice how the values are seemingly right-aligned. That's on purpose. In addition, the dashes (-) are meant to help you count spaces and positions.

The file you are to read data from, you may assume will be in the current working directory in a folder called `data/`. An example is provided in this project starter folder.

In addition to the execution above, your code should be able to handle basic user error:

	$ ./<name of exe> 

	You're missing a command line argument. 
	Specify a filename in the data/ directory containing grades.

	$ ./<name of exe> asdnd2jn2

	Sorry, data/asdnd2jn2 does not exist!

	$ ./<name of exe> fo51njasds.cuckme

	Sorry, data/fo51njasds.cuckme does not exist!

