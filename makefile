app_name = findS
com = g++
src = main.cpp
$(app_name):$(src)
	@$(com) -o $(app_name) $(src)
clean:
	@rm -f *.o $(app_name)
