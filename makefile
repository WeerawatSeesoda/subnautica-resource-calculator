# Releasing build.
program_name = subrescal
cpp_flags = -Wall -Wpedantic -std=c++20
all_releasing_objects = obj/main.o obj/calculation.o obj/input.o obj/libs.o obj/show.o obj/sort.o obj/paint-text.o
linker_flags = -static-libgcc -static-libstdc++ -lpthread

linux: release
	g++ $(linker_flags) $(all_releasing_objects) -o bin/$(program_name)

windows: release
	g++ $(linker_flags) $(all_releasing_objects) resources/subrescal.res -o bin/$(program_name)

release: cpp_flags += -O2 -DNDEBUG -march=native
release: compile

compile: $(all_releasing_objects)


# Automated tests.
unit_tests_name = unit-tests
gtest_flags = -lgtest -lgtest_main -lpthread
all_objects_for_test = obj/libs.o obj/show.o obj/sort.o
all_testing_objects = obj/libs.test.o obj/show.test.o obj/show.implementation-detail.test.o obj/sort.test.o obj/sort.implementation-detail.test.o

test: $(all_testing_objects)
	@echo Compiling tests...
	@g++ $(all_objects_for_test) $(all_testing_objects) $(gtest_flags) -o bin/$(unit_tests_name)
	@echo Running tests...
	@bin/$(unit_tests_name)

# Behavior tests.
obj/libs.test.o: obj/libs.o
	g++ $(cpp_flags) -c tests/libs.test.cpp -o obj/libs.test.o

obj/show.test.o: obj/show.o
	g++ $(cpp_flags) -c tests/show.test.cpp -o obj/show.test.o
	
obj/sort.test.o: obj/sort.o
obj/sort.test.o: tests/sort.test.cpp
	g++ $(cpp_flags) -c tests/sort.test.cpp -o obj/sort.test.o

# Implementation detail tests.
obj/show.implementation-detail.test.o: obj/show.o
	g++ $(cpp_flags) -c tests/show.implementation-detail.test.cpp -o obj/show.implementation-detail.test.o

obj/sort.implementation-detail.test.o: obj/sort.o
obj/sort.implementation-detail.test.o: tests/sort.implementation-detail.test.cpp
	g++ $(cpp_flags) -c tests/sort.implementation-detail.test.cpp -o obj/sort.implementation-detail.test.o


# Cleaning up, Linux only.
clean:
	rm -f obj/*.o
	rm -f bin/*

clean-obj:
	rm -f obj/*.o


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

obj/paint-text.o: src/paint-text.*
	g++ $(cpp_flags) -c src/paint-text.cpp -o obj/paint-text.o