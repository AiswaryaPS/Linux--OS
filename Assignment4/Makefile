all: pipe1 pipe2 pipe3

pipe1: assignment2Gpipe1.c solution.h
	gcc -o pipe1.out pipe1.c -lrt
	
pipe2: pipe2.c solution.h
	gcc -o pipe2.out pipe2.c -lrt

pipe3: pipe3.c solution.h
	gcc -o pipe3.out pipe3.c -lrt
	
runpipe1:
	.pipe1.

runpipe2:
	.pipe2.out

runpipe3:
	.pipe3.out

clean:
	rm -rf *.out *.o
