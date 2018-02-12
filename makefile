#
# PROGRAM: Assign 3   
# PROGRAMMER: Samuel Piecz 
# LOGON ID: Z1732715 
# DATE DUE: 02/12/18 
#
# Compiler variables
CCFLAGS = -ansi -Wall -std=c++11

# Rule to link object code files to create executable file
assignment3: assignment3.o
	g++ $(CCFLAGS) -o assignment3.exe assignment3.o

# Rule to compile source code file to object code
assignment3.o: assignment3.cc
	g++ $(CCFLAGS) -c assignment3.cc

# Pseudo-target to remove object code and executable files
clean:
	-rm -f *.o assignment3.exe
