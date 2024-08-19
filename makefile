# Releasing build.
cpp_flags = -Wall -Wpedantic -std=c++20
all_releasing_objects = obj/main.o obj/calculation.o obj/input.o obj/libs.o obj/show.o obj/sort.o
linker_flags = -static-libgcc -static-libstdc++ -lpthread

linux: release
	g++ $(linker_flags) $(all_releasing_objects) -o bin/subrescal

windows: release
	g++ $(linker_flags) $(all_releasing_objects) resources/src.res -o bin/subrescal

release: cpp_flags += -O2 -DNDEBUG -march=native
release: compile

compile: $(all_releasing_objects)


# Automated tests.
gtest_flags = -lgtest -lgtest_main -lpthread
all_objects_for_test = obj/libs.o obj/show.o
all_testing_objects = obj/libs.test.o obj/show.test.o

test: $(all_testing_objects) tests/*.test.cpp
	g++ $(all_objects_for_test) $(all_testing_objects) $(gtest_flags) -o bin/utest

obj/libs.test.o: obj/libs.o
	g++ $(cpp_flags) -c tests/libs.test.cpp -o obj/libs.test.o

obj/show.test.o: obj/show.o
	g++ $(cpp_flags) -c tests/show.test.cpp -o obj/show.test.o


# Cleaning up, Linux only.
clean:
	rm -f obj/*.o
	rm -f bin/*


# Create neccessary directory, Linux only.
setup:
	mkdir -p bin obj


# Compiling.
obj/main.o: src/main.cpp
	g++ $(cpp_flags) -c src/main.cpp -o obj/main.o

obj/libs.o: src/libs.*
	g++ $(cpp_flags) -c src/libs.cpp -o obj/libs.o

obj/calculation.o: src/calculation.*
	g++ $(cpp_flags) -c src/calculation.cpp -o obj/calculation.o

obj/input.o: src/input.*
	g++ $(cpp_flags) -c src/input.cpp -o obj/input.o

obj/show.o: src/show.*
	g++ $(cpp_flags) -c src/show.cpp -o obj/show.o

obj/sort.o: src/sort.*
	g++ $(cpp_flags) -c src/sort.cpp -o obj/sort.o
