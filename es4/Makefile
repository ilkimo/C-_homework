TARGET = bin/marshalling
TARGET_MAIN = app/main.c
TARGET_SRC = src/marshalling.c
TARGET_OBJ = build/marshalling.o
TARGET_HEADERS = include/marshalling.h
CFLAGS=-g -O0 -Wall -Wpedantic -Werror -I Unity/ -I include/
COMMON_DEPS = Makefile

all: $(TARGET) test

# rule to compile a .c in a .o
#   $@ : the entire target of the rule (in this case: build/<filename>.o)
#   $< : the first dependence of the rule (in this case: src/<filename>.c)
build/%.o: src/%.c include/%.h $(COMMON_DEPS)
	mkdir build -p
	$(CC) $(CFLAGS) -c $< -o $@

run: $(TARGET)
	$(TARGET)

$(TARGET): $(TARGET_MAIN) $(TARGET_SRC) $(TARGET_OBJ) $(TARGET_HEADERS) $(COMMON_DEPS)
	mkdir bin -p
	$(CC) $(CFLAGS) $(TARGET_MAIN) $(TARGET_OBJ) -o $(TARGET)

test: bin/tests $(COMMON_DEPS)
	bin/tests

bin/tests: tests/testMarshalling.c $(TARGET_OBJ) $(TARGET_HEADERS)
	mkdir bin -p
	$(CC) $(CFLAGS) tests/testMarshalling.c $(TARGET_OBJ) ./Unity/unity.c -o bin/tests

clean:
	rm -rf *.o $(TARGET) bin/*.o build/*.o bin/test