try:
    a, b, c = 6, 9, 8
    def g(a, b, c):
        print(a, b, c, end=" ")
    
    g(a=0, 1, b=4)
    print(a, b, c)
except: print('error')
