ping: ping.c ping.h
	gcc -c ping.c
test_ping: ping test_ping.c
	gcc test_ping.c ping.o -o test_ping
clean:
	rm -f *.o

test_ping_d: ping_d test_ping.c
	gcc test_ping.c ping.o -o test_ping -g
ping_d: ping.c ping.h
	gcc -c ping.c -g
