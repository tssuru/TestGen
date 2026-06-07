try:
    a,b,c=1,4,7
    def g(a):
        a=1
        b-=4
        c=5
        return a+b+c
    
    a,b,c=1,8,5
    print(g(b),a,b,c)
    
except: print('error')
