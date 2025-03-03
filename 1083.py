n = int(input())

full_sum = sum(range(1, n + 1))
missing_sum = sum(list(map(int, input().split())))

print(full_sum - missing_sum)
