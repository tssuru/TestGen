try:
    a,b,c=6,1,2
    def h(b):
        global c
        a*=3
        b=1
        c=5
        return a+b+c
    
    a,b,c=9,0,4
    print(h(b),a,b,c)
    
except: print('error')
