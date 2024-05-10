/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhedjam <hhedjam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:53:09 by hhedjam           #+#    #+#             */
/*   Updated: 2024/05/10 17:27:39 by hhedjam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minitalk.h"

void	print(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	sig_handler(int signum)
{
	if (signum == SIGINT)
	{
		print("Signal SIGINT received\n");
	}
	else if (signum == SIGQUIT)
	{
		print("Signal SIGQUIT received\n");
	}
}

int		ft_atoi(const char *str)
{
	int	result = 0;
	int	i = 0;

	while (str[i] != '\0')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}

	return (result);
}

void	ft_putnbr(int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

//char bin_to_char(const char bin)
//{
//	int decimal = 0;
//	int power = 1;
//	int i;

//	i = 7;
//	while (i >= 0)
//	{
//		decimal += (bin - '0') * power;
//		power *= 2;
//		i--;
//	}
//	return (char)decimal;
//}
