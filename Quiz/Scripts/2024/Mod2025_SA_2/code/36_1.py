try:
    a, b, c = 8, 7, 6
    def h(a, b=9, c):
        print(a, b, c, end=" ")
    
    h(b=4, a=2, c=3)
    print(a, b, c)
except: print('error')
