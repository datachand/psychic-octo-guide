Project Euler #134: Prime pair connection

Consider the consecutive primes p1=19p1=19 and p2=23p2=23. It can be verified that 12191219 is the smallest number such that the last digits are formed by p1p1 whilst also being divisible by p2p2.

In fact, with the exception of p1=3p1=3 and p2=5p2=5, for every pair of consecutive primes, p2>p1p2>p1, there exist values of nn for which the last digits are formed by p1p1 and nn is divisible by p2p2. Let SS be the smallest of these values of nn.

Given LL and RR, find ∑S∑S for every pair of consecutive primes with L≤p1≤RL≤p1≤R.

Input Format

The first line of input contains TT, the number of test cases.

Each test case consists of one line containing two integers, LL and RR.

Constraints

1≤T≤101≤T≤10 
5≤L≤R≤1095≤L≤R≤109 
|R−L|≤106|R−L|≤106

But in test cases worth 50% of the total points, R≤106R≤106.

Output Format

For each test case, output a single line containing a single integer, the answer for that test case.

Sample Input

1
5 20
Sample Output

4272
Explanation

The following are the relevant values in the range 5≤p1≤205≤p1≤20:

p1=5,p2=7,S=35p1=5,p2=7,S=35
p1=7,p2=11,S=77p1=7,p2=11,S=77
p1=11,p2=13,S=611p1=11,p2=13,S=611
p1=13,p2=17,S=1513p1=13,p2=17,S=1513
p1=17,p2=19,S=817p1=17,p2=19,S=817
p1=19,p2=23,S=1219p1=19,p2=23,S=1219
Thus, ∑S=35+77+611+1513+817+1219=4272