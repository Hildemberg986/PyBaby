# Nome do executável
TARGET = main

# Compiler
CC = gcc

# Flags de compilação
CFLAGS = -Wall -Wextra

# Arquivos fonte
SRCS = $(shell cat imports.txt)

# Objetos gerados
OBJS = $(SRCS:.c=.o)

# Regra padrão: compila o programa
all: $(TARGET)

# Regra de compilação do programa
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Regra de compilação de arquivos fonte para objetos
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regra para limpar arquivos objeto e o executável
clean:
	rm -f $(OBJS)