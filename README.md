# st-get_next_line (2020/06/07)

## INFO
Write an GNL `(get_next_line)` that reads line by line from the file descriptor.  
This function should not contain third-party libraries `(Libft)` and write all necessary additional functions in `get_next_line_utils.c`.
Calling your get_next_line function in a loop will allow you to read the text available in the file descriptor one line at a time until EOF.

## MAKE
Compilation:
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=32 get_next_line.c get_next_line_utils.c

## TESTS:
42TESTERS-GNL
