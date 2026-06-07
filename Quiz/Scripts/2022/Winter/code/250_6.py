try:
    a,b,c=9,3,8
    def g(a):
        a+=1
        b=2
        c=3
        return a+b+c
    
    a,b,c=4,3,1
    print(g(b),a,b,c)
    
except: print('error')
