try:
    
    a,b,c=6,8,9
    def g(a,b=7,c=6):
        print(a,b,c,end="")
    
    g(3,c=0,b=2)
    print(a,b,c)
    
except: print('error')
