WARNING = -Wall -Wshadow --pedantic
ERROR = -Wvla -Werror
GCC = gcc -std=c99 -g $WARNING $ERROR
VAL = valgrind --tool=memcheck --log-file=vallog --leak-check=full --verbose

SRCS = main.c passgen.c
OBJS = $(SRCS:%.c=%.o)

passgen: $(OBJS)
		$(GCC) $(OBJS) -o passgen

.c.o:
		$(GCC) -c $*.c
