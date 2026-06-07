try:
    a,b,c=2,0,4
    def h(a):
        global c
        a-=4
        b=2
        c=3
        return a+b+c
    
    a,b,c=1,7,9
    print(h(b),a,b,c)
    
except: print('error')
