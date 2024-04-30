/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flippingBits.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:33:54 by amenses-          #+#    #+#             */
/*   Updated: 2024/04/29 14:54:05 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

long flippingBits(long n) {
    return ~n & 0xFFFFFFFF; // ! -10 ni bin = 4294967286. 2's complement computer representation 32 bits
}                           // signed vs unsigned, & 0xFFFFFFFF (unsigned int) to get 32 bits

int main() {
    long n = 9, b = 0;

    b = flippingBits(n);
    // print binary code of b
    cout << b << ", " << bitset<32>(b) << endl;
    
    return 0;
}
