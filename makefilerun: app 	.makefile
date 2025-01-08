run: app
	./app

app: bdig.cpp libros.cpp libros.hpp
	g++ -std=c++11 bdig.cpp libros.cpp -o app
