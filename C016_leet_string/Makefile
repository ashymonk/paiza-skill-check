CC = gcc
CPPFLAGS += -DDEBUG
CFLAGS += -Wall -Wextra -g
LDFLAGS +=
LDLIBS +=
TARGET = leet_string

.PHONY: all clean

all: $(TARGET)

clean:
	rm -f *.o $(TARGET)

leet_string: leet_string.o

test: test01 test02

test01: leet_string
	$(eval TEMP = $(shell mktemp))
	./$< < $@_input.txt | tee $(TEMP)
	diff -u $@_output.txt $(TEMP)
	rm $(TEMP)

test02: leet_string
	$(eval TEMP = $(shell mktemp))
	./$< < $@_input.txt | tee $(TEMP)
	diff -u $@_output.txt $(TEMP)
	rm $(TEMP)
