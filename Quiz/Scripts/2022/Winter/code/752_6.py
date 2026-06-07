try:
    a,b,c=8,3,9
    def h(b):
        global c
        a=2
        b-=3
        c=2
        return a+b+c
    
    a,b,c=3,0,2
    print(h(b),a,b,c)
    
except: print('error')
