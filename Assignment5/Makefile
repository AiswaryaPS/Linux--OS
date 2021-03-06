all: solutionsend sol4receive

sol4send: solutionsend.c 
	gcc -o solutionsend.out solutionsend.c -lrt
	
sol4receive: solutionreceive.c 
	gcc -o solutionreceive.out solutionreceive.c -lrt
	
runsolutionreceive:
	./solutionreceive.out

runsolutionsend:
	./solutionsend.out

clean:
	rm -rf *.out *.o