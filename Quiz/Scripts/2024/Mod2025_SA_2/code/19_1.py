try:
    a, b, c = 6, 7, 6
    def f(a, b=9, c=8):
        print(a, b, c, end=" ")
    
    f(b=2, c=4, 0)
    print(a, b, c)
except: print('error')
