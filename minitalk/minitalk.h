/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhedjam <hhedjam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:44:04 by hhedjam           #+#    #+#             */
/*   Updated: 2024/05/15 14:25:11 by hhedjam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

// Function declarations
void	send_char(int pid, char c);
void	receive_signal(int sig);
void	ft_putnbr(int n);
int		ft_atoi(const char *str);
void	print(char *str);
void	sig_handler(int signum);
//char	bin_to_char(const char *bin);
char	*charge_buffer(char *buffer, char c);
void	ft_putnbr(int n);
int		ft_strlen(const char *str);
char	*ft_realloc(char *str, char c);
char	*ft_strjoin(char const *s1, char const *s2);

#endif