try:
    a, b, c = 9, 7, 6
    def h(a, b, c=8):
        print(a, b, c, end=" ")
    
    h(b=3, c=2, 1)
    print(a, b, c)
except: print('error')
