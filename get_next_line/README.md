*This project has been created as part of the 42 curriculum by amoufakk.*

## Description

The **get_next_line** project is a fundamental task in the 42 curriculum that involves creating a function to read a line from a file descriptor. The primary goal is to handle reading from files or standard input efficiently, one line at a time, until the end of the file is reached. This project introduces the critical concept of **static variables** in C and requires rigorous memory management to prevent leaks while handling varying buffer sizes.

## Algorithm Explanation and Justification

The algorithm uses a **static buffer (stash)** to preserve data across multiple function calls. Because a single `read()` call might fetch more data than what is needed for the current line, this "extra" data must be stored so it isn't lost.

### Logic Flow:

1. **Read and Accumulate**: The `fill_stash` function reads `BUFFER_SIZE` chunks into a temporary buffer and joins them to the static `stash`. This continues until a newline (`\n`) is found or `read` returns 0.
2. **Extract Line**: The `get_current_line` function scans the stash for the first newline. It allocates exactly enough space for the line (including the newline character) and returns it.
3. **Clean Up**: The `update_storage` function removes the returned line from the static stash, keeping only the remaining characters for the next call to `get_next_line`.

### Justification:

This approach was chosen because it guarantees that every character read from the file descriptor is either returned immediately or stored safely for future calls. Using a static variable is the most efficient way in C to maintain state without requiring the user to pass back a pointer to the previous buffer manually.

## Instructions

### Compilation

The project must be compiled with the `-D BUFFER_SIZE=xx` flag to define the buffer size for the `read()` function.

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c

```

### Execution

To use the function in your code, include the header and call it in a loop:

```c
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
    int fd = open("file.txt", O_RDONLY);
    char *line;

    while ((line = get_next_line(fd)))
    {
        printf("%s", line);
        free(line);
    }
    close(fd);
    return (0);
}

```

## Resources

* [Man 2 read](https://man7.org/linux/man-pages/man2/read.2.html) - Documentation for the read system call.
* [Static Variables in C](https://www.geeksforgeeks.org/static-variables-in-c/) - Understanding the lifetime of static pointers.

### AI Usage

AI was utilized for the following tasks:

* **Conceptual Clarification**: Explaining complex C concepts such as the behavior of static variables and file descriptor management.
* **Problem Solving**: Providing hints for debugging memory allocation issues and handling edge cases (e.g., EOF without a newline).