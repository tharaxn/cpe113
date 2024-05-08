# link
all: main.o LinkedStack.o ../LinkedList/LinkedList.o ../ChainNode/ChainNode.o
	g++ main.o LinkedStack.o ../LinkedList/LinkedList.o ../ChainNode/ChainNode.o -o LinkedStack -g

# copile 
main.o: main.cpp
	g++ -c main.cpp -o main.o -g

LinkedStack.o: LinkedStack.cpp
	g++ -c LinkedStack.cpp -o LinkedStack.o -g

../LinkedList/LinkedList.o: ../LinkedList/LinkedList.cpp
	g++ -c ../LinkedList/LinkedList.cpp -o ../LinkedList/LinkedList.o  -g

../ChainNode/ChainNode.o: ../ChainNode/ChainNode.cpp
	g++ -c ../ChainNode/ChainNode.cpp -o ../ChainNode/ChainNode.o -g
# clean
clean:
	rm -f *.o ../LinkedList/LinkedList.o LinkedStack

#<target>: <prerequisiters>
#	<command>