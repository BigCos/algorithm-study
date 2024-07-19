def  legendre_symbol(a, p):
    return pow(a, (p - 1) // 2, p)

n = int(input())

a_list = []
p_list = []

for i in range(n):
    a, p = map(int, input().split())
    a_list.append(a)
    p_list.append(p)

for i, (a, p) in enumerate(zip(a_list, p_list)):
    result = legendre_symbol(a, p)
    print(f"Scenario #{i+1}:")
    print(1 if result == 1 else -1)
    print()
