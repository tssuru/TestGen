try:
    a, b, c = 9, 6, 7
    def h(a, b=8, c=6):
        print(a, b, c, end=" ")
    
    h(4, b=2)
    print(a, b, c)
except: print('error')
