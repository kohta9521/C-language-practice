/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RoundUpTheMean.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 09:13:21 by kkohta            #+#    #+#             */
/*   Updated: 2023/01/18 09:22:00 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int	main() {
	int a, b;
	cin >> a >> b;
	int ans;
	ans = ((double)a + (double)b) / 2 + 0.999999;
	cout << ans << endl;
}
