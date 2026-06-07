try:
    
    a,b,c=6,8,7
    def g(a,b,c):
        print(a,b,c,end="")
    
    g(5,1,a=2)
    print(a,b,c)
    
except: print('error')
