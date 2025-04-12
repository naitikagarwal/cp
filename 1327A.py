def solve():
    import sys
    input = sys.stdin.readline
    t = int(input().strip())
    for _ in range(t):
        n, k = map(int, input().split())

        if n >= k*k and (n % 2 == k % 2):
            print("YES")
        else:
            print("NO")

if __name__ == '__main__':
    solve()