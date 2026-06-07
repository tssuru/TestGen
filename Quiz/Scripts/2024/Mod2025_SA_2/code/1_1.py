try:
    a, b, c = 8, 6, 7
    def g(a, b, c=9):
        print(a, b, c, end=" ")
    
    g(5, b=1)
    print(a, b, c)
except: print('error')
