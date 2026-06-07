try:
    a,b,c=0,3,2
    def h(a):
        a-=2
        b=2
        c=4
        return a+b+c
    
    a,b,c=3,4,7
    print(h(b),a,b,c)
    
except: print('error')
