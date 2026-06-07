try:
    
    a,b,c=6,8,7
    def g(a,b=9,c=6):
        print(a,b,c,end="")
    
    g(5,0)
    print(a,b,c)
    
except: print('error')
