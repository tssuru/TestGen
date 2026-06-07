try:
    a, b, c = 8, 7, 9
    def g(a, b=9, c):
        print(a, b, c, end=" ")
    
    g(3, 0, 4)
    print(a, b, c)
except: print('error')
