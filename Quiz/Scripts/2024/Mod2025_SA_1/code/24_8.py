try:
    a, b, c = 9, 7, 6
    def g(a, b, c=8):
        print(a, b, c, end=" ")
    
    g(b=1, c=0, 4)
    print(a, b, c)
except: print('error')
