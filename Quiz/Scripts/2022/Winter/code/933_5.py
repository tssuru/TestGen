try:
    
    a,b,c=7,8,9
    def g(a,b,c=6):
        print(a,b,c,end="")
    
    g(0,3)
    print(a,b,c)
    
except: print('error')
