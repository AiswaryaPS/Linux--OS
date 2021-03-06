all: solutionsend solutionreceive

solutionsend: solutionsend.c 
	gcc -o solutionsend.out solutionsend.c -lrt
	
solutionreceive: solutionreceive.c 
	gcc -o solutionreceive.out solutionreceive.c -lrt
	
runsolutionreceive:
	./solutionreceive.out

runsolutionsend:
	./solutionsend.out

clean:
	rm -rf *.out *.o
