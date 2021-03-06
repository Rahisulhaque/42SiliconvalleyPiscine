/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 19:03:34 by salassam          #+#    #+#             */
/*   Updated: 2016/01/07 19:10:22 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	t;
	int		n;
	int		i;

	n = 0;
	i = 0;
	while (str[n])
		n++;
	n--;
	while (i < n)
	{
		t = str[n];
		str[n] = str[i];
		str[i] = t;
		i++;
		n--;
	}
	return (str);
}
