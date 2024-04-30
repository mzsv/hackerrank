/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lonelyinteger.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:25:03 by amenses-          #+#    #+#             */
/*   Updated: 2024/04/29 14:30:55 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

int lonelyinteger(vector<int> a) {
    int ans = 0;
    
    for (unsigned int i = 0; i < a.size(); ++i) {
        ans ^= a[i];
    }
    return ans;
}

int main() {
    vector<int> a = {1, 2, 3, 4, 3, 2, 1};

    cout << lonelyinteger(a) << endl;
    return 0;
}
