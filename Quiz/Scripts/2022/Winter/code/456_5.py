try:
    
    a,b,c=6,8,7
    def g(a,b,c):
        print(a,b,c,end="")
    
    g(0,3,a=1)
    print(a,b,c)
    
except: print('error')
