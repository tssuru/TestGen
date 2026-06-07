try:
    
    a,b,c=9,8,7
    def g(a,b,c):
        print(a,b,c,end="")
    
    g(c=3,a=0,c=1)
    print(a,b,c)
    
except: print('error')
