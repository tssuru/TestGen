try:
    a, b, c = 7, 9, 8
    def f(a, b=6, c):
        print(a, b, c, end=" ")
    
    f(a=2, c=5, b=2)
    print(a, b, c)
except: print('error')
