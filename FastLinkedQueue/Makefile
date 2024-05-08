all: main.o FastLinkedQueue.o ../ChainNode/ChainNode.o
	g++ main.o FastLinkedQueue.o ../ChainNode/ChainNode.o -o FastLinkedQueue
main.o: main.cpp
	g++ -c main.cpp -o main.o
FastLinkedQueue.o: FastLinkedQueue.cpp
	g++ -c FastLinkedQueue.cpp -o FastLinkedQueue.o
../ChainNode/ChainNode.o: ../ChainNode/ChainNode.cpp
	g++ -c ../ChainNode/ChainNode.cpp -o ../ChainNode/ChainNode.o
clean:
	rm -f *.o ../ChainNode/ChainNode.o FastLinkedQueue