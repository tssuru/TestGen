try:
    a,b,c=9,8,2
    def g(b):
        a=1
        b*=4
        c=5
        return a+b+c
    
    a,b,c=1,6,3
    print(g(b),a,b,c)
except: print('error')
