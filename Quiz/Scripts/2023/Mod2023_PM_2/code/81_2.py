try:
    a,b,c=0,5,7
    def h(a):
        a=3
        b=4
        c=2
        return a+b+c
    
    a,b,c=6,0,3
    print(h(b),a,b,c)
    
except: print('error')
