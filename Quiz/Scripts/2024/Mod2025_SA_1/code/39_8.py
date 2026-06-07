try:
    a, b, c = 8, 8, 7
    def f(a, b=6, c=9):
        print(a, b, c, end=" ")
    
    f(a=1, 4, a=5)
    print(a, b, c)
except: print('error')
