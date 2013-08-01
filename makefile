app_name = findS
com = g++
src = main.cpp instance.cpp
obj = instance.o
$(app_name):$(src) $(obj)
	@$(com) -o $(app_name) $(src)
instance.o: instance.hpp instance.cpp
	@$(com) -c instance.cpp
clean:
	@rm -f *.o $(app_name)
