It can be derived using a few arithmetic transformations:
F(n) = F(n-1) + F(n-2) = F(n-2) + F(n-3) + F(n-2)
F(n) = 2F(n-2) + F(n-3)
--This proves the point that every third term is even (if F(n-3) is even, then F(n) must be even too)
F(n) = 2[F(n-3) + F(n-4)] + F(n-3)
= 3F(n-3) + 2F(n-4)
= 3F(n-3) + 2F(n-5) + 2F(n-6)
From eq.1: 
F(n-3) = 2F(n-5) + F(n-6)
2F(n-5) = F(n-3) - F(n-6)
F(n) = 3F(n-3) + [F(n-3) - F(n-6)] + 2F(n-6)
= 4F(n-3) + F(n-6)
If the sequence of even numbers consists of every third number (n, n-3, n-6, ...)
E(k) = 4E(k-1) + E(k-2)