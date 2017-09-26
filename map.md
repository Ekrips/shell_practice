##TODO##
Tokenisation propre

###How does it work ?
* Loads config file & applies parameters
* Prints several infos then prints prompt
* Waits for input
* Tokenizes said input
* Checks if first word (parameter) is a known command (what is a known 
command ? where are they ? how does the shell know ?)
* If it is, gives the whole tokenized input to the appropriate program
* Said program checks if there are more parameters in the tokenized 
input
* If that's the case, checks the relevant ones for validity (for example 
if cd is followed by a valid directory path)
* If everything is okay, tries to run the program
* Whether it is a success or not, the shell should print another prompt 
and wait for input again (or not if the command is supposed to wait for 
input)

###How to do it ?
* Short main : loads config file (find a default location, fe ~) then launches main routine:
   prints prompt([user@machine curr dir]$), waits for input, tokenizes it, checks if first word is a
   known command (a known command is a C program located somewhere which performs a specific action).
   If it's the case, fork() and the child gives the tokenized string to the program.
* Said program will check the tokenized string for parameters and their validity. If something is wrong,
   behaves appropriately (errno, print error, etc). If everything is okay, tries to run the program with the
   arguments.
* When the program ends, the child process ends properly and the father resumes at the beginning of the
   routine.

###What commands should be implemented ?
* exit (close program safely + clear all memory)
* date
* pwd
* ls (+ options a l)
* cd (+ options ~ -)
* touch (one or several files)
* mkdir (one or several directories)
* rm (+options r f; one or several files/directories)
* cp (+option r)
* mv
* cat (+option n)

