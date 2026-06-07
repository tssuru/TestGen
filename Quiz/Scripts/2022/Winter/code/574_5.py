try:
    
    a,b,c=8,7,8
    def g(a,b,c=6):
        print(a,b,c,end="")
    
    g(4,2,b=0)
    print(a,b,c)
    
except: print('error')
