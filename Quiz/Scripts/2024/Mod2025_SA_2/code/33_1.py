try:
    a, b, c = 7, 6, 9
    def g(a, b, c):
        print(a, b, c, end=" ")
    
    g(3, c=1)
    print(a, b, c)
except: print('error')
