try:
    a,b,c=8,2,7
    def h(b):
        global c
        a-=2
        b=5
        c=3
        return a+b+c
    
    a,b,c=9,0,5
    print(h(b),a,b,c)
    
except: print('error')
