try:
    a,b,c=8,0,2
    def g(b):
        a+=1
        b=2
        c=3
        return a+b+c
    
    a,b,c=1,4,7
    print(g(b),a,b,c)
    
except: print('error')
