try:
    a, b, c = 7, 8, 6
    def h(a, b, c=9):
        print(a, b, c, end=" ")
    
    h(3, a=4)
    print(a, b, c)
except: print('error')
