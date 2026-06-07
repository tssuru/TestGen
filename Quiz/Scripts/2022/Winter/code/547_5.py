try:
    
    a,b,c=6,8,9
    def g(a,b,c=7):
        print(a,b,c,end="")
    
    g(a=4,2,b=0)
    print(a,b,c)
    
except: print('error')
