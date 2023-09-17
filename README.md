# printf function

In this project We implement C built in function printf we some limits of its features


| File              | discription                             |
| ----------------- | --------------------------------------- |
| `main.c`          | `test our function`                     |
| `main.h  `        | `contain prototpye functions;`          |
| `number_print`    | `function to print integer values;`     |
| `_printf`         | `the function that we impelemen`        |
| `_putchar`        | `print char by char`                    |
| `specifiers`      | `contain printf options`                |


## Project discription:

* **main.c**
  * test some cases of our printf by passing the specifier and the function will  print the
   correct value such as `int` and `hex` formate.

* **main.h**
  * contain all prototype functions and the structure used also contain `stdarg.h` file that help
   to manage our work by using variable list to handle more than value passed to the function.

* **number_print**
  * this function is used to handel how to print integer value usig `ASCII` conversion and its type `variadic function`.

* **_printf**
  * this function in to take the input and pass to specifer function as a variable list to print the right content
  by calling the right specifer.

* **4. I can only go one way. I've not got a reverse gear**
  * [4-print_rev.c](./4-print_rev.c): C function that prints a string, in reverse,
  followed by a new line.

* **_putchar**
  * by using write function we impelemented the putchar function to write char by char.

* **specifier**
  * a variadic function that callig the right specifer and calling a pointer function that store address of passing 
  list from `_printf` function its depands on struct define in `main.h`.
