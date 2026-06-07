try:
    a, b, c = 6, 8, 9
    def f(a, b, c=6):
        print(a, b, c, end=" ")
    
    f(4, c=0, b=2)
    print(a, b, c)
except: print('error')
