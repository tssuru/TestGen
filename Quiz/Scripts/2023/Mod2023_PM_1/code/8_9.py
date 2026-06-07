try:
    a,b,c=8,0,2
    def h(a):
        a=2
        b=3
        c=4
        return a+b+c
    
    a,b,c=9,7,1
    print(h(b),a,b,c)
    
except: print('error')
