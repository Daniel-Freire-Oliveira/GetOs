CFLAGS  = main.c -o main
all:
	@echo "Building the files"
	gcc $(CFLAGS)
msg.show:
	@echo "Finalizing"
clear:
	rm *.o
