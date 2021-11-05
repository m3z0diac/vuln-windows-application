# vuln-windows-application

## About this program
##### this is a simple C vulnerable windows program for practicing and learning windows exploitation. this made for beginners in windows exploitation development and reversing binary world like me. fell free to use it or edit it.

## vulnerablities at this program

### Buffer Overflow:
##### occurs when more data is put into a fixed-length buffer than the buffer can handle. The extra information, which has to go somewhere, can overflow into adjacent memory space, corrupting or overwriting the data held in that space.

### Command Injection:
##### Command injection is an attack in which the goal is execution of arbitrary commands on the host operating system via a vulnerable application. Command injection attacks are possible when an application passes unsafe user supplied data to a system shell. in this program the source code is a wrapper around the windowa commanda ``` del ``` which delete a file that in input, or ``` type ``` which prints the contents ofa file to standard output or ``` dir ``` and so on ...
