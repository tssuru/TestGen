try:
    
    a,b,c=8,8,9
    def g(a,b=7,c=6):
        print(a,b,c,end="")
    
    g(a=1,3,b=2)
    print(a,b,c)
    
except: print('error')
