/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample2.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:50:49 by kkohta            #+#    #+#             */
/*   Updated: 2023/01/23 18:51:48 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int input() {
	int x;
	cin  >> x;
	return x;
}

int	main() {
	int num = input();
	cout << num + 5 << endl;
}
