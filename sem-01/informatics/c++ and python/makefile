.PHONY : clean

cc := gcc
c_flags := -Wall -Werror -pedantic -std=c99
position_i_code := -fPIC

src := ./src/

run : liboperation.so main.py
	python3 main.py

liboperation.so : arr_operation.o
	$(cc) -shared $(position_i_code) $^ -o $@

arr_operation.o : $(src)arr_operation.c
	$(cc) $(c_flags) $(position_i_code) -c $^ -o $@

clean :
	rm -rf $(src)*.o $(src)__pycache__ *.o *.so __pycache__