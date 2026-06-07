try:
    a, b, c = 8, 7, 9
    def g(a, b, c=6):
        print(a, b, c, end=" ")
    
    g(b=3, c=0, 5)
    print(a, b, c)
except: print('error')
