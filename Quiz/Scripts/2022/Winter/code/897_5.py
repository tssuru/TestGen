try:
    
    a,b,c=7,8,6
    def g(a,b=9,c=6):
        print(a,b,c,end="")
    
    g(a=3,c=0,b=3)
    print(a,b,c)
    
except: print('error')
