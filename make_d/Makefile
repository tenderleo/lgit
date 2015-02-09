PWD := $(shell pwd)

gcc := $(CC) # you can pass CC="gcc" to make command to change the value of CC
XMX := ' ' 
XMM := $(XMX)

bar = 
foo = $(bar)
foo2 := $(bar)


all : 
	@echo $(PWD)
	@echo "files list inside this dir:" $(shell ls -la)
	@echo 'Hello world'
ifeq (  $(gcc) , gcc )
	@echo 'gcc is found '
else
	@echo '$(gcc) is  found'
endif	

# ifdef statement; XMX from command line.
ifdef XMX
	@echo ' XMX is defined'
else
	@echo 'XMX is not defined'
endif	

ifdef XMM
	@echo 'XMM is defined but value is empty'
else
	@echo 'XMM boom'
endif

ifdef_test :
ifdef foo
	@echo "foo(=) haha"
else
	@echo "foo(=) nono"
endif

ifdef foo2
	@echo "foo(:=) haha"
else
	@echo "foo(:=) nono"
endif
