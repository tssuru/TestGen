try:
    a, b, c = 7, 8, 9
    def f(a, b, c=6):
        print(a, b, c, end=" ")
    
    f(0, 5, a=3)
    print(a, b, c)
except: print('error')
