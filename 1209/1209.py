def answer(n):
    ni = ((8*n-7)**0.5 - 1) / 2
    return 1 if (ni == int(ni)) else 0
 
n = int(input())
for i in range(n):
    print(answer(int(input())))
