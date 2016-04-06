COMM_SRC = gen-cpp//myfirst_constants.cpp \
			gen-cpp//myfirst_types.cpp \
			gen-cpp//MyFirstService.cpp

COMM_FLAGS = -I./gen-cpp -lglog -lthrift -lboost_thread -lboost_system \
			-std=c++11 -pthread -g -O3

all: server client

server:
	c++ -o $@.bin MyFirstServer.cpp $(COMM_SRC) $(COMM_FLAGS)
client:
	c++ -o $@.bin MyFirstClient.cpp $(COMM_SRC) $(COMM_FLAGS)

clean:
	rm -rf *.bin *.bin.*
