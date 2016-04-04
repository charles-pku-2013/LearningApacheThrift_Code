COMM_SRC = gen-cpp//myfirst_constants.cpp \
			gen-cpp//myfirst_types.cpp \
			gen-cpp//MyFirstService.cpp

all: server client

server:
	c++ -o $@.bin MyFirstServer.cpp $(COMM_SRC) -I./gen-cpp -lthrift -std=c++11 -g
client:
	c++ -o $@.bin MyFirstClient.cpp $(COMM_SRC) -I./gen-cpp -lthrift -std=c++11 -g

clean:
	rm -f *.bin
