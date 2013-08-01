app_name = findS
com = g++
src = main.cpp instance.cpp
obj = instance.o
$(app_name):$(src) $(obj)
	@$(com) $(obj) main.cpp -o $(app_name) 
instance.o: instance.hpp instance.cpp
	@$(com) -c instance.cpp
clean:
	@rm -f *.o $(app_name)
