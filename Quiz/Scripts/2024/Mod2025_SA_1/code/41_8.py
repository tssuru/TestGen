try:
    a, b, c = 6, 8, 7
    def g(a, b=9, c=7):
        print(a, b, c, end=" ")
    
    g(5, 3, a=1)
    print(a, b, c)
except: print('error')
