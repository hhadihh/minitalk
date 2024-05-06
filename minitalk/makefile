# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hhedjam <hhedjam@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/06 14:59:02 by hhedjam           #+#    #+#              #
#    Updated: 2024/05/06 15:10:42 by hhedjam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk
INCLUDE = includes
MINITALK = minitalk
SRC_DIR		= ./
OBJ_DIR		= obj/
CC			= @cc
CFLAGS		= -Wall -Werror -Wextra
RM			= rm -f
AR			= ar rcs

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

#Sources

SRC_FILES	=		send_char		\
					receive_signal	\
					ft_putnbr		\
					ft_atoi			\
					print			\
					sig_handler		\
				
		

SRC		 =	 $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ		 =	 $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

###

OBJF		=	.cache_exists

all:		$(NAME)

$(NAME):	$(OBJ)
			@make -C $(MINITALK)
			@cp minitalk/minitalk.a .
			@mv minitalk.a $(NAME)
			@$(AR) $(NAME) $(OBJ)
			@echo "$(GREEN)	minitalk compiled $(DEF_COLOR)"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJF)
			@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
			@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJF):
			@mkdir -p $(OBJ_DIR)

clean:
			@$(RM) -rf $(OBJ_DIR)
			@make clean -C $(MINITALK)
			@echo "$(BLUE)Les bails ont ete clean !$(DEF_COLOR)"

fclean:		clean
			@$(RM) -f $(NAME)
			@$(RM) -f $(MINITALK)/minitalk.a
			@echo "$(CYAN)minitalk executable files cleaned!$(DEF_COLOR)"
			@echo "$(CYAN)minitalk executable files cleaned!$(DEF_COLOR)"

re:			fclean all
			@echo "$(GREEN)Cleaned and rebuilt everything for the ultimate project!$(DEF_COLOR)"

norm:
			@norminette $(SRC) $(INCLUDE) $(MINITALK) | grep -v Norme -B1 || true

.PHONY:		all clean fclean re norm