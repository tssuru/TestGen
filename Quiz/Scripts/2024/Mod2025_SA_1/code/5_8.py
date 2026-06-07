try:
    a, b, c = 8, 9, 6
    def f(a, b=7, c):
        print(a, b, c, end=" ")
    
    f(3, 0, 3)
    print(a, b, c)
except: print('error')
