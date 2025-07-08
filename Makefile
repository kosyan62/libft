# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgena <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 15:35:59 by mgena             #+#    #+#              #
#    Updated: 2020/07/22 15:55:49 by mgena            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
TARGET_STATIC = $(NAME).a
TARGET_SHARED = $(NAME).so

BUILD_DIR = build
BUILD_STATIC = $(BUILD_DIR)/static
BUILD_SHARED = $(BUILD_DIR)/shared


SRC_DIR = src
INC_DIR = includes

SRCS := $(shell find $(SRC_DIR) -name "*.c")
OBJS_STATIC := $(patsubst $(SRC_DIR)/%.c,$(BUILD_STATIC)/%.o,$(SRCS))
OBJS_SHARED := $(patsubst $(SRC_DIR)/%.c,$(BUILD_SHARED)/%.o,$(SRCS))

.PHONY: all clean fclean re

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(TARGET_STATIC) $(TARGET_SHARED)

# build target
$(TARGET_STATIC): $(OBJS_STATIC)
	ar rcs $(TARGET_STATIC) $(OBJS_STATIC)

$(TARGET_SHARED): $(OBJS_SHARED)
	$(CC) -shared -o $(TARGET_SHARED) $(OBJS_SHARED)

## compile source files
$(BUILD_STATIC)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(BUILD_STATIC)
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

$(BUILD_SHARED)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(BUILD_SHARED)
	$(CC) $(CFLAGS) -I $(INC_DIR) -nostartfiles -fPIC -c $< -o $@

re: fclean all

clean:
	rm -rf $(BUILD_DIR)
	rm -f *~


fclean: clean
	rm -f $(NAME)

