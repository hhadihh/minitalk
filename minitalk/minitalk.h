/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhedjam <hhedjam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:44:04 by hhedjam           #+#    #+#             */
/*   Updated: 2024/05/02 17:45:40 by hhedjam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
#define MINITALK_H

// Function declarations
void	send_message(int pid, char *message);
void	receive_message(void (*handler)(char));

#endif