_ = int(input())

nums = list(map(int, input().split()))

total = 0

for i, n in enumerate(nums):
    if i == 0:
        continue
    if n < nums[i - 1]:
        total += (nums[i - 1] - n)
        nums[i] = nums[i - 1]
print(total)
