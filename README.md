# 42_gnl

Statement of the project (in [Spanish](es.subject.pdf) / [English](en.subject.pdf))

## Introduction

This project focuses on creating a function that reads a line from a file descriptor, returning the line each time it is called. This function allows you to read from files or standard input (stdin) line by line until the end of the file or an error is encountered.

## Project Objectives

- Implement a function that reads from a file descriptor and returns the next line.

- Manage memiry efficiently to ensure the function works correctly with different buffer sizes.

- Handle multiple file descriptors simultaneously in the bonus part.

## Mandatory Part

### Function Prototype

The prototype for the `get_next_line` function is:

```c
char *get_next_line(int fd);
```
### Description

- `get_next_line` : Reads from the file descriptor `fd` and returns the next line.

- The function should return the line that was read. If there is nothing else to read or an error occurs, it returns 'NULL'.

- The function should work with both files and standard input.

### Static Variable

The function should use a static variable to managa the state between multiple calls for the same file descriptor.

**Note**: A static variable is a variable that retains its value between function calls. Its lifetime extends throughout the execution of the program.

### Buffer Size

The function reads `BUFFER_SIZE` bytes at a time. You can define the buffer size during compilation:

```sh
cc -Wall -Werror -Wextra -D BUFFER_SIZE=42 <files>.c
```

## Bonus Part

### Multiple File Descriptors

For the bonus part, the function should be able to handle multiple file descriptors simultaneously without mixing up lines between them.

#### Static Variable Array

To achieve this, the static variable is modified to be an array:

```c
static t_list *list[OPEN_MAX];
```

**Note**: `OPEN_MAX` is a macro defined in `<limits.h>` representing the maximum number of files a process can have open simultaneously.

## Implementation Steps

1. **Reading from File Descriptor**:

    - Use `read()` to read `BUFFER_SIZE` bytes from the file descriptor.

    - Store the read content in a buffer.

2. **Managing Static Variable**:

    - Use a static variable to retain the state between function calls.

    - Append new data to the static variable until a complete line is found.

3. **Extracting a line**:

    - Identify the end of the line (newline character '\n').

    - Extract the line from the buffer and update the static variable to retain any remaining data.

4. **Memory Management**:

    - Ensure proper allocation and deallocation of memory to prevent leaks.

    - Use dynamic memory allocation to handle variable-length lines.

5. **Handling Edge Cases**:

    - Handle end-of-file (EOF) and errors gracefully.

    - Ensure the function returns 'NULL' when there are no more lines to read or an error occurs.

6. **Bonus part**:

    - Modify the static variable to handle multiple file descriptors.

    - Ensure each file descriptor has its own buffer to manage state independently.
