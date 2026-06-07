try:
    a, b, c = 8, 7, 9
    def h(a, b, c=6):
        print(a, b, c, end=" ")
    
    h(3, a=1)
    print(a, b, c)
except: print('error')
