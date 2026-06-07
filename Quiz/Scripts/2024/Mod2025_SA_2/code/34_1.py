try:
    a, b, c = 8, 9, 6
    def f(a, b=8, c=7):
        print(a, b, c, end=" ")
    
    f(1, 2)
    print(a, b, c)
except: print('error')
