/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhedjam <hhedjam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:15:01 by hhedjam           #+#    #+#             */
/*   Updated: 2024/05/02 20:27:42 by hhedjam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <minitalk.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

void	receive_signal(int sig)
{
		char	bin;

		bin = 0;
		if (sig == SIGUSR1)
			bin = (bin << 1) | 1;
		else if (sig == SIGUSR2)
			bin = (bin << 1) | 0;			
		write(1, &bin, 1);
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
		pause();
	}
	return (0);
}
