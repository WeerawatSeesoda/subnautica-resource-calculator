# Releasing build.
program_name = subrescal
cpp_flags = -Wall -Wpedantic -std=c++20
all_releasing_objects = obj/main.o obj/calculation.o obj/input.o obj/libs.o obj/show.o obj/sort.o obj/paint-text.o obj/version.o obj/list.o
linker_flags = -static-libgcc -static-libstdc++ -lpthread

linux: release
	@echo Building app without icon...
	@g++ $(linker_flags) $(all_releasing_objects) -o bin/$(program_name)
	@echo Build suceed.

windows: release
	@echo Building app with icon...
	@g++ $(linker_flags) $(all_releasing_objects) resources/subrescal.res -o bin/$(program_name)
	@echo Build suceed.

release: cpp_flags += -O2 -DNDEBUG -march=native
release: compile

compile: $(all_releasing_objects)


# Automated tests.
unit_tests_name = unit-tests
gtest_flags = -lgtest -lgtest_main -lpthread
all_objects_for_test = obj/libs.o obj/show.o obj/sort.o obj/paint-text.o obj/input.o obj/list.o
all_testing_objects = obj/libs.test.o obj/show.test.o obj/show.implementation.test.o obj/sort.test.o obj/sort.implementation.test.o obj/input.test.o obj/list.test.o

test: $(all_testing_objects)
	@echo Building Tests...
	@g++ $(all_objects_for_test) $(all_testing_objects) $(gtest_flags) -o bin/$(unit_tests_name)
	@echo Running Tests...
	@bin/$(unit_tests_name)

# Behavior tests.
obj/libs.test.o: obj/libs.o
obj/libs.test.o: tests/libs.test.cpp
	@echo Compiling libs.test
	@g++ $(cpp_flags) -c tests/libs.test.cpp -o obj/libs.test.o

obj/show.test.o: obj/libs.o obj/show.o
obj/show.test.o: tests/show.test.cpp
	@echo Compiling show.test
	@g++ $(cpp_flags) -c tests/show.test.cpp -o obj/show.test.o

obj/sort.test.o: obj/libs.o obj/sort.o
obj/sort.test.o: tests/sort.test.cpp
	@echo Compiling sort.test
	@g++ $(cpp_flags) -c tests/sort.test.cpp -o obj/sort.test.o

obj/input.test.o: obj/libs.o obj/paint-text.o obj/input.o
obj/input.test.o: tests/input.test.cpp
	@echo Compiling input.test
	@g++ $(cpp_flags) -c tests/input.test.cpp -o obj/input.test.o

obj/list.test.o: obj/list.o obj/paint-text.o
obj/list.test.o: tests/list.test.cpp
	@echo compiling list.test
	@g++ $(cpp_flags) -c tests/list.test.cpp -o obj/list.test.o

# Implementation detail tests.
obj/show.implementation.test.o: obj/libs.o obj/show.o
obj/show.implementation.test.o: tests/show.implementation.test.cpp
	@echo Compiling show.implementation.test
	@g++ $(cpp_flags) -c tests/show.implementation.test.cpp -o obj/show.implementation.test.o

obj/sort.implementation.test.o: obj/libs.o obj/sort.o
obj/sort.implementation.test.o: tests/sort.implementation.test.cpp
	@echo Compiling sort.implementation.test
	@g++ $(cpp_flags) -c tests/sort.implementation.test.cpp -o obj/sort.implementation.test.o


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
	@echo Compiling main
	@g++ $(cpp_flags) -c src/main.cpp -o obj/main.o

obj/libs.o: src/libs.*
	@echo Compiling libs
	@g++ $(cpp_flags) -c src/libs.cpp -o obj/libs.o

obj/calculation.o: src/calculation.*
	@echo Compiling calculation
	@g++ $(cpp_flags) -c src/calculation.cpp -o obj/calculation.o

obj/input.o: src/input.*
	@echo Compiling input
	@g++ $(cpp_flags) -c src/input.cpp -o obj/input.o

obj/show.o: src/show.*
	@echo Compiling show
	@g++ $(cpp_flags) -c src/show.cpp -o obj/show.o

obj/sort.o: src/sort.*
	@echo Compiling sort
	@g++ $(cpp_flags) -c src/sort.cpp -o obj/sort.o

obj/paint-text.o: src/paint-text.*
	@echo Compiling paint-text
	@g++ $(cpp_flags) -c src/paint-text.cpp -o obj/paint-text.o

obj/version.o: src/version.*
	@echo Compiling version
	@g++ $(cpp_flags) -c src/version.cpp -o obj/version.o

obj/list.o: src/list.*
	@echo Compiling list
	@g++ $(cpp_flags) -c src/list.cpp -o obj/list.o

