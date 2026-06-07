try:
    a, b, c = 8, 6, 9
    def f(a, b, c):
        print(a, b, c, end=" ")
    
    f(1, 0, a=5)
    print(a, b, c)
except: print('error')
