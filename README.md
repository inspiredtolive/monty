# Monty
Monty is a Monty byte-code interpreter.

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
* The repository monty should be added as a submodule to your holbertonschool-low_level_programming repository, under the name

## Compilation
`$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty`

## Usage
`$ ./monty <file_path>`

## Example
```
$ cat bytecodes/00.m
push 1
push 2
push 3
pall
$ ./monty bytecodes/00.m
3
2
1
```

## Available Opcodes
| Opcodes	| Description	|
| :-------:	| -----------	|
| push		| pushes an element to the stack |
| pall		| prints all the values in the stack |
| pint		| prints the value at the top of the stack |
| pop		| which removes the top element of the stack |
| swap		| swaps the top two elements of the stack |
| add		| adds the top two elements of the stack |
| nop		| doesn't do anything |
| sub		| subtracts the top element of the stack from the second top element |
| div		| divides the second top element of the stack by the top element |
| mul		| multiplies the second top element of the stack with the top element|
| mod		| mods the second top element of the stack with the top element |
| #		| treats the line as a comment |
| pchar		| prints the char at the top of the stack |
| pstr		| prints the string starting at the top of the stack |
| rotl		| rotates the stack to the top |
| rotr		| rotates the stack to the bottom |
| stack		| sets the format of the data to a stack (LIFO) |
| queue		| sets the format of the data to a queue (FIFO) |

## Brainf*ck
The `bf` folder contains the following Brainf*ck scripts

| BF Scripts	| Description	|
| :-------:	| -----------	|
| 1000-holberton.bf	| prints Holberton |
| 1001-add.bf		| reads two digits from stdin, add them, and print the result(one-digit) |
| 1002-mul.bf		| reads two digits from stdin, multiply them, and print the result (one-digit) |
| 1003-mul.bf		| reads two digits from stdin, multiply them, and print the result, followed by a new line |

### Installation
`$ sudo apt-get install bf`

### Usage
`$ bf <file_path>`

## Authors
* [Marco Chan](https://github.com/inspiredtolive)
* [Hanh Nguyen](https://github.com/hanhuyeny2k)
