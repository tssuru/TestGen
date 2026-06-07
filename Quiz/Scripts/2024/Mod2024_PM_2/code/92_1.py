try:
    a,b,c=0,5,0
    def h(a):
        a*=5
        b=3
        c=2
        return a+b+c
    
    a,b,c=1,4,3
    print(h(b),a,b,c)
    
except: print('error')
