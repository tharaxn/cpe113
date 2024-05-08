# link
all: main.o ArrayList.o
	g++ main.o ArrayList.o -o ArrayList

# copile
main.o: main.cpp
	g++ -c main.cpp -o main.o

ArrayList.o: ArrayList.cpp
	g++ -c ArrayList.cpp -o ArrayList.o

# clean
clean:
	rm -f *.o ArrayList

#<target>: <prerequisiters>
#	<command>