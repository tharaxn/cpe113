# link
all: main.o ArrayStack.o ../ArrayList/ArrayList.o
	g++ main.o ArrayStack.o ../ArrayList/ArrayList.o -o ArrayStack -g

# copile 
main.o: main.cpp
	g++ -c main.cpp -o main.o -g

ArrayStack.o: ArrayStack.cpp
	g++ -c ArrayStack.cpp -o ArrayStack.o -g

../ArrayList/ArrayList.o: ../ArrayList/ArrayList.cpp
	g++ -c ../ArrayList/ArrayList.cpp -o ../ArrayList/ArrayList.o -g
# clean
clean:
	rm -f *.o ../ArrayList/ArrayList.o ArrayStack

#<target>: <prerequisiters>
#	<command>