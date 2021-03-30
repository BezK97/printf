## This file contains a brief description of The custom printf c files in this directory.
* **_putchar.c** : Countains a function _putchar which writes character to the stdout that it gets from buffer.
* **address_sp.c** : Contains a function format_p for printf specifier that prints an address denoted by - %p. The function prints the address of a given argument in hexa form.
* **binary_sp.c** : Contains a function format_b for custom printf specifier that prints the binary form of a given number.
* **custom_fun.c** : Contains three custom printf functions:
    * *format_r* : A function that prints the reversed version of a given string.
    * *format_R*: A function that converts a string to ROT13(replaces a letter with the 13th letter after it in the alphabet) and prints out the result.
    * *format_S* : A function that prints the string. The Non printable characters i.e. 0 < ASCII value < 32 or >= 127 are printed \x, followed by the ASCII code value in hexadecimal form (uppercase)
* **flag_0.c** : contains four printf functions that perform 0 flag (The value will be zero padded):
    * *flag_0* : function that prints d, i, and u while passing to another function if the specifier is o, x, or X
    * *flag_0o* : function that prints octal with 0 flag.
    * *flag_0x* : function that prints hexa(small) with 0 flag
    * *flag_0X* : function that prints hexa(capital) with 0 flag
* **flag_hash.c** : contains four printf functions that perform # flag (prefix 0 if octa and 0x or 0X for hexa):
    * *flag_hash* : function that checks for octal or hexa and pass them to their respective function
    * *hash_o* : function that prints octal with # flag.
    * *hash_x* : function that prints hexa(small) with # flag
    * *hash_X* : function that prints hexa(capital) with # flag
* **flag_left.c** : contains four printf functions that perform - flag (value is to be left adjusted):
    * *flag_left* : function that checks for d, i, u, o, x, or X and pass them to their respective function
    * *flag_left_diu* : function that prints d, i, and u with - flag.
    * *flag_left_o* : function that prints octa with - flag
    * *flag_left_xX* : function that prints hexa with - flag
* **flag_plus.c** : Contains a function flag_plus which perform the + flag (print + before integer if positive and - if negative.)
* **flag_right.c** : contains four printf functions that perform field width (value is to be right adjusted):
    * *flag_right* : function that checks for d, i, u, o, x, X, c, or s and pass them to their respective function
    * *flag_right_diuc* : function that prints d, i, u and c with field width.
    * *flag_right_o* : function that prints octa with field width
    * *flag_right_xX* : function that prints hexa with field width
    * *flag_right_s* : function that prints string with field width
* **flag_spc.c** : Contains a function flag_spc which performs the space flag (print a space before a positive value)
* **helper_func.c** : Contains four functions used throughout the program as a helping function
    * *itos* : Function that converts integer to string
    * *utos* : Function to convert unsigned int to string
    * *num_len* : Function that counts the length of a number
    * *_strlen* : Function to count the number of string
* **hexa_sp.c** : Contains two functions which perform hexa specifier denoted by %x or %X
    * *format_x* : Function that prints hexadecimal using small characters
    * *format_X* : Function that prints hexadecimal using capital characters
* **holberton.h** : Contains header files and function prototypes needed for the program
* **man_3_printf** : Is a Programmer's Manual for custom printf
* **octal_sp.c** : Contains a function format_o which perform octa specifier denoted by %o (prints octal value.)
* **percent.c** : Contains a function format_pers which prints percent sign.
* **precision.c** : contains four printf functions that perform precision denoted by . followed by an optional decimal digit string(print upto decimal digit)
    * *precision* : function that checks for d, i, u, o, x, X, c, or s and pass them to their respective function
    * *precision_diuc* : function that prints d, i, u and c with precision
    * *precision_o* : function that prints octa with precision
    * *precision_xX* : function that prints hexa with precision
    * *precision_s* : function that prints string with precision
* **printf.c** : Contains two functions that call all the functions within the program
    * *_printf* : Function that goes through format (String composed of zero ot more characters to print) and prints according to a format
    * *func_sp* : Function that contains specifiers and corresponding arguments
* **signed_sp.c** : Contains function format_d which perform integer specifier denoted by %d, or %i (prints signed integer)
* **string_sp.c** : Contains two fonctions which perform char and str specifier denoted by %c and %s respectively (prints character and string)
    * *format_c* : Function that prints character
    * *format_str* : Function that prints string
* **unsigned_sp.c** : Contains function format_u which perform unsigned specifier denoted by %u (Prints unsigned integer)
