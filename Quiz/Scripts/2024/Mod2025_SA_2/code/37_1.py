try:
    a, b, c = 8, 7, 9
    def g(a, b=6, c=8):
        print(a, b, c, end=" ")
    
    g(0, c=4, b=1)
    print(a, b, c)
except: print('error')
