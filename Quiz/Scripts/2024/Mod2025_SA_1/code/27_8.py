try:
    a, b, c = 7, 9, 7
    def f(a, b=8, c=6):
        print(a, b, c, end=" ")
    
    f(3, 0)
    print(a, b, c)
except: print('error')
