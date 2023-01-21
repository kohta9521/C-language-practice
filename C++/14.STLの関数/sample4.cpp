/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample4.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:10:39 by kkohta            #+#    #+#             */
/*   Updated: 2023/01/21 14:13:42 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
using namespace std;

int	main() {
	vector<int> vec = {1, 5, 3};
	reverse(vec.begin(), vec.end());

	for (int i = 0; i < vec.size(); i ++) {
		cout << vec.at(i) << endl;
	}
}
