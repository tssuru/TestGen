try:
    a, b, c = 6, 7, 9
    def g(a, b=8, c):
        print(a, b, c, end=" ")
    
    g(2, 4, a=4)
    print(a, b, c)
except: print('error')
