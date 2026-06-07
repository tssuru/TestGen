try:
    a, b, c = 9, 7, 8
    def f(a, b=6, c=6):
        print(a, b, c, end=" ")
    
    f(5, 3)
    print(a, b, c)
except: print('error')
