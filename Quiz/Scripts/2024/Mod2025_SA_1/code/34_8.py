try:
    a, b, c = 9, 7, 8
    def f(a, b, c=9):
        print(a, b, c, end=" ")
    
    f(b=5, c=3, 2)
    print(a, b, c)
except: print('error')
