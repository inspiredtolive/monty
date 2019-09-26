# Stacks, Queues - LIFO, FIFO
	The objective of this project is to learn about stack and queue. The  tasks for this project are: 
* Implement the push and pall opcodes.  The opcode push pushes an element to teh stack and pall prints all the values on the stack, starting from the top of the stack.
* Implement the pint opcode, pint prints the value at the top of the stack.
* Implement the pop opcode, which removes the top element of the stack.
* Implement the swap opcode, which swaps the top two elements of the stack.
* Implement the add opcode, which adds the top two elements of the stack.
* Implement the nop opcode, which doesn't do anything to the code.
* Implement teh sub opcode, which substracts the top element of the stack from the second top element of the stack.
* Implement the div opcode, which dividies the second top element of the stack by the top element of the stack.
* Implement the mul opcode, which multiplies the second top element of the stack with the top element of the stack.
* Implement the mod opcode, which computes the rest of the division of the second top elementof the stack by the top element of the stack.
* Implement the pchar opcode, which prints the char at the top of the stack.
* Implement the pstr opcode, which prints the string starting at the top of the stack.
* Implement the rotl opcode, which rotates the stack to the top.
* Implement the rotr opcode, which rotates the stack to the bottom.
## Prerequisites
* Allowed editors: vi, vim, emacs
* All files will be compiled on Ubuntu 14.04 LTS
* Programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* The code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* Allowed to use a maximum of one global variable
* No more than 5 functions per file
* Allowed to use the C standard library
* The prototypes of all your functions should be included in the header file called monty.h
* All the header files should be include guarded
* The repository monty should be added as a submodule to your holbertonschool-low_level_programming repository, under the name 0x19-stacks_queues_lifo_fifo
## Installing
* sudo apt install valgrind
* sudo apt install vagrant
* sudo apt-get install vim
## Running the test
* gcc -Wall -Werror -Wextra -pedantic *.c -o monty
* valgrind ./a.out <filename>
## Authors
* Marco Chan
* Hanh Nguyen
