try:
    a,b,c=8,1,7
    def h(a):
        a=3
        b=4
        c=2
        return a+b+c
    
    a,b,c=3,4,2
    print(h(b),a,b,c)
    
except: print('error')
