CXXFLAGS = -Wall -g

main: main.cpp QComp.cpp State.cpp Amplitude.cpp Gate.cpp

test: test.cpp QComp.cpp State.cpp Amplitude.cpp Gate.cpp

clean:
	rm -f main
	rm -f test
