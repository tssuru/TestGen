try:
    a, b, c = 9, 7, 6
    def h(a, b=8, c=9):
        print(a, b, c, end=" ")
    
    h(0, c=1, b=3)
    print(a, b, c)
except: print('error')
