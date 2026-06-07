try:
    a,b,c=2,1,6
    def h(b):
        global c
        a=3
        b=1
        c=4
        return a+b+c
    
    a,b,c=9,7,3
    print(h(b),a,b,c)
    
except: print('error')
