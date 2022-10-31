# cook your dish here
n = int(input())
l1 = []
for _ in range(n):
    a = input()
    l1.append(a)
l1 = set(l1)
print(len(l1))