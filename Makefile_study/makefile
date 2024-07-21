## Version1
# main: main.cpp mul.cpp
## :冒号代表左边依赖右边
# 	g++ -o main main.cpp mul.cpp

## Version2
# CXX = g++
# TARGET = main
# OBJ = main.o mul.o

# $(TARGET): $(OBJ)
# 	$(CXX) -o $(TARGET) $(OBJ)

# main.o: main.cpp
# 	$(CXX) -c main.cpp

# mul.o: mul.cpp
# 	$(CXX) -c mul.cpp

##Version2 只会编译更新的部分文件，可以提高编译效率

# #Version3
# CXX = g++
# TARGET = main
# OBJ = main.o mul.o

# CXXFLAGS = -c -Wall
# ##wall:warning all 

# $(TARGET): $(OBJ)
# 	$(CXX) -o $@ $^
	
# %.o: %.cpp
# 	$(CXX) $(CXXFLAGS) $< -o $@
# #$@为冒号前面的（即为TARGET) $^为依赖的所有对象 $<为依赖的第一个

# .PHONY: clean
# #防止有文件叫clean,'伪目标'
# clean:
# 	rm -f *.o $(TARGET)

#Version4
CXX = g++
TARGET = main
SRC = $(wildcard *.cpp)
#把所有当前目录下以cpp为扩展名的文件都放到SRC这个变量里
OBJ = $(patsubst %.cpp, %.o, $(SRC))
#把SRC中cpp替换为o

CXXFLAGS = -c -Wall

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

.PHONY: clean
clean:
	rm -f *.o $(TARGET)