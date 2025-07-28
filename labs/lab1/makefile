CC=gcc
CFLAGS=-Wall -g

all: helloworld echoargs

helloworld: helloworld.o
	$(CC) $(CFLAGS) -o helloworld helloworld.o

echoargs: echoargs.o
	$(CC) $(CFLAGS) -o echoargs echoargs.o

reverse: reverse.o
	$(CC) $(CFLAGS) -o reverse reverse.o

wordcount: wordcount.o
	$(CC) $(CFLAGS) -o wordcount wordcount.o
clean:
	rm -f *.o wordcount echoargs hello reverse wordcountlabs/lab1/hello.c