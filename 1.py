tests = int(input())
p = 10 ** 9 + 7
 
 
def pow(x, q):
    if q == 0:
        return 1
    i = pow(x, q // 2)
    if q % 2 == 0:
        return (i * i) % p
    return (i * i * x) % p
 
 
def solve():
    global p
    n, m = map(int, input().split(" "))
    a = list(map(int, input().split(" ")))
    hs = {}
    for x in a:
        if x not in hs:
            hs[x] = 0
        hs[x] += 1
    ans = 0
    for x in hs:
        y = hs[x]
        l = min(m // x, y)
        ans = max(ans, l * x)
        if x + 1 not in hs:
            continue
        z = hs[x + 1]
        for i in range(1, y + 1):
            if i * x > m:
                break
            du = m - i * x
            su = min(du // (x + 1), z) * (x + 1) + i * x
            ans = max(su, ans)
    print(ans)
 
 
for _ in range(tests):
    solve()