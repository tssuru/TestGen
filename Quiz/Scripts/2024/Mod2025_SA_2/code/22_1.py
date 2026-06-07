try:
    a, b, c = 6, 7, 8
    def f(a, b, c):
        print(a, b, c, end=" ")
    
    f(4, 5, c=2)
    print(a, b, c)
except: print('error')
