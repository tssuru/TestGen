try:
    a,b,c=4,5,9
    def g(a):
        a+=1
        b=5
        c=3
        return a+b+c
    
    a,b,c=6,2,1
    print(g(b),a,b,c)
    
except: print('error')
