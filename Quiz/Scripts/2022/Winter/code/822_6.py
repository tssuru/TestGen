try:
    a,b,c=8,4,6
    def g(b):
        a+=1
        b=4
        c=3
        return a+b+c
    
    a,b,c=3,2,7
    print(g(b),a,b,c)
    
except: print('error')
