try:
    a,b,c=9,6,1
    def g(a):
        a=3
        b+=1
        c=2
        return a+b+c
    
    a,b,c=7,0,2
    print(g(b),a,b,c)
except: print('error')
