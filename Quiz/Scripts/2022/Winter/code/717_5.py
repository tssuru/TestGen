try:
    
    a,b,c=6,8,9
    def g(a,b,c=7):
        print(a,b,c,end="")
    
    g(2,4,c=1)
    print(a,b,c)
    
except: print('error')
