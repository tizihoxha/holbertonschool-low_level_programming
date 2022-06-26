# C - argc, argv

- **argc (ARGument Count)** is int and stores number of command-line arguments passed by the user including the name of the program. So if we pass a value to a program, value of argc would be 2 (one for argument and one for program name)
  The value of argc should be non negative.

- **argv(ARGument Vector)** is array of character pointers listing all the arguments. If argc is greater than zero,the array elements from argv[0] to argv[argc-1] will contain pointers to strings.Argv[0] is the name of the program , After that till argv[argc-1] every element is command -line arguments.

***Simplifying the code***

 Tasks | Code description
---- | ----
[0-whatsmyname.c](https://github.com/Tizihoxha/holbertonschool-low_level_programming/blob/main/argc_argv/0-whatsmyname.c) | Program that prints its name.
[1-args.c](https://github.com/Tizihoxha/holbertonschool-low_level_programming/blob/main/argc_argv/1-args.c) | Program that prints the number of arguments passed into it.
[2-args.c](https://github.com/Tizihoxha/holbertonschool-low_level_programming/blob/main/argc_argv/2-args.c) | Program that prints all arguments it receives, one per line.
[3-mul.c](https://github.com/Tizihoxha/holbertonschool-low_level_programming/blob/main/argc_argv/3-mul.c) | Program that multiplies two numbers.
[4-add.c](https://github.com/Tizihoxha/holbertonschool-low_level_programming/blob/main/argc_argv/4-add.c) | Program that adds positive numbers.
[100-change.c](https://github.com/Tizihoxha/holbertonschool-low_level_programming/blob/main/argc_argv/100-change.c) | Program that prints the minimum number of coins to make change for an amount of money.
