plot.png: ej.dat grafica.py
	python grafica.py

%.dat : a.out
	./a.out 

a.out: NathaliaCalderon_Ejercicio29.cpp
	g++ NathaliaCalderon_Ejercicio29.cpp

clean:
	rm -rf a.out ej.dat plot.png *~