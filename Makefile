CC_FLAGS = -s NO_EXIT_RUNTIME=1 -s MODULARIZE=1 -s EXPORTED_RUNTIME_METHODS="['ccall', 'allocate', 'malloc', 'ALLOC_NORMAL']"
CC = emcc
DIR_BASE := $(shell dirname $(shell which emcc))

all:	calculations	greeter

make_dist:
	${shell mkdir -p dist}

calculations: make_dist
	${CC} -Iincludes src/calculations/*.c -o "dist/$@.js" ${CC_FLAGS}

greeter: make_dist
	${CC} -Iincludes src/greeter/*.c -o "dist/$@.js"  ${CC_FLAGS} 

serve:
	python3 -m http.server 8080

clean:
	rm -rf dist/*