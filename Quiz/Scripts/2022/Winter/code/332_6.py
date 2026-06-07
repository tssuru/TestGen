try:
    a,b,c=0,5,8
    def g(a):
        a=2
        b=5
        c=1
        return a+b+c
    
    a,b,c=4,1,9
    print(g(b),a,b,c)
    
except: print('error')
