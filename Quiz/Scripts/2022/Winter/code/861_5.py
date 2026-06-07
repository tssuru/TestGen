try:
    
    a,b,c=9,8,7
    def g(a,b,c):
        print(a,b,c,end="")
    
    g(b=3,c=2,1)
    print(a,b,c)
    
except: print('error')
