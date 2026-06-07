try:
    a, b, c = 9, 7, 8
    def h(a, b, c=6):
        print(a, b, c, end=" ")
    
    h(2, a=4)
    print(a, b, c)
except: print('error')
