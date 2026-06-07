try:
    a,b,c=0,6,4
    def h(a):
        a*=2
        b=1
        c=5
        return a+b+c
    
    a,b,c=3,1,5
    print(h(b),a,b,c)
    
except: print('error')
