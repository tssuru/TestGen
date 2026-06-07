try:
    a,b,c=8,3,7
    def h(b):
        global c
        a=3
        b-=3
        c=4
        return a+b+c
    
    a,b,c=4,0,2
    print(h(b),a,b,c)
    
except: print('error')
