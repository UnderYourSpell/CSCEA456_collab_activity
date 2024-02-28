
Hello, today our team will be demonstrating a few examples of overflow attacks and how you might go about doing them.  
  I will first show you a simple attack to cause a program to re run a function that it's not supposed to.  

1. cd into directory for demo
2. `vim demo.c` to show the script, :x to exit
3. `gcc -m32 -o demo demo.c` to compile as 32  bit, easier to work with for stack overflow exploits
4. `gdb demo` to look at assembly language to determine where the hello function is
5. hit them with the disas on main and hello
6. copy memory address to notes
7. put these address into the scary input
8. copy the scary input into terminal and run
9. result should run hello function twice!

commands:
gcc -m32 -o demo demo.c
