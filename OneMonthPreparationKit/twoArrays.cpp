/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twoArrays.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:16:47 by amenses-          #+#    #+#             */
/*   Updated: 2024/04/30 14:30:22 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string twoArrays(int k, vector<int> A, vector<int> B) {
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<int>()); // ! algorithm library

    for (unsigned int i = 0; i < A.size(); ++i) {
        if (A[i] + B[i] < k) {
            return "NO";
        }
    }
    return "YES";
}

int main() {
    vector<int> A = {1, 2, 2, 1};
    vector<int> B = {3, 3, 3, 4};
    int k = 10;

    cout << twoArrays(k, A, B) << endl;
    return 0;
}
