try:
    a, b, c = 7, 8, 9
    def g(a, b, c):
        print(a, b, c, end=" ")
    
    g(5, c=2, b=3)
    print(a, b, c)
except: print('error')
