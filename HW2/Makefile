hello: main.o calculator.o
	g++ -o hello main.o calculator.o
main.o: main.cpp
	g++ -c -Wall main.cpp
calculator.o: calculator.cpp
	g++ -c -Wall calculator.cpp
clean:
	rm -rf main main.o calculator.o