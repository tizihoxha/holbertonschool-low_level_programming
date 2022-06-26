# C - Static libraries

What are static libraries in C?
In the C programming language, a static library is **a compiled object file containing all symbols required by the main program to operate (functions, variables etc.) as opposed to having to pull in separate entities.** 

### [All you need to know about C Static libraries](https://dev.to/iamkhalil42/all-you-need-to-know-about-c-static-libraries-1o0b)

***Simplyfing the code:***

Tasks | Code description
--------- | -----------
[main.h](https://github.com/Tizihoxha/holbertonschool-low_level_programming/blob/main/static_libraries/main.h) | Header file that contains all the prototypes of the functions.
[libmy.a](https://github.com/Tizihoxha/holbertonschool-low_level_programming/blob/main/static_libraries/libmy.a) | Static library that contains functions.
[create_static_lib.sh](https://github.com/Tizihoxha/holbertonschool-low_level_programming/blob/main/static_libraries/create_static_lib.sh) | Script that creates a static library called 'liball.a' from all the '.c' files located in the current directory.
