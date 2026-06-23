#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define OK "\033[0;32m[OK]\033[0m"
#define KO "\033[0;31m[KO]\033[0m"
#define RESET "\033[0m"

void test_to(void)
{
int i = -1;
int fails = 0;
printf("\n--- TEST: TOUPPER / TOLOWER ---\n");
while (++i < 256)
{
if (ft_toupper(i) != toupper(i)) fails++;
if (ft_tolower(i) != tolower(i)) fails++;
}
printf("ft_toupper / ft_tolower : %s (Fallos: %d/512)\n", fails == 0 ? OK : KO, fails);
}

void test_str(void)
{
printf("\n--- TEST: STR BASICS ---\n");
char *s = "Hola Mundo";

printf("ft_strlen : %s\n", ft_strlen(s) == 10 ? OK : KO);
printf("ft_strchr : %s\n", ft_strchr(s, 'M') == (s + 5) ? OK : KO);
printf("ft_strchr(0): %s\n", ft_strchr(s, '\0') == (s + 10) ? OK : KO);
printf("ft_strrchr : %s\n", ft_strrchr(s, 'o') == (s + 9) ? OK : KO);

printf("ft_strncmp : %s\n", ft_strncmp("Hola", "Hola", 4) == 0 ? OK : KO);
printf("ft_strncmp : %s\n", ft_strncmp("Hola", "Holo", 4) < 0 ? OK : KO);

printf("ft_strnstr 1: %s\n", ft_strnstr(s, "Mundo", 10) == (s + 5) ? OK : KO);
printf("ft_strnstr 2: %s\n", ft_strnstr(s, "Mundo", 4) == NULL ? OK : KO);
printf("ft_strnstr 3: %s\n", ft_strnstr(s, "", 10) == s ? OK : KO);
}

void test_mem(void)
{
printf("\n--- TEST: MEMORY ---\n");
char b1[10] = "123456789";
char b2[10] = "123456789";

ft_memset(b1, 'A', 5);
memset(b2, 'A', 5);
printf("ft_memset : %s\n", memcmp(b1, b2, 10) == 0 ? OK : KO);

ft_bzero(b1, 3);
bzero(b2, 3);
printf("ft_bzero : %s\n", memcmp(b1, b2, 10) == 0 ? OK : KO);

char dest1[10] = "000000000";
char dest2[10] = "000000000";
ft_memcpy(dest1, "Copia", 5);
memcpy(dest2, "Copia", 5);
printf("ft_memcpy : %s\n", memcmp(dest1, dest2, 10) == 0 ? OK : KO);

// Test solapamiento
char over1[15] = "abcdefgh";
char over2[15] = "abcdefgh";
ft_memmove(over1 + 2, over1, 4);
memmove(over2 + 2, over2, 4);
printf("ft_memmove : %s\n", memcmp(over1, over2, 15) == 0 ? OK : KO);

printf("ft_memchr : %s\n", ft_memchr("Hola", 'l', 4) == strchr("Hola", 'l') ? OK : KO);
printf("ft_memcmp : %s\n", ft_memcmp("Hola", "Holo", 4) < 0 ? OK : KO);
}

void test_strl(void)
{
printf("\n--- TEST: STRLCPY / STRLCAT ---\n");
char d_cpy[10] = "XXXXXX";
size_t r_cpy = ft_strlcpy(d_cpy, "Hola", 10);
printf("ft_strlcpy : %s\n", (r_cpy == 4 && strcmp(d_cpy, "Hola") == 0) ? OK : KO);

char d_cat[15] = "Hola ";
size_t r_cat = ft_strlcat(d_cat, "Mundo", 15);
printf("ft_strlcat : %s\n", (r_cat == 10 && strcmp(d_cat, "Hola Mundo") == 0) ? OK : KO);
}

void test_atoi(void)
{
printf("\n--- TEST: ATOI ---\n");
printf("ft_atoi 1 : %s\n", ft_atoi("42") == 42 ? OK : KO);
printf("ft_atoi 2 : %s\n", ft_atoi(" -42") == -42 ? OK : KO);
printf("ft_atoi 3 : %s\n", ft_atoi(" +-42") == 0 ? OK : KO);
printf("ft_atoi 4 : %s\n", ft_atoi(" +123a") == 123 ? OK : KO);
}

void test_mallocs(void)
{
printf("\n--- TEST: ALLOCATIONS (calloc, strdup, substr) ---\n");

// Calloc
int *c = ft_calloc(3, sizeof(int));
if (c)
{
printf("ft_calloc : %s\n", (c[0] == 0 && c[2] == 0) ? OK : KO);
free(c);
}

// Strdup
char *dup = ft_strdup("Clon");
if (dup)
{
printf("ft_strdup : %s\n", strcmp(dup, "Clon") == 0 ? OK : KO);
free(dup);
}

// Substr
char *sub = ft_substr("HolaMundo", 4, 5);
if (sub)
{
printf("ft_substr 1 : %s\n", strcmp(sub, "Mundo") == 0 ? OK : KO);
free(sub);
}

char *sub2 = ft_substr("Hola", 10, 5); // Trampa del aire
if (sub2)
{
printf("ft_substr 2 : %s\n", strcmp(sub2, "") == 0 ? OK : KO);
free(sub2);
}
}

int main(void)
{
printf("\n========================================\n");
printf(" TEST: BLOQUE PRINCIPAL \n");
printf("========================================\n");

test_to();
test_str();
test_mem();
test_strl();
test_atoi();
test_mallocs();

printf("\n========================================\n");
return (0);
}
