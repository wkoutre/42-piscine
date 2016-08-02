COMPILATION - search the Internet on the basics of variables

Makefile - Introduction

make clean // (clean is a rule... not all rules are there to be used, however)

ALWAYS UPPER-CASE M!!!

vim Makefile

rule_a:
tab	echo "rule_a"		// make rule_a 		>> returns "echo 'rule_a'"


rule_b: rule_a
	echo "rule_b"		// make rule_b		>> 	rule_a is a dependency, so rule_a is executed
											// then echo_b is returned
---

TEXT = "42 is for the braves"			// TEXT is a variable which will be replaced by the string

rule_a:
	echo $(TEXT)						// make without arguments will use the first rule by default


// *********EXAMPLE********** CREATING A PROGRAM

NAME = program_1

SRC = source.c 				// file1.c file2.c file3.c >> add a line with a \ like we do for preprocessed macros

all: $(NAME)

$(NAME)
	gcc -o $(NAME) $(SRC)	// this creates an executable with the NAME and SRC files that we specify above

clean:
	/bin/rm -f *.o 			// removes all the object files during compilation

fclean: clean				// every time fclean is called, fclean will also be called, which deletes the executable
	/bin/rm -f $(NAME)

re: fclean all				// this resets the compilation to start over in a clean environment
							// calling all recompiles the program again

---

make 			//(compiles the first rule, "all" -- runs $(NAME);

make clean 		// cleans up the .o files
make fclean 	// cleans up the objects and executable
make re 		// cleans up everything to start with a clean directory