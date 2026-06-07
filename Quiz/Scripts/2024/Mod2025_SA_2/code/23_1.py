try:
    a, b, c = 9, 6, 9
    def h(a, b=7, c=8):
        print(a, b, c, end=" ")
    
    h(3, 4)
    print(a, b, c)
except: print('error')
