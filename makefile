CC=gcc
AR=ar
Main=main.o
Library=power.o basicMath.o
FLAGS= -Wall -g

all: mains maind 
mains: $(Main) libmyMath.a 
	$(CC) $(FLAGS) $(Main) -lmyMath -L. -o mains
maind: $(Main)
	$(CC) $(FLAGS) -o maind $(Main) -lmyMath -L.
mymathd: libmyMath.so
mymaths: libmyMath.a
libmyMath.so: $(Library)
	$(CC) -fPIC  -c power.c -o power.o
	$(CC) -fPIC  -c basicMath.c -o basicMath.o
	$(CC) -shared -o libmyMath.so $(Library)
libmyMath.a: $(Library)
	$(AR) rcs libmyMath.a $(Library)
main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c -o power.o
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c -o basicMath.o
.PHONY: clean all mymathd mymaths

clean:
	rm -f *.o *.a *.so maind mains