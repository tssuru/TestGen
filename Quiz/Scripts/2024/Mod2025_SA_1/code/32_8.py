try:
    a, b, c = 6, 9, 8
    def f(a, b=7, c):
        print(a, b, c, end=" ")
    
    f(b=5, a=0, c=1)
    print(a, b, c)
except: print('error')
