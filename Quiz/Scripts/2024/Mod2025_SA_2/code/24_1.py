try:
    a, b, c = 7, 9, 6
    def g(a, b=8, c):
        print(a, b, c, end=" ")
    
    g(a=5, 1, b=0)
    print(a, b, c)
except: print('error')
