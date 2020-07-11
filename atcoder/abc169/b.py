def main():
    n = int(input())
    a = list(map(int, input().split()))

    if 0 in a:
        print(0)
        return

    res = 1
    for e in a:
        res *= e
        if res > 10**18:
            print(-1)
            return

    print(res)

main()

