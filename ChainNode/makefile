# link
all: main.o ChainNode.o
	g++ main.o ChainNode.o -o ChainNode

# copile
main.o: main.cpp
	g++ -c main.cpp -o main.o

ChainNode.o: ChainNode.cpp
	g++ -c ChainNode.cpp -o ChainNode.o

# clean
clean:
	rm -f *.o ChainNode

#<target>: <prerequisiters>
#	<command>