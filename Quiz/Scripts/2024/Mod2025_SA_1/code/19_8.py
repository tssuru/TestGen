try:
    a, b, c = 7, 9, 6
    def h(a, b=8, c=7):
        print(a, b, c, end=" ")
    
    h(1, 5, c=3)
    print(a, b, c)
except: print('error')
