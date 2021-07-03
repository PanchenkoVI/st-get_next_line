# st-get_next_line (2020/06/07)

## INFO
Write a function which returns a line read from a file descriptor, without the newline.

1 Calling your function get_next_line in a loop will then allow you to read the text available on a file descriptor one line at a time until the EOF.
2 Make sure that your function behaves well when it reads from a file and when it reads from the standard input.

3 You must add a get_next_line_utils.c file which will contain the functions that are needed for your get_next_line to work.

4 Your program must compile with the flag -D BUFFER_SIZE=xx. which will be used as the buffer size for the read calls in your get_next_line. This value will be modified by your evaluators and by moulinette.

5 Compilation will be done this way : gcc -Wall -Wextra -Werror -D BUFFER_SIZE=32 get_next_line.c get_next_line_utils.c

6 Your read must use the BUFFER_SIZE defined during compilation to read from a file or from stdin.

7 In the header file get_next_line.h you must have at least the prototype of the function get_next_line.

## MAKE
Compilation will be done this way: 
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=32 get_next_line.c get_next_line_utils.c

## TESTS
42TESTERS-GNL

## Additional Information
https://en.wikipedia.org/wiki/Static_variable
