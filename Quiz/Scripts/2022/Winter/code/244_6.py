try:
    a,b,c=7,4,5
    def g(a):
        a=1
        b+=1
        c=5
        return a+b+c
    
    a,b,c=7,3,8
    print(g(b),a,b,c)
    
except: print('error')
