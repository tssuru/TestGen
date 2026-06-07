try:
    
    a,b,c=7,8,9
    def g(a,b=7,c=6):
        print(a,b,c,end="")
    
    g(3,a=0)
    print(a,b,c)
    
except: print('error')
