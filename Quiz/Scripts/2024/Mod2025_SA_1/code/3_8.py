try:
    a, b, c = 9, 8, 6
    def g(a, b=7, c):
        print(a, b, c, end=" ")
    
    g(a=5, 1, c=5)
    print(a, b, c)
except: print('error')
