try:
    a, b, c = 6, 8, 9
    def f(a, b, c):
        print(a, b, c, end=" ")
    
    f(3, c=1, b=0)
    print(a, b, c)
except: print('error')
