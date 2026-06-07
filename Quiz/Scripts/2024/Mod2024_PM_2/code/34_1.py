try:
    a,b,c=2,9,2
    def g(a):
        a+=1
        b=3
        c=4
        return a+b+c
    
    a,b,c=0,4,3
    print(g(b),a,b,c)
    
except: print('error')
