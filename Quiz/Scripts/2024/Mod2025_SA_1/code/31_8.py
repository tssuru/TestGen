try:
    a, b, c = 8, 8, 9
    def g(a, b=6, c=7):
        print(a, b, c, end=" ")
    
    g(1, c=3, b=3)
    print(a, b, c)
except: print('error')
