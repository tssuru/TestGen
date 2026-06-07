try:
    a,b,c=5,3,4
    def g(a):
        a=1
        b=5
        c=4
        return a+b+c
    
    a,b,c=1,0,6
    print(g(b),a,b,c)
    
except: print('error')
