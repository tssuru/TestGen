try:
    a,b,c=6,0,1
    def h(a):
        global c
        a=4
        b*=3
        c=2
        return a+b+c
    
    a,b,c=4,9,2
    print(h(b),a,b,c)
    
except: print('error')
