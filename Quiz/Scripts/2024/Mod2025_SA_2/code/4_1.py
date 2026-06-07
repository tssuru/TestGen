try:
    a, b, c = 9, 8, 7
    def g(a, b=9, c=6):
        print(a, b, c, end=" ")
    
    g(1, 2, a=3)
    print(a, b, c)
except: print('error')
