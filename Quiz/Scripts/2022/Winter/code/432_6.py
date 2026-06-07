try:
    a,b,c=2,1,8
    def g(a):
        a=1
        b+=3
        c=2
        return a+b+c
    
    a,b,c=4,9,3
    print(g(b),a,b,c)
    
except: print('error')
