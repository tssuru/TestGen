try:
    
    a,b,c=8,7,8
    def g(a,b=9,c=6):
        print(a,b,c,end="")
    
    g(0,4,c=1)
    print(a,b,c)
    
except: print('error')
