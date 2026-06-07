try:
    
    a,b,c=7,7,8
    def g(a,b=6,c=9):
        print(a,b,c,end="")
    
    g(a=1,3,c=0)
    print(a,b,c)
    
except: print('error')
