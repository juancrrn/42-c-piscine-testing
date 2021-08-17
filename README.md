42 Madrid  
C Piscine

# Testing files

## Disclaimer

These tests do not guarantee the correctness of the exercises facing Moulinette or other judges.

## How to test

Copy the `main_test.c` of the project and exercise you want to validate to the folder of your exercise.

If you want to do it automatically, you can use your own shell command or `rsync`.

Do not forget to validate your project files with Norminette. Test files do not pass The Norm.

Once copied, go to the project and exercise folder you want to test, e. g.:

```shell
cd 'C Piscine C 03/ex00'
```

Then, compile the test file with the required C files:

```shell
gcc -Wall -Werror -Wextra *.c
```

Or:

```shell
gcc -Wall -Werror -Wextra main_test.c ...
```

Finally, run the program:

```shell
./a.out
```