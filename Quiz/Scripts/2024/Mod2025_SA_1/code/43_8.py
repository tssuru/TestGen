try:
    a, b, c = 7, 8, 9
    def g(a, b, c=9):
        print(a, b, c, end=" ")
    
    g(c=3, b=4, c=0)
    print(a, b, c)
except: print('error')
