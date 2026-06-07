try:
    a,b,c=7,6,1
    def g(a):
        a=5
        b*=4
        c=1
        return a+b+c
    
    a,b,c=3,2,4
    print(g(b),a,b,c)
    
except: print('error')
