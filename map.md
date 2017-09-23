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

###What commands should be implemented ?
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

