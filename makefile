CC = g++
LL = main.cpp MemoryHandler/MemoryHandler.cpp
OUT = a.exe 
FF = -w -std=c++20

build:
	${CC} ${LL} -o ${OUT} ${FF}
run:
	./${OUT}
clean:
	rm -f ${OUT}