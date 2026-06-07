try:
    a, b, c = 7, 9, 8
    def f(a, b=6, c):
        print(a, b, c, end=" ")
    
    f(0, 2, 4)
    print(a, b, c)
except: print('error')
