# Vector3D

Implementation of 3D Vector for Math Engine

------------------------PROGRAM DESCRIPTION------------------------

A simple mathematical 3D Vector class with the basic operations
The class contains :
  1.  Constructors
  2.  Destructors
  3.  Copy Constructors
  4.  Addition And Subtraction
  5.  Scalar Multiplication
  6.  Magnitude
  7.  Unit Vector
  8.  Dot Product
  9.  Cross Product
  10. Projection
  11. Angle
Proper comments and variable names are given to make the code easily readable


------------------------FILES DESCRIPTION------------------------

!-->  "vector3D.h" is the main header file conatining the 3D Vector class
!-->  "vector_lib.cpp" has all the function definitions of the 3D Vector class
!-->  "vector_main.cpp" has all the function calls. Consider it as a test for the class
!-->  "makefile" automates the compliling process (more info on the next section)
!-->  "output" is the output file created by the makefile
!-->  The ".o" files are also created by the makefile
!-->  "DesignChoices.txt" is self explanatory, contains the Design Choices.


------------------------HOW TO COMPILE------------------------
In bash (Ubuntu) -
(Ignore the double inverted commas " " given before the bash commands below)
1. Go to the file directory using "cd ~/file directory"
2. Run command "make"
Before step 3 you may have to run this command too, "chmod +x ./output" to acquire the permission to run the file as an executable
3. Run command "./output"


------------------------INPUT FORMAT------------------------

Enter the x, y, z coordinates of the head of the first vector
Enter the x, y, z coordinates of the tail of the first vector
Enter the x, y, z coordinates of the head of the second vector
Enter the x, y, z coordinates of the tail of the second vector
Enter the constant k to perform scalar multiplication

------------------------EXAMPLE------------------------
An example of the compilation on bash (Ubuntu) is given as a txt file: "Terminal example.txt"
