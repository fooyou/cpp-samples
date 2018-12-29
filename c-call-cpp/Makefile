.POSIX:
.PHONY: run clean

main.out: main.o cpp.o
	gcc -o '$@' $^

# $@--目标文件，$^--所有的依赖文件，$<--第一个依赖文件。

cpp.o: cpp.cpp
	g++ -c -g -o '$@' -std=c++98 -Wall -Wextra -pedantic-errors '$^'

main.o: main.c
	gcc -c -g -o '$@' -std=c89 -Wall -Wextra -pedantic-errors '$^'

run: main.out
	./main.out

clean:
	rm -f *.o *.out
