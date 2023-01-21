/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:29:57 by kkohta            #+#    #+#             */
/*   Updated: 2023/01/21 16:58:18 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;


int	main()
{
	int A, B, C;
	cin >> A >> B >> C;


	// まず初めに最大の値を求める max
	int result1 = max(A, B, C);

	// 次に最小の値を求める min
	int result2 = min(A, B, C);
	// それらの値の差を変数に代入
	int result3 = reslt1 - result2;
	// 出力
	cout << result3 << endl;
}
