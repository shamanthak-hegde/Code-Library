from math import gcd
MOD = 1000000007

def multm(A, B):
    a00, a10, a01, a11 = A
    b00, b10, b01, b11 = B
    return [(a00 * b00 + a10 * b01) % MOD, (a00 * b10 + a10 * b11) % MOD,
            (a01 * b00 + a11 * b01) % MOD, (a01 * b10 + a11 * b11) % MOD]


def multv(A, V):
    a00, a10, a01, a11 = A
    b0, b1 = V
    return [(a00 * b0 + a10 * b1) % MOD,
            (a01 * b0 + a11 * b1) % MOD]


def power(M, k):
    P = [1, 0,
         0, 1]

    if k == 0:
        return P
    if k == 1:
        return M

    while k != 0:
        if k % 2 == 1:
            P = multm(P, M)
        M = multm(M, M)
        k //= 2
    return P

g = 0
n = int(input())
for i in range(n):
    g = gcd(g, int(input()))

A = [1, 1, 1, 0]
An = power(A, g)
F0 = [1, 0]
Fn = multv(An, F0)
print(Fn[1])
