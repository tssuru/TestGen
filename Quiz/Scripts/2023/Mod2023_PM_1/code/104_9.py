try:
    a,b,c=3,4,8
    def g(a):
        a+=1
        b=5
        c=3
        return a+b+c
    
    a,b,c=5,2,0
    print(g(b),a,b,c)
    
except: print('error')
