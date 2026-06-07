try:
    a,b,c=2,5,7
    def g(a):
        a=4
        b+=1
        c=3
        return a+b+c
    
    a,b,c=9,8,6
    print(g(b),a,b,c)
    
except: print('error')
