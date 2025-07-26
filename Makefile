.PHONY: all clean

all: bin/mapper bin/reducer bin/mapper_dispersion bin/reducer_dispersion

bin/mapper: mapper.cpp
	mkdir -p bin
	g++ -o $@ mapper.cpp

bin/reducer: reducer.cpp
	mkdir -p bin
	g++ -o $@ reducer.cpp

bin/mapper_dispersion: mapper_dispersion.cpp
	mkdir -p bin
	g++ -o $@ mapper_dispersion.cpp

bin/reducer_dispersion: reducer_dispersion.cpp
	mkdir -p bin
	g++ -o $@ reducer_dispersion.cpp

clean:
	rm -rf bin output