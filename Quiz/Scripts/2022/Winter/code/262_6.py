try:
    a,b,c=6,7,5
    def h(a):
        global c
        a-=3
        b=1
        c=4
        return a+b+c
    
    a,b,c=8,3,1
    print(h(b),a,b,c)
    
except: print('error')
