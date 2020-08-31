# Compiling with g++
Executive Summary: This document is a brief description of how to compile basic C++ programs using g++. It provides sample command lines for invoking the g++ compiler and a list of some common compiler options.
## What is g++?
g++ is your friendly Gnu C++ compiler. g++ does not handle templates well, but you can use them. This document serves as a very simple bunch of hints to start using g++, and is not meant to be complete. For all the gory details about g++'s options, check out its man page.
Compiling HelloWorld.C
Say you have a file helloworld.C as follows :
```
#include <stdio.h>

void main (){
    printf("Hello World\n");
}
```
You can compile and run it from the command prompt as follows :
``` g++ helloworld.C ```
This creates an executable called ``` "a.exe" ```.

You can run it by typing ``` ./a.exe ```
Since no executable name was specified to g++, ``` a.exe ``` is chosen by default. 

Use the "-o" option to change the name :

``` g++ -o helloworld helloworld.cpp ```

creates an executable called ``` "helloworld.exe" ```.
Now you can run it by typing ``` ./helloworld.exe ```

## Include Directories
Sometimes the header files that you write are not in the same directory as the .C file that #include's it. For example you might have a a file "foo.h" that resides in /homes/me/randomplace/include. If you want to include that file in helloworld.C, you could just give the full path name in the #include, OR you can do the following:
Add
#include <foo.h>
to helloworld.C and compile it with the -I option :
% g++ -o helloworld -I/homes/me/randomplace/include helloworld.cpp 
This basically tells g++ to look for #include's in /homes/me/include in addition to other directories you specify with -I

-g - turn on debugging (so GDB gives more friendly output)
-Wall - turns on most warnings
-O or -O2 - turn on optimizations
-o <name> - name of the output file
-c - output an object file (.o)
-I<include path> - specify an include directory
-L<library path> - specify a lib directory
-l<library> - link with library lib<library>.a
