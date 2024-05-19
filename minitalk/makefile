# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hhedjam <hhedjam@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/06 14:59:02 by hhedjam           #+#    #+#              #
#    Updated: 2024/05/10 17:54:54 by hhedjam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CLIENT_NAME = client
SERVER_NAME = server

# Colors
DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m


# Compiler flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -g3

## Source directory
#SRC_DIR = ./

# Source files
SRC_FILES = ./client.c \
            ./server.c  \
            ./utils.c	 \
			./utils2.c
		 
## Object directory
#OBJ_DIR = ./obj/

## Include directory
#INC_DIR = ./


#SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
#OBJ = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

# Object files for each executable
CLIENT_OBJ = $(OBJ_DIR)client.o $(OBJ_DIR)utils.o $(OBJ_DIR)utils2.o
SERVER_OBJ = $(OBJ_DIR)server.o $(OBJ_DIR)utils.o $(OBJ_DIR)utils2.o

CTL_DIR = ${SRC_FILES:.c=.o}

# Rule to make all
all: $(CLIENT_NAME) $(SERVER_NAME)

# Rule to make the client executable
$(CLIENT_NAME): $(CLIENT_OBJ)
	$(CC) $(CFLAGS) -o $@ $^
	@echo "$(MAGENTA)minitalk CLIENT files MADE!$(DEF_COLOR)"

# Rule to make the server executable
$(SERVER_NAME): $(SERVER_OBJ)
	$(CC) $(CFLAGS) -o $@ $^
	@echo "$(YELLOW)minitalk SERVER files MADE!$(DEF_COLOR)"
# Rules to clean
clean:
	@$(RM) -rf $(CTL_DIR)
	@echo "$(BLUE)Les bails ont ete clean !$(DEF_COLOR)"

fclean: clean
	@$(RM) -f $(CLIENT_NAME)
	rm -f $(SERVER_NAME)
	@echo "$(CYAN)minitalk executable files cleaned!$(DEF_COLOR)"

re: fclean all
	@echo "$(GREEN)Cleaned and rebuilt everything for the ultimate project!$(DEF_COLOR)"

# Rule to check the norm
norm:
	norminette $(SRC_FILES) $(INC_DIR)*.h

# Phony targets
.PHONY: all clean fclean re norm