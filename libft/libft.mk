# Makefile for linking with the libft library

LIBFT_DIR ?= .

TARGET_STATIC = libft.a
TARGET_SHARED = libft.so


LIBFT_INC_DIR = $(LIBFT_DIR)/includes

LIBFT_INC = -I $(LIBFT_INC_DIR)
LIBFT_LNK = -L $(LIBFT_DIR) -lft
LIBFT_LIB = $(LIBFT_DIR)/$(TARGET_STATIC)