/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flippingMatrix.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 20:48:03 by amenses-          #+#    #+#             */
/*   Updated: 2024/04/30 20:58:45 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

int flippingMatrix(vector<vector<int>> matrix) {
    int n = matrix.size() / 2;
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            sum += max(max(matrix[i][j], matrix[i][2 * n - 1 - j]), max(matrix[2 * n - 1 - i][j], matrix[2 * n - 1 - i][2 * n - 1 - j]));
        }
    }
    return sum;
}

int main() {
    vector<vector<int>> matrix = {
        {112, 42, 83, 119},
        {56, 125, 56, 49},
        {15, 78, 101, 43},
        {62, 98, 114, 108}
    };

    cout << flippingMatrix(matrix) << endl;
    return 0;
}
