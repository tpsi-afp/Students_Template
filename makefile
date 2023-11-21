default:
	gcc -Wall -o prog.exe main.c input.c student.c
debug:
	gcc -Wall -o prog.exe -g main.c input.c student.c
clean:
	del  .\prog.exe
