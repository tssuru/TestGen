try:
    a, b, c = 9, 8, 7
    def g(a, b=6, c):
        print(a, b, c, end=" ")
    
    g(a=2, 3, b=0)
    print(a, b, c)
except: print('error')
