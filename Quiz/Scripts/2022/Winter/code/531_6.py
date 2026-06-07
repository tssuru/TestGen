try:
    a,b,c=2,1,3
    def h(a):
        global c
        a-=5
        b=3
        c=2
        return a+b+c
    
    a,b,c=4,0,9
    print(h(b),a,b,c)
    
except: print('error')
