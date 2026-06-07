try:
    a,b,c=7,9,2
    def g(a):
        a=4
        b-=1
        c=2
        return a+b+c
    
    a,b,c=1,8,3
    print(g(b),a,b,c)
    
except: print('error')
