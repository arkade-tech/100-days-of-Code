CC       := gcc
CFLAGS   := -Wall -Wextra -Werror -pedantic -std=c11 -O2
LDFLAGS  := -lm

BIN_DIR  := bin
SRCS     := $(wildcard Day*/*.c)
BINS     := $(patsubst %.c, $(BIN_DIR)/%, $(subst /,_,$(SRCS)))

.PHONY: all clean run help

all: $(BINS)

$(BIN_DIR)/Day%_%: Day%/%.c | $(BIN_DIR)
	@echo "Compiling $< -> $@"
	@$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

$(BIN_DIR):
	@mkdir -p $(BIN_DIR)

run:
ifdef DAY
ifdef Q
	@$(MAKE) $(BIN_DIR)/Day$(DAY)_$(Q)
	@./$(BIN_DIR)/Day$(DAY)_$(Q)
else
	@echo "Usage: make run DAY=08 Q=question1"
endif
else
	@echo "Usage: make run DAY=08 Q=question1"
endif

clean:
	@rm -rf $(BIN_DIR)

help:
	@echo "Usage:"
	@echo "  make                      - Compile all solutions"
	@echo "  make run DAY=08 Q=question1 - Compile and execute a problem"
	@echo "  make clean                - Remove bin/ directory"
