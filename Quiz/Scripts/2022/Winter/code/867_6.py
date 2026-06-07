try:
    a,b,c=8,7,1
    def g(a):
        a=1
        b+=5
        c=4
        return a+b+c
    
    a,b,c=5,0,9
    print(g(b),a,b,c)
    
except: print('error')
