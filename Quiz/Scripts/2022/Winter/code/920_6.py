try:
    a,b,c=4,8,2
    def g(a):
        a=5
        b*=3
        c=1
        return a+b+c
    
    a,b,c=1,3,5
    print(g(b),a,b,c)
    
except: print('error')
