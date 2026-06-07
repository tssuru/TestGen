try:
    a,b,c=3,7,4
    def g(a):
        a=4
        b-=3
        c=1
        return a+b+c
    
    a,b,c=6,1,0
    print(g(b),a,b,c)
    
except: print('error')
