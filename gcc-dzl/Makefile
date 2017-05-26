main:main.o maxmin.o
	gcc main.o maxmin.o -o main
	./main
	rm main *.o
main.o:main.c
	gcc -c main.c
maxmin.o:maxmin.c
	gcc -c maxmin.c

clean:
	rm main *.o
