display.o : src/display.c
	gcc -c src/display.c

main.o : src/main.c
	gcc -c src/main.c

player.o : src/player.c
	gcc -c src/player.c

random.o : src/random.c
	gcc -c src/random.c

all : src/display.o src/main.o src/player.o src/random.o
	gcc src/main.o src/display.o src/player.o src/random.o
	rm src/display.o src/main.o src/player.o src/random.o

# clean : 
# 	rm src/display.o src/main.o src/player.o src/random.o

# purge : 
# 	rm a.out src/display.o src/main.o src/player.o src/random.o