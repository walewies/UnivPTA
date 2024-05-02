Prac5: Maths.o Advanced_Maths.o Calculator.o
	g++ Maths.o Advanced_Maths.o Calculator.o -o Prac5

Maths.o: Maths.cpp Maths.h
	g++ -c Maths.cpp

Advanced_Maths.o: Advanced_Maths.cpp Advanced_Maths.h Constants.h
	g++ -c Advanced_Maths.cpp

Calculator.o: Calculator.cpp Maths.h Advanced_Maths.h
	g++ -c Calculator.cpp

run: Prac5
	./Prac5

clean:
	rm -f Prac5 *.o