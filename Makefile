CC       := cc
CCFLAGS  := -std=c17 -g 
LDFLAGS  := 
SRC1     := server.c
OUT1     := server
SRC2     := client.c
OUT2     := client

build: build_1 build_2

build_2:
	$(CC) $(SRC1) $(CCFLAGS) $(LDFLAGS) -o $(OUT1)

build_1:
	$(CC) $(SRC2) $(CCFLAGS) $(LDFLAGS) -o $(OUT2)

clean:
	rm -rf $(OUT)
