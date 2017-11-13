all: pen paper main 
	g++ Pen.o Paper.o main.o -o main.out

pen:
	g++ -c Pen.cpp -o Pen.o

paper:
	g++ -c Paper.cpp -o Paper.o

main:
	g++ -c main.cpp -o main.o

clean:
	rm -rf *.o *.out
