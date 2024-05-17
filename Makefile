CXX_FLAGS := -std=c++17 -g -Wall

%: %.cpp
	g++ $(CXX_FLAGS) -o $@ $<
