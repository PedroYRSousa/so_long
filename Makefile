CC=gcc

CFLAGS= -Imlx -O3 -g -Wall -Wextra -Werror

NAME=so_long

SRC = $(shell find -name '*.c' | grep -v "./mlx" | grep -v "./bonus")
OBJ = $(SRC:%.c=%.o)

SRC_BONUS = $(shell find -name '*.c' | grep "./bonus")
OBJ_BONUS = $(SRC_BONUS:%.c=%.o)

LFLAGS = -Lmlx -lmlx -lXext -lX11 -lm -g -Wall -Wextra -Werror

UNAME := $(shell uname)
ifeq ($(UNAME), Darwin)
	# mac
	LFLAGS += -framework OpenGL -framework AppKit
else
	#Linux and others...
	LFLAGS += -lbsd
endif

all: $(NAME)

$(NAME): ${OBJ}
	$(CC) -o $(NAME) ${OBJ} $(LFLAGS)

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: ${OBJ_BONUS}
	$(CC) -o $(NAME) ${OBJ_BONUS} $(LFLAGS)

run_map_1: fclean $(NAME)
	./so_long ./maps/map1.ber

run_map_2: fclean $(NAME)
	./so_long ./maps/map2.ber

run_map_3: fclean $(NAME)
	./so_long ./maps/map3.ber

run_map_4: fclean $(NAME)
	./so_long ./maps/map4.ber

run_map_5: fclean $(NAME)
	./so_long ./maps/map5.ber

debug_map_1: fclean $(NAME)
	valgrind ./so_long ./maps/map1.ber

debug_map_5: fclean $(NAME)
	valgrind ./so_long ./maps/map5.ber

bonus_map_1: fclean bonus
	./so_long ./bonus/maps/map1.ber

bonus_map_2: fclean bonus
	./so_long ./bonus/maps/map2.ber

debug_bonus_map_1: fclean bonus
	valgrind ./so_long ./bonus/maps/map1.ber

debug_bonus_map_2: fclean bonus
	valgrind ./so_long ./bonus/maps/map2.ber

norm:
	norminette main.c main.h
	norminette ./utils
	norminette ./src
	norminette ./bonus