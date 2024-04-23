/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhedjam <hhedjam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:53:09 by hhedjam           #+#    #+#             */
/*   Updated: 2024/04/18 18:59:58 by hhedjam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <signal.h>

void	print(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
		sleep(2);
	}
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

int	main()
{
	sig_handler(SIGINT);
	return (0);
}


