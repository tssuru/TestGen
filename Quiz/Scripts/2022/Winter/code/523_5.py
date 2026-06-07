try:
    
    a,b,c=9,8,7
    def g(a,b=6,c=7):
        print(a,b,c,end="")
    
    g(1,0)
    print(a,b,c)
    
except: print('error')
