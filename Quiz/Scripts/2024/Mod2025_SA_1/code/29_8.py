try:
    a, b, c = 6, 7, 8
    def g(a, b, c=9):
        print(a, b, c, end=" ")
    
    g(b=5, c=1, 5)
    print(a, b, c)
except: print('error')
