PWD := $(shell pwd)

gcc := $(CC) # you can pass CC="gcc" to make command to change the value of CC
all : 
	@echo $(PWD)
	@echo "files list inside this dir:" $(shell ls -la)
	@echo 'Hello world'
ifeq (  $(gcc) , gcc )
	@echo 'gcc is found '
else
	@echo '$(gcc) is  found'
endif	

# ifdef statement
ifdef (XMX)
	@echo ' XMX is defined'
else
	@echo 'XMX is not defined'
endif	
