linux: compile
	g++ -static-libgcc -static-libstdc++ obj/main.o obj/calculation.o obj/input.o obj/libs.o obj/show.o obj/sort.o -o bin/subrescal

windows: compile
	g++ -static-libgcc -static-libstdc++ obj/main.o obj/calculation.o obj/input.o obj/libs.o obj/show.o obj/sort.o resources/src.res -o bin/subrescal

compile:
	g++ -Wall -Wpedantic -std=c++20 -O3 -march=native -c src/main.cpp -o obj/main.o
	g++ -Wall -Wpedantic -std=c++20 -O3 -march=native -c src/calculation.cpp -o obj/calculation.o
	g++ -Wall -Wpedantic -std=c++20 -O3 -march=native -c src/input.cpp -o obj/input.o
	g++ -Wall -Wpedantic -std=c++20 -O3 -march=native -c src/libs.cpp -o obj/libs.o
	g++ -Wall -Wpedantic -std=c++20 -O3 -march=native -c src/show.cpp -o obj/show.o
	g++ -Wall -Wpedantic -std=c++20 -O3 -march=native -c src/sort.cpp -o obj/sort.o

test:
	g++ -Wall -Wpedantic -std=c++20 -c src/libs.cpp -o obj/libs.o
	g++ -Wall -Wpedantic -std=c++20 -c test/utest.cpp -o obj/utest.o
	g++  obj/libs.o obj/utest.o -lgtest -lgtest_main -lpthread -o bin/utest
	bin/utest
