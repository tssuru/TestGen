try:
    a, b, c = 7, 9, 6
    def g(a, b=8, c):
        print(a, b, c, end=" ")
    
    g(a=1, c=2, a=3)
    print(a, b, c)
except: print('error')
