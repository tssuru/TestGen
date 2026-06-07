try:
    a,b,c=5,7,0
    def h(b):
        global c
        a=4
        b=3
        c=4
        return a+b+c
    
    a,b,c=3,1,6
    print(h(b),a,b,c)
    
except: print('error')
