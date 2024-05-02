/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhedjam <hhedjam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:44:04 by hhedjam           #+#    #+#             */
/*   Updated: 2024/05/02 20:11:23 by hhedjam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
#define MINITALK_H

#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
// Function declarations
void	send_message(int pid, char *message);
void	receive_message(void (*handler)(char));
void	ft_putnbr(int n);
int		ft_atoi(const char *str);
void	print(char *str);
void	sig_handler(int signum);

#endif