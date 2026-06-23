/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_is.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeza-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 11:00:07 by sbaeza-g          #+#    #+#             */
/*   Updated: 2026/06/23 11:00:10 by sbaeza-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h> // Para usar isalpha, isdigit, etc. originales

#define OK "\033[0;32m[OK]\033[0m"
#define KO "\033[0;31m[KO]\033[0m"

int main(void)
{
int c;
int fallos;

printf("\n========================================\n");
printf(" TEST: FUNCIONES IS_ \n");
printf("========================================\n");

// 1. ft_isalpha
c = -1; fallos = 0;
while (c < 256)
{
if ((ft_isalpha(c) != 0) != (isalpha(c) != 0)) fallos++;
c++;
}
printf("ft_isalpha : %s (Fallos: %d/257)\n", fallos == 0 ? OK : KO, fallos);

// 2. ft_isdigit
c = -1; fallos = 0;
while (c < 256)
{
if ((ft_isdigit(c) != 0) != (isdigit(c) != 0)) fallos++;
c++;
}
printf("ft_isdigit : %s (Fallos: %d/257)\n", fallos == 0 ? OK : KO, fallos);

// 3. ft_isalnum
c = -1; fallos = 0;
while (c < 256)
{
if ((ft_isalnum(c) != 0) != (isalnum(c) != 0)) fallos++;
c++;
}
printf("ft_isalnum : %s (Fallos: %d/257)\n", fallos == 0 ? OK : KO, fallos);

// 4. ft_isascii
c = -1; fallos = 0;
while (c < 256)
{
if ((ft_isascii(c) != 0) != (isascii(c) != 0)) fallos++;
c++;
}
printf("ft_isascii : %s (Fallos: %d/257)\n", fallos == 0 ? OK : KO, fallos);

// 5. ft_isprint
c = -1; fallos = 0;
while (c < 256)
{
if ((ft_isprint(c) != 0) != (isprint(c) != 0)) fallos++;
c++;
}
printf("ft_isprint : %s (Fallos: %d/257)\n", fallos == 0 ? OK : KO, fallos);

printf("========================================\n\n");
return (0);
}
