/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhedjam <hhedjam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:15:01 by hhedjam           #+#    #+#             */
/*   Updated: 2024/05/06 16:37:25 by hhedjam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minitalk.h"

void	receive_signal(int sig)
{
	static char	bin = 0;
	static int	bit_count = 0;

	if (sig == SIGUSR1)
		bin = (bin << 1) | 1;
	else if (sig == SIGUSR2)
		bin = (bin << 1) | 0;
	bit_count++;
	if (bit_count == 8)
	{
		char c = (char)bin;
		write(1, &c, 1);
		bin = 0;
		bit_count = 0;
	}
	
}

int	main(void)
{
	ft_putnbr(getpid());	
	write(1, "\n", 1);
	char *str;
	str = "Welcome To HADI's Server";
	print(str);
	while (1)
	{
		signal(SIGUSR2, receive_signal);
		signal(SIGUSR1, receive_signal);
		sleep(1);
	}
	return (0);
}
