try:
    a, b, c = 6, 7, 9
    def g(a, b, c):
        print(a, b, c, end=" ")
    
    g(a=2, 0, c=4)
    print(a, b, c)
except: print('error')
