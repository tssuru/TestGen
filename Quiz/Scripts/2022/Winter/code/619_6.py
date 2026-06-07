try:
    a,b,c=6,0,0
    def h(a):
        global c
        a=4
        b-=2
        c=4
        return a+b+c
    
    a,b,c=9,4,2
    print(h(b),a,b,c)
    
except: print('error')
