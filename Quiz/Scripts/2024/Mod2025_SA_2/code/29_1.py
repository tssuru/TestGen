try:
    a, b, c = 7, 8, 9
    def g(a, b, c):
        print(a, b, c, end=" ")
    
    g(b=5, a=2, c=5)
    print(a, b, c)
except: print('error')
