try:
    a,b,c=4,5,9
    def g(a):
        a=5
        b*=2
        c=5
        return a+b+c
    
    a,b,c=1,6,8
    print(g(b),a,b,c)
    
except: print('error')
