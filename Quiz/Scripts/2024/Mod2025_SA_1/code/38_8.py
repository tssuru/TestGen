try:
    a, b, c = 6, 7, 6
    def g(a, b, c=9):
        print(a, b, c, end=" ")
    
    g(c=5, b=3, c=2)
    print(a, b, c)
except: print('error')
