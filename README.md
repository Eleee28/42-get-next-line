# 42_gnl

## About the project

The goal of the project is to code a function that returns a line read from a file descriptor.
<br>
<br>
The prototype of the function is the following:

~~~~~
char	*get_next_line(int fd);
~~~~~

Calling the function `get_next_line` repeatedly allows you to read the content of a file pointed by a file descriptor, line by line, until the end of file is reached.
<br>
<br>
The function will return the line that was read. If there is nothing else to read or an error ocurred, it should return NULL.
<br>
<br>
The function works when reading a file and when reading from the standard input (stdin).

### Mandatory part
The function is implemented using a static variable.
> **_NOTE:_** A **static variable** is  a variable that has been placed statically and whose lifetime extends throughout the execution of the program.

The function reads `BUFFER_SIZE` bytes each time. This BUFFER_SIZE can be modified for execution:

~~~~~
cc -Wall -Werror -Wextra -D BUFFER_SIZE=42 <files>.c
~~~~~

### Bonus part
Makes possible for `get_next_line` to manage multiple file descriptors at the same time without losing the reading thread of each file descriptor or returning a line from another fd.