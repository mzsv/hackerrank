/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   diagonalDifference.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:55:20 by amenses-          #+#    #+#             */
/*   Updated: 2024/04/29 15:06:28 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int n = arr.size();
    int d0 = arr[0][0] + arr[n - 1][n - 1];
    int d1 = arr[0][n - 1] + arr[n - 1][0];

    for (unsigned int i = 1; i < n - 1; ++i) {
        d0 += arr[i][i];
        d1 += arr[i][n - i - 1];
    }
    return abs(d0 - d1);
}

int main() {
    vector<vector<int>> arr = {
        {11, 2, 4},
        {4, 5, 6},
        {10, 8, -12}
    };

    cout << diagonalDifference(arr) << endl;
    return 0;
}
