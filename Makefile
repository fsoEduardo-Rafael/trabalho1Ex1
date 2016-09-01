planoNPonto: main.o
	g++ $(CFLAGS) -o planoNPonto main.o
main.o: main.c 
	gcc $(CFLAGS) -c main.c
clean:
	rm -f *.o main.o