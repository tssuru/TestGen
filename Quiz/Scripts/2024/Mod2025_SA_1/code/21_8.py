try:
    a, b, c = 8, 9, 7
    def f(a, b=6, c=8):
        print(a, b, c, end=" ")
    
    f(5, 3, 4)
    print(a, b, c)
except: print('error')
