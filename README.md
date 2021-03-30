##This file contains a brief description of The custom printf c files in this directory.
###_putchar.c
####Countains a function _putchar which writes character to the stdout that it gets from buffer.
###address_sp.c
####Contains a function format_p for printf specifier that prints an address denoted by - %p
####The function prints the address of a given argument in hexa form.
###binary_sp.c
####Contains a function format_b for custom printf specifier that prints the binary form of a given number.
###custom_fun.c
####Contains three custom printf functions:
####format_r : A function that prints the reversed version of a given string.
####format_R : A function that converts a string to ROT13(replaces a letter with the 13th letter after it in the alphabet) and prints out the result.
####format_S : A function that prints the string. The Non printable characters i.e. 0 < ASCII value < 32 or >= 127 are printed \x, followed by the ASCII code value in hexadecimal form (uppercase)
###
