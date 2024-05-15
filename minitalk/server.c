/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhedjam <hhedjam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:15:01 by hhedjam           #+#    #+#             */
/*   Updated: 2024/05/15 14:21:54 by hhedjam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minitalk.h"

void	receive_signal(int sig)
{
	static char	bin = 0;
	static int	bit_count = 0;
	static char	*buffer = NULL;

	if (!buffer)
	{
		buffer = (char *)malloc(1);
		buffer[0] = '\0';
	}
	if (sig == SIGUSR1)
		bin = (bin << 1) | 1;
	else if (sig == SIGUSR2)
		bin = bin << 1;
	bit_count++;
	if (bit_count == 8)
	{
		buffer = charge_buffer(buffer, bin);
		if (bin == 0)
		{
			print(buffer);
			free(buffer);
			buffer = NULL;
		}
		bin = 0;
		bit_count = 0;
		if (buffer == NULL)
			return ;
	}
}

int	main(void)
{
	char	*str;

	ft_putnbr(getpid());
	write(1, "\n", 1);
	str = "Welcome To HADI's Server";
	print(str);
	while (1)
	{
		signal(SIGUSR2, receive_signal);
		signal(SIGUSR1, receive_signal);
		pause();
	}
	return (0);
}
