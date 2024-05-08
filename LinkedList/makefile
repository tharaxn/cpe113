# link
all: main.o LinkedList.o ../ChainNode/ChainNode.o
	g++ main.o LinkedList.o ../ChainNode/ChainNode.o -o LinkedList -g

# copile
main.o: main.cpp
	g++ -c main.cpp -o main.o

LinkedList.o: LinkedList.cpp
	g++ -c LinkedList.cpp -o LinkedList.o

../ChainNode/ChainNode.o: ../ChainNode/ChainNode.cpp
	g++ -c ../ChainNode/ChainNode.cpp -o ../ChainNode/ChainNode.o

# clean
clean:
	rm -f *.o ../ChainNode/ChainNode.o LinkedList

#<target>: <prerequisiters>
#	<command>