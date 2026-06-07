try:
    a,b,c=5,7,0
    def g(a):
        a+=1
        b=3
        c=5
        return a+b+c
    
    a,b,c=9,8,3
    print(g(b),a,b,c)
    
except: print('error')
