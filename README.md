# CENG_231-Debugger

## Description of Program
- Contains a program, sort.c, that contains bugs, compiler errors (when using -Wall, -pedantic, -ansi), and does not properly sort an array as expected.
- The program, mod_sort.c, is the modified version of the original program that correctly sorts the array as expected and does not contain any errors from flags, GDB, or Valgrind.
- A writeup is included in the program that details how I transformed sort.c to mod_sort.c.

## Instructions to run the program:
- Compile with gcc and flags: gcc -Wall -pedantic -ansi -g -o Sort sort.c // this will show the compile errors of the original program
- Compile with gcc and flags: gcc -Wall -pedantic -ansi -g -o ModSort mod_sort.c // this will show the compile errors are gone
- Run GDB with ModSort: gdb ./ModSort
- In the GDB shell, execute: run // this shows how there are no errors showing up in GDB
- Run Valgrind with ModSort: valgrind ./ModSort // this shows how there are no errors showing up in Valgrind

## Source Files:
- mod_sort.c
- sort.c
- Write up document (Word document)
- README.md
- .gitignore

## Sources referred to:
- C interpretting Valgrind Conditional Loop or Move of an uninitialized variable: https://stackoverflow.com/questions/2612447/pinpointing-conditional-jump-or-move-depends-on-uninitialized-values-valgrin
- C -Wall flag: https://www.rapidtables.com/code/linux/gcc/gcc-wall.html
- C -pedantic flag: https://stackoverflow.com/questions/2855121/what-is-the-purpose-of-using-pedantic-in-gcc-g-compiler/40580407
- C -ansi flag: https://developerinsider.co/difference-between-c-and-ansi-c/
- C Bubble Sort: https://www.geeksforgeeks.org/bubble-sort/ 
