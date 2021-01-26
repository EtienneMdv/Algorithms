PROJECT = algo
SRCS =  gcd.c main.c
OBJS = $(SRCS:.c=.o)
BUILDPATH = build
VPATH = GCD:$(BUILDPATH)

$(PROJECT) : $(OBJS)
	cc -o $(PROJECT) $(BUILDPATH)/*.o

%.o : %.c
	cc -o $(BUILDPATH)/$@ -c $<

.PHONY : clean
clean :
	rm $(BUILDPATH)/*.o
