try:
    a,b,c=2,9,8
    def g(a):
        a+=1
        b=5
        c=2
        return a+b+c
    
    a,b,c=6,3,5
    print(g(b),a,b,c)
    
except: print('error')
