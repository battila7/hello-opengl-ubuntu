CXX = g++
RM = rm -f
CXXFLAGS = -std=c++11 -Wall
LDLIBS = -lglfw3 -lGL -lGLU -lX11 -lXrandr -lXxf86vm -lpthread -ldl -lXcursor -lXinerama

OBJS = main.o

hello: $(OBJS)

hello:
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.c
	$(CXX) $(CXXFLAGS) -c $<

clean:
	$(RM) hello *.o *~
