# get_next_line() Project

**Started:** October 16, 2019
**Completed:**
**Evaluated:**

## What is get_next_line() project?
Get_next_line() is a project aimed to read a file line by line. The goal of the project is to teach you how to work with file descriptors, buffers, memory, static variables, and libraries. Get_next_line() has a pointer to the string *line*. The characters from the file directory (fd) will then be read until it reaches the '\n' or '\0', which indicates the end of the line or the end of the file. The function can return 3 integers based on the execution:
- 1 = line read, \n
- 0 = reading completed, \0
- -1 = error (eg. wrong fd, nonexistent line)

**Bonus:**
- One static variable
- No global variables
- Can take in multiple fd inputs

## Logical Implementation
Function prototype: `int get_next_line(const int fd, char **line)`
The program takes in a file descriptor (fd) and the address of a pointer to line. Because you additionally have the buff_size, you'll malloc memory for the buffer of buff_size. The buffer will read from the file until a \n or \0 or buff_size is reached. The values from the stored buffer up until the \n will then be copied into the line array. If the '\n' is reached, the the function ends and returns 1. If a '\0' is reached, then either the line was read and the reading was completed or the file just ended. Otherwise, the function will return -1 for an error.

**Questions:**
**1) Why do we need a buffer? Why do we have to copy it from the buffer array to the line array? Can't we directly read the file byte by byte?**
- **Answer:** The buff_size is implemented in the project because they want us to know that there are limitations for the buff_size. If the buff_size is too big, the read_next_line will break. You technically can read it byte by byte but its really slow. Why is it slow? The read functions reads from a file which is in the harddrive and then puts it into fast memory, aka RAM. If you keep reading it byte by byte, the function will be a lot slower because it has to keep on reading it from the harddrive. However, if you read a certain amount of buff_size and then put it into the buffer RAM, then you can copy the string from the RAM into your actual line ptr. Although this copying is done byte by byte, because it is in the RAM, it will be a lot quicker than extracting each time from the harddrive.

**2) Do we need to realloc the line array or can we assume that the array is already of the appropriate size/infinite?**
- **Answer:** We need to reallocate memory for the line size. We can't just assume the appropriate size or a large size is already there because it would create memory that we are not using, which is not efficient. In other words, a large chunk of memory would be taken, which would take space in RAM and slow up the computer. We only want to allocate memory for what we are using.

**3) How does read know where it left off from when it reads a file?**
- **Answer:** You can see the implementation of read. Git clone this page or look at the source code for this page. This is the C GNU Library: https://github.com/lattera/glibc.git. If you clone it into your terminal

**To test the code**
The main function will create a pointer to the file (fPtr). This pointer will keep track of the file opened. Another pointer (line) will update and keep track of where it left off until the end of the file. Because this pointer will be used throughout, we would need to pass in the address of a pointer or use a static variable, aka something that could be kept in memory despite the end of the function. As a result, you need two files and two pointers.

Files to create:
1) main.c
2) test

Pointers to create:
1) fPtr
2) test

## Overall Grade & Feedback



## Screenshots
**Testing the Library**

## Using get_next_line()
**Compiling using Makefile**
Run the following commands to compile the program:
`make` - compiles code
`make clean` - removes *.o files
`make fclean` - removes *.o, *.out files
`make re` - runs fclean and recompiles the program
`make deepthought` - compiles using Deepthought's grading system

**Executing the program using Makefile**
`make test` - compiles with main.c and creates an executable a.out file

```
Deepthought will use this code to copile and run:
clang -Wall -Wextra -Werror -I libft/includes -o get_next_line.o -c get_next_line.c
clang -Wall -Wextra -Werror -I libft/includes -o main.o -c main.c
clang -o test_gnl main.o get_next_line.o -I libft/includes -L libft/ -lft
```
