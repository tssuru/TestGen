try:
    a, b, c = 8, 6, 9
    def h(a, b, c=8):
        print(a, b, c, end=" ")
    
    h(4, 3, 5)
    print(a, b, c)
except: print('error')
