APPLICATION=es0_template

# doing some weird stuff to accept args from Makefile
args = `arg="$(filter-out $@,$(MAKECMDGOALS))" && echo $${arg:-${1}}`

all: compile test run

# another thing to accept args from makefile (this rule avoid complains for random make commands)
%:
	@:

compile:
	mkdir -p build &&\
	cd build &&\
	echo "\n\033[1;33m█ Generating makefiles...\033[0m\n" &&\
	cmake .. &&\
	echo "\n\033[1;93m█ Compiling...\033[0m\n" &&\
	cmake --build .

test:
	@echo "\n\033[1;93m█ Testing project...\033[0m\n\n" &&\
	cd build &&\
	make test

run:
	@echo "\n\033[1;32m█ Running...\033[0m\n\n" &&\
	./build/src/$(APPLICATION) $(call args, Hello Template)